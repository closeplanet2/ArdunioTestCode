void loop() {
  getDistance();
  Serial.print(String(distance)+ '\n');
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
