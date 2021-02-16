void loop() {
  getDistance();
  Serial.print(String(distance)+ '\n');
  if(currentPump != -1){
    currentDistance = distanceList[currentPump-1];
    IsPumpUnderNosel(distance, currentPump);
  }else{
    currentDistance = -1;
  }
  
  delay (300);
}

int getDistance(){
  distanceSensor.startRanging(); //Write configuration bytes to initiate measurement

  while (!distanceSensor.checkForDataReady()){
    delay(1);
  }
  
  distance = distanceSensor.getDistance(); //Get the result of the measurement from the sensor
  distanceSensor.clearInterrupt();
  distanceSensor.stopRanging();
}

void IsPumpUnderNosel(int distance, int pump){
  int min = currentDistance - offsetDistance;
  int max = currentDistance + offsetdistance;

  if(distance > min && distance < max){
    currentPump = -1;
    TriggerPump(pump);
  }
}
