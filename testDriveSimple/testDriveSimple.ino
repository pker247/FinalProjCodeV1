#include <Servo.h>

Servo leftDriveMotor;
Servo rightDriveMotor;
#define in1Left 49
#define in2Left 50
//Servo pwmLeft;
#define pwmLeft 48
#define in1Right 52
#define in2Right 53
#define pwmRight 51
//Servo pwmRight;


int power;
int velocity;

void setup() {
  // put your setup code here, to run once:
  pinMode(in1Left, OUTPUT);
  pinMode(in2Left, OUTPUT);
  pinMode(pwmLeft, OUTPUT);
  pinMode(in1Right, OUTPUT);
  pinMode(in2Right, OUTPUT);
  pinMode(pwmRight, OUTPUT);
  //pwmLeft.attach(48);
  //pwmRight.attach(51);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(in1Left,  HIGH);
  //digitalWrite(in1Right,  LOW);
  //digitalWrite(in2Left,  LOW);
  //digitalWrite(in2Right,  HIGH);
  //digitalWrite(pwmLeft, HIGH);
  //digitalWrite(pwmRight, HIGH);
  //delayMicroseconds(800);
  digitalWrite(in1Left,  HIGH);
  digitalWrite(in1Right,  LOW);
  digitalWrite(in2Left,  HIGH);
  digitalWrite(in2Right,  LOW);
  //delayMicroseconds(800);
  //pwmLeft.write(0);
  /*
  pwmRight.attach(0);
  delay(1000);
  //pwmLeft.write(45);
  pwmRight.attach(45);
  delay(1000);
  //pwmLeft.write(90);
  pwmRight.attach(90);
  delay(1000);
  //pwmLeft.write(135);
  pwmRight.attach(135);
  delay(1000);
  //pwmLeft.write(180);
  pwmRight.attach(180);
  delay(1000);
  */
}
