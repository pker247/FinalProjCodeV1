//header file meant to control movement
//Inclusion of libraries
#ifndef MOVEMENT_H_
#define MOVEMENT_H_
#include <Servo.h>

#define ARM_DOWN 1
#define ARM_UP 2
#define FAN_ON 3
#define FAN_OFF 4

class Movement {
  public:
    Movement();
      void setup(Servo left, Servo right, Servo arm, Servo fan, int armPot);

      //stop both drive motors
      void allStop();
  
      //drive forwards
      void forward();
  
      //drive backwards
      void backward();
  
      //rotate the robot to the left 
      void turnLeft();
  
      //rotate the robot to the right 
      void turnRight();
      
      //raises arm
      void raiseArm();
  
      //lowers arm
      void lowerArm();

      //fan on
      void fanOn();

      //fan off
      void fanOff();

  private:
    int State;
    int encTicks;
    int encRotations;
    Servo leftMotor, rightMotor, armMotor, fanMotor;
    bool armRaised, fanOn;
    int potPin, potVal, potAngle;

    
}

#endif
