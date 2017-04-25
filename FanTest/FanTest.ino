#include <Servo.h>

Servo fan;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Begin");
  fan.attach(22, 1000, 2000);
  fan.writeMicroseconds(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  val = analogRead(A0);
  val = map(val, 0, 1023, 1000, 2000);
  fan.writeMicroseconds(val);

}
