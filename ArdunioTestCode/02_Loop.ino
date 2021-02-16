void loop() {


getDistance();

Serial.print(String(distance)+ '\n');
delay (300);
  /*servoFive .write(90);
   servoSix .write(90);

delay(1000);
 
  servoSix.write(0);
  servoFive.write(0);
  
  delay(1000);
*/

}


int getDistance()
{
  distanceSensor.startRanging(); //Write configuration bytes to initiate measurement

  while (!distanceSensor.checkForDataReady())
  {
    delay(1);
  }
  distance = distanceSensor.getDistance(); //Get the result of the measurement from the sensor
  distanceSensor.clearInterrupt();

  distanceSensor.stopRanging();
}
