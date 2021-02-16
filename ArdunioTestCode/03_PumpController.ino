void TriggerPump(int number){
  Servo servo;
  switch (number) {
    case 1:
      delay(1000);
      servoOne.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(1000);
      servoOne.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 2:
      delay(1000);
      servoTwo.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(1000);
      servoTwo.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 3:
      delay(1000);
      servoThree.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(1000);
      servoThree.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 4:
      delay(1000);
      servoFour.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(1000);
      servoFour.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 5:
      delay(1000);
      servoFive.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(1000);
      servoFive.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
    case 6:
      delay(1000);
      servoSix.write(90);
      Serial.print(String(number) + " pump has opened" + '\n');
      delay(1000);
      servoSix.write(0);
      Serial.print(String(number) + " pump has closed" + '\n');
      break;
  }
}

//d
