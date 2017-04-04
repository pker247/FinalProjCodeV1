#include <Servo.h>
#include "Movement.h"
#include <Encoder.h>

int fwdSpd = 0;
int revSpd = 180;
int stpSpd = 90;
int targetPotRaised = 0;
int targetPotLowered = 360;
double targetRots;
int targetTicks;
int rotsToTicks;

Movement::Movement() {
  
}
void Movement::setup(Servo left, Servo right, Servo arm, Servo fan, int armPot) {
  //pointers
  leftMotor = left;
  rightMotor = right;
  armMotor = arm;
  fanMotor = fan;
  armPot = potPin;

  //initialize variables and do base calculations
  armRaised = false;
  fanOn = false;
  encRots = encTicks / 180.0; //counts the number of rotations for the encoder
  slideDist = 4.0; //slider moves 4 inches to change positions
  distToTeeth = slideDist * (19.0 / 2.5);
  teethToRots = distToTeeth / 12.0; //there are 12 teeth on the pinion
  rotsToTicks = teethToRots * 180.0;
  targetTicks = rotsToTicks;
  State = ARM_DOWN; //initial state for candle cleaner system

  potVal = analogRead(potPin);
  
}

//stop all the different motors
void Movement::allStop() {
  leftMotor.write(stpSpd);
  rightMotor.write(stpSpd);
  fanMotor.write(stpSpd);
  armMotor.write(stpSpd);
}

//drive forwards
void Movement::forward(){
  leftMotor.write(fwdSpd);
  rightMotor.write(revSpd);
}

//drive backwards
void Movement::backward(){
  leftMotor.write(fwdSpd);
  rightMotor.write(revSpd);
}

//rotate the robot to the left 
void Movement::turnLeft(){
  leftMotor.write(stpSpd);
  rightMotor.write(revSpd);
}

//rotate the robot to the right 
void Movement::turnRight(){
  leftMotor.write(fwdSpd);
  rightMotor.write(stpSpd);
}

//raises arm
void Movement::raiseArm(){
  
}

//lowers arm
void Movement::lowerArm(){

}

//fan on
void Movement::fanOn(){

}

//fan off
void Movement::fanOff(){

}

