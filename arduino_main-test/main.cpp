#include "WProgram.h" // don't touch this

#include <stdint.h>

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

uint8_t led_pin = 13;


void setup(void)
{
    pinMode(led_pin,OUTPUT);
    //Serial.begin(9600);
}

void loop(void)
{
    digitalWrite(led_pin,HIGH);
    delay(250);
    digitalWrite(led_pin,LOW);
    delay(250);
    //Serial.println("test");
}
