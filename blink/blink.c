/* 
 * The first hello world example. This blinks the LED on PB5 
 *
 */
#include <stm8s103f.h>


int main(void)
{ 
	unsigned l;
	// Configure pins configure PB5 as output
	// push-pull 
	PB_DDR|= 0x20;
	PB_CR1|= 0x20;

	while (1) {
		PB_ODR^=0x20;
		for (l=0xFFFF; l!=0; --l);
	}
}