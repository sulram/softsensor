#ifndef NANOSOFTSENSOR_H
#define NANOSOFTSENSOR_H

#include <Arduino.h>

#define READINGS 30

class NanoSoftSensor {
	public:
		NanoSoftSensor(int _readings);
		int update(int _value);
		int value;
		
	private:
		int index;
		int total;
		int readings;
		int array[READINGS];
};

#endif