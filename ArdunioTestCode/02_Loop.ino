void loop() {
  getDistance();
  if(currentPump != -1){
    currentDistance = distanceList[currentPump-1];
    Serial.print(String(distance) + "/" + String(currentDistance)+ '\n');
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
  int max = currentDistance + offsetDistance;

  if(distance > min && distance < max){
    //TriggerPump(pump);
    servoOne.write(90);
    Serial.print(String(number) + " pump has opened" + '\n');
    delay(1000);
    servoOne.write(0);
    Serial.print(String(number) + " pump has closed" + '\n');
    delay(1000);
  }
}

//d
