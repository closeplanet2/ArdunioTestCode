void TriggerPump(int number){
  Servo servo;
  switch (var) {
    case 1:
      servo = servoOne;
      break;
    case 2:
      servo = servoTwo;
      break;
    case 3:
      servo = servoThree;
      break;
    case 4:
      servo = servoFour;
      break;
    case 5:
      servo = servoFive;
      break;
    case 6:
      servo = servoSix;
      break;
  }

  servo.write(90);
  delay(2000);
  servo.write(0);
  delay(2000);
  servo.write(90);
}
