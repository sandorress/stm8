#ifndef __UART_H__
#define __UART_H__
#define MASTER_CLOCK	2000000
#define BAUD			4800

#define	UART_DIV (MASTER_CLOCK/ BAUD)
#include "queue.h"
void 	uart_init(void);
void 	uart_puts(const char *p);
int 	uart_getc();
void 	uart_putc(unsigned char c);
void 	uart_receive(void) __interrupt(18);
#endif