#ifndef NANOSOFTSENSOR_H
#define NANOSOFTSENSOR_H

#include <Arduino.h>

#define NUMREADINGS 50

class NanoSoftSensor {
	public:
		NanoSoftSensor(int readings);
		int update(int value);
		int value();
		int index;
		int total;
		int numreadings;
		int array[NUMREADINGS];
		
	private:
};

#endif