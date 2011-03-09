#include "WProgram.h" // don't touch this

#include <stdint.h>
#include <Wire.h>  // additional includes go here

void setup(void); // don't touch this
void loop(void); // don't touch this
int main(void); // don't touch this




/* your function prototypes go here */




/* dont touch this: START */
extern "C" void __cxa_pure_virtual(void) {
cli();
for (;;);
}

int main(void)
{
	init();

	setup();

	for (;;)
		loop();

	return 0;
}
/* don't touch this: END */




/* your 'normal' arduino code goes here */
/* but you'll need to do function prototypes above ! */




// I2C Digital Potentiometer
// by Nicholas Zambetti <http://www.zambetti.com>
// and Shawn Bonkowski <http://people.interaction-ivrea.it/s.bonkowski/>

// Demonstrates use of the Wire library
// Controls AD5171 digital potentiometer via I2C/TWI

// Created 31 March 2006

// This example code is in the public domain.

// This example code is in the public domain.


void setup()
{
  Wire.begin(); // join i2c bus (address optional for master)
}

byte val = 0;

void loop()
{
  Wire.beginTransmission(44); // transmit to device #44 (0x2c)
                              // device address is specified in datasheet
  Wire.send(0x00);            // sends instruction byte
  Wire.send(val);             // sends potentiometer value byte
  Wire.endTransmission();     // stop transmitting

  val++;        // increment value
  if(val == 64) // if reached 64th position (max)
  {
    val = 0;    // start over from lowest value
  }
  delay(500);
}

