#ifndef SOFTSENSOR_H
#define SOFTSENSOR_H

#include <Arduino.h>

#define READINGS 30

class SoftSensor {
	public:
		SoftSensor(int _readings);
		int update(int _value);
		int value;
		
	private:
		int index;
		int total;
		int readings;
		int array[READINGS];
};

#endif
