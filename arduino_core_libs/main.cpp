#include "WProgram.h"

int main(void);

extern "C" void __cxa_pure_virtual(void) {
cli();
for (;;);
}

int main(void)
{
	for (;;) {}
}

/*
 * this is just a dummy to create the core.a file
 *
 * the cxa stuff is to please the linker
 * some info on avrfreaks.net
 *
 * main.o will never get linked
 *
 */
