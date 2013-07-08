# Nano Soft Sensor

This is an Arduino library for getting soft values from sensors, taking average after some readings in order to get the usual oscillating numbers from some sensors more soften.

##### Installation

* After [download](https://github.com/hiperorganicos/ino-nanosoftsensor/archive/master.zip) and unzipping the file, rename the uncompressed folder to `NanoSoftSensor`
* Check that the `NanoSoftSensor` folder contains `NanoSoftSensor.cpp` and `NanoSoftSensor.h`
* Place the `NanoSoftSensor` library folder in your `<arduinosketchfolder>/libraries/` folder
* You may need to create the libraries subfolder if its your first library
* Restart Arduino IDE.

##### Usage

```
#include <NanoSoftSensor.h>

// create a NanoSoftSensor with 10 readings (maximum 30)
NanoSoftSensor soft_ldr = NanoSoftSensor(10);

void setup() {

  Serial.begin(9600);
  
}

void loop() {
  
  int ldr = analogRead(A0);
  
  // update soft sensor with raw value
  soft_ldr.update(ldr);
  
  Serial.print(ldr);
  Serial.print(" ");
  Serial.print(soft_ldr.value); // get value
  Serial.println();
  delay(50);
  
}

```

But you can also do this:

```
...

void loop() {
  
  int ldr = analogRead(A0);
  
  Serial.print(ldr);
  Serial.print(" ");
  Serial.print(soft_ldr.update(ldr)); // update also returns the average value
  Serial.println();
  delay(50);
  
}

```