void TriggerPump(int pump){
  Servo servo;
  switch (number) {
    case 1:
      servoOne.write(90);
      Serial.print(String(pump) + " pump has opened" + '\n');
      delay(1000);
      servoOne.write(0);
      Serial.print(String(pump) + " pump has closed" + '\n');
      delay(1000);
      break;
    case 2:
      servoTwo.write(90);
      Serial.print(String(pump) + " pump has opened" + '\n');
      delay(1000);
      servoTwo.write(0);
      Serial.print(String(pump) + " pump has closed" + '\n');
      delay(1000);
      break;
    case 3:
      servoThree.write(90);
      Serial.print(String(pump) + " pump has opened" + '\n');
      delay(1000);
      servoThree.write(0);
      Serial.print(String(pump) + " pump has closed" + '\n');
      delay(1000);
      break;
    case 4:
      servoFour.write(90);
      Serial.print(String(pump) + " pump has opened" + '\n');
      delay(1000);
      servoFour.write(0);
      Serial.print(String(pump) + " pump has closed" + '\n');
      delay(1000);
      break;
    case 5:
      servoFive.write(90);
      Serial.print(String(pump) + " pump has opened" + '\n');
      delay(1000);
      servoFive.write(0);
      Serial.print(String(pump) + " pump has closed" + '\n');
      delay(1000);
      break;
    case 6:
      servoSix.write(90);
      Serial.print(String(pump) + " pump has opened" + '\n');
      delay(1000);
      servoSix.write(0);
      Serial.print(String(pump) + " pump has closed" + '\n');
      delay(1000);
      break;
  }
}

//d
