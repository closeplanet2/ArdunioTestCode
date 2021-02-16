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

int distanceList[] = {100,80,60,40,20,0,0};
int currentPump = -1;
int currentDistance = 0;
int distance =0;
