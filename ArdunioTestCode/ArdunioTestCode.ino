#include <Servo.h>
#include <SoftwareSerial.h>
#include "SparkFun_VL53L1X.h"
#include <Wire.h>

SFEVL53L1X distanceSensor;

Servo servoOne;
Servo servoTwo;
Servo servoThree;
Servo servoFour;
Servo servoFive;
Servo servoSix;

int distanceList[] = {24.6,20.5,16.5,12.5,8.5,4.5};
int offsetDistance = 1;

int currentPump = -1;
int currentDistance = -1;
int distance =0;
//s
