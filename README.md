# Soft Sensor

This is an Arduino library for getting soft values from sensors, taking average after some readings in order to get the usual oscillating numbers from some sensors more soften.

##### Installation

* After [download](https://github.com/sulram/softsensor/archive/master.zip) and unzipping the file, rename the uncompressed folder to `SoftSensor`
* Check that the `SoftSensor` folder contains `SoftSensor.cpp` and `SoftSensor.h`
* Place the `SoftSensor` library folder in your `<arduinosketchfolder>/libraries/` folder
* You may need to create the libraries subfolder if its your first library
* Restart Arduino IDE.

##### Usage

```
#include <SoftSensor.h>

// create a SoftSensor with 10 readings (maximum 30)
SoftSensor soft_ldr = SoftSensor(10);

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
