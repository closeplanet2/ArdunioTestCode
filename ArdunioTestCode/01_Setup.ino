void setup() {
  Serial.begin(9600);
  Wire.begin();

  
  servoOne.attach(51);
  servoTwo.attach(50);
  servoThree.attach(49);
  servoFour.attach(48);
  servoFive.attach(47);
  servoSix.attach(46);

  servoOne.write(0);
  servoTwo.write(0);
  servoThree.write(0);
  servoFour.write(0);
  servoFive.write(0);
  servoSix.write(0);
  
  if (distanceSensor.begin() != 0){
      Serial.print("Failed to load");
    while (1);
  }
  distanceSensor.setDistanceModeLong();
}

//d
