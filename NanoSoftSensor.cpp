#include "NanoSoftSensor.h" 

NanoSoftSensor::NanoSoftSensor(int readings){
	if(readings <= NUMREADINGS){
		numreadings = readings;
	} else {
		numreadings = NUMREADINGS;
	}
	for (int i = 0; i < numreadings; i++){
		array[i] = 0;
	}
	index = 0;
	total = 0;
}

int NanoSoftSensor::update(int value) {
	total -= array[index];
	array[index] = value;
	total += array[index];
	index = (index + 1) % numreadings;
	return total / numreadings;
}

int NanoSoftSensor::value() {
	return total / numreadings;
}