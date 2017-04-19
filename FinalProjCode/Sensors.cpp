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

void Sensors:zero(){
	
}

int Sensors:getRadarLeft(){
	
}

int Sensors:getRadarRight(){
	
}

int Sensors:getRadarFront(){
	
}

int Sensors:getRadarBack(){
	
}

bool Sensors:onLine(){
	
}

bool Sensors:flame(){
	
}

int Sensors:getRadarFlame(){
	
}

