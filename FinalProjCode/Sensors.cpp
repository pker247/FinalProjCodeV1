#include "Sensors.h"

#define trigPinFroward 31
#define echoPinFroward 32
#define trigPinBackward 33
#define echoPinBackward 34
#define trigPinLeft 35
#define echoPinLeft 36
#define trigPinRight 37
#define echoPinRight 38

#define flameSensor 39

//Analog pins for line sensors: A0, A1, A2, A3
//Analog pin for flame sensor: A5
Sensors:: Sensors(){

}

void Sensors::setup(){
	pinMode(trigPinFroward, OUTPUT);
	pinMode(echoPinForward, INPUT);
	pinMode(trigPinBackward, OUTPUT);
	pinMode(echoPinBackward, INPUT);
	pinMode(trigPinLeft, OUTPUT);
	pinMode(echoPinLeft, INPUT);
	pinMode(trigPinRight, OUTPUT);
	pinMode(echoPinRight, INPUT);
	pinMode(flameSensor, INPUT);
}

//0-2
int Sensors::goForwardUltra(){
	//0 - F, 1 - left, 2 - right
	if(frontClear()){
		return 0;
	}
	else if(leftClear()){
		return 1;
	}
	else if(rightClear()){
		return 2;
	}
	else{return 3;}
}

bool Sensors::leftClear(){
	//9
	
	long duration, distance;
  digitalWrite(trigPinLeft, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPinLeft, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPinLeft, LOW);
  duration = pulseIn(echoPinLeft, HIGH);
  distance = ((duration/2) / 29.1) * (0.3937);
  if(distance > 9){
	  return true;
  }
  return false;
}
bool Sensors::rightClear(){
		long duration, distance;
  digitalWrite(trigPinRight, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPinRight, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPinRight, LOW);
  duration = pulseIn(echoPinRight, HIGH);
  distance = ((duration/2) / 29.1) * (0.3937);
  if(distance > 9){
	  return true;
  }
  return false;
}
bool Sensors::frontClear(){
		long duration, distance;
  digitalWrite(trigPinFront, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPinFront, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPinFront, LOW);
  duration = pulseIn(echoPinFront, HIGH);
  distance = ((duration/2) / 29.1) * (0.3937);
  if(distance > 9){
	  return true;
  }
  return false;
}

void Sensors::zero(){
	
}

bool Sensors::onLine(){
	if((analogRead(A13) && analogRead(A15)) || (analogRead(A12) && analogRead(A14))){
		return true;
	}
	else{
		return false;
	}
}

bool Sensors::flame(){
	
}

int Sensors::getRadarFlame(){
	
}
