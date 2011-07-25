#include "WProgram.h" // don't touch this

void setup(void); // don't touch this
void loop(void); // don't touch this
int main(void); // don't touch this

// add you functino prototypes here







// don't touch anything below this line

extern "C" void __cxa_pure_virtual(void) {
cli();
for (;;);
}

/* dont touch this: START */
int main(void)
{
	init();

	setup();

	for (;;)
		loop();

	return 0;
}
/* don't touch this: END */
