#ifndef SENSORS_H_
#define SENSORS_H_

//Encoder Info

//Ultrasonic Info

//Light Sensor Info

//IR Sensor Info

class Sensors{
public:
	Sensors();
	void setup();
	void zero();
	
	int getRadarLeft();
	int getRadarRight();
	int getRadarFront();
	int getRadarBack();
	
	bool onLine();
	bool flame();
	int getRadarFlame();
private:
	
}

#endif
