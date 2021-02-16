#include <Servo.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(11, 12);

Servo servoOne;
Servo servoTwo;
Servo servoThree;
Servo servoFour;
Servo servoFive;
Servo servoSix;

int distanceList[] = {100,80,60,40,20,0,0};
int currentPump = -1;
int currentDistance = 0;
