void setup() {
  Serial.begin(9600);
  Wire.begin();

  
  servoOne.attach(51);
  servoTwo.attach(50);
  servoThree.attach(49);
  servoFour.attach(48);
  servoFive.attach(47);
  servoSix.attach(46);
  
  if (distanceSensor.begin() != 0){
      Serial.print("Failed to load");
    while (1);
  }
  distanceSensor.setDistanceModeLong();
  delay(1000);
  TriggerPump(1);
}
