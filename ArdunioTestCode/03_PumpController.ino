void TriggerPump(int number){
  Servo servo;
  switch (number) {
    case 1:
      servoOne.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(2000);
      servoOne.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 2:
      servoTwo.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(2000);
      servoTwo.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 3:
      servoThree.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(2000);
      servoThree.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 4:
      servoFour.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(2000);
      servoFour.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 5:
      servoFive.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(2000);
      servoFive.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 6:
      servoSix.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(2000);
      servoSix.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
  }
}

//d
