/*
 A simple echo example.
 read characters from the UART and echo it back, with case reversed.

*/
#include <ctype.h>
#include <stm8s103f.h>
#include "uart.h"

void main()
{
	int ch;
	uart_init();
	PB_DDR|= 0x20;
	PB_CR1|= 0x20;
	
	rim();
	uart_puts("Hello World\r\n");
	
	while (1)
	{
		PB_ODR=0x20;
		ch= uart_getc();
		if (ch != -1) {
			if (isupper(ch))
				ch= tolower(ch);
			else if (islower(ch))
				ch= toupper(ch);
			PB_ODR=0x0; // turn on red LED to show communication
			uart_putc(ch);
		}
	}
}