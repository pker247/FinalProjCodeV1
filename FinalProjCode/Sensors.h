#ifndef SENSORS_H_
#define SENSORS_H_

//Encoder Info

//Ultrasonic Info

//Light Sensor Info

//IR Sensor Info

class Sensors{
  public:
	bool leftClear();
	bool rightClear();
	bool frontClear();
	int goForwardUltra();
  private:
	int lineFrontLeft();
	int lineFrontRight();
	int lineBackLeft();
	int lineBackRight();
	bool lineFront();
	bool lineRear();
}

#endif
