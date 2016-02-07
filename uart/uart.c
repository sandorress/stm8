/*
	The usart module
*/
#include <stm8s103f.h>
#include <stdbool.h>
#include "queue.h"
#include "uart.h"

static volatile charqueue rq;	// read queue

void uart_init(void)
{
	// set baud rate according to RM 22.3.4 
	// for 2MHz clock and 9600 baud the value is: 208 = 0x00D0
	// therefore UART1_BRR1 - bits 11:4 = 0x0D
	// and UART1_BRR2 - bits 15:12|3:0 = 0	
	UART1_BRR2= (unsigned char) ((UART_DIV >> 12) | (UART_DIV &0xF));
	UART1_BRR1= (unsigned char) ( UART_DIV >> 4);
	// init receive queue
	queue_init(rq);	
	// rne interrupt, enable transmit and read
	UART1_CR2= 0x20|  0x08 | 0x04;
}

int uart_getc()
{
	//// poll version
	//while (! (UART1_SR & 0x20));
	//return  UART1_DR;
	return queue_isempty(rq) ? -1: queue_dequeue(rq);
}

void uart_putc(unsigned char c)
{
	while (!(UART1_SR & 0x80));
	UART1_DR= c;
}

void uart_puts(const char *p)
{
	while (*p) 
		uart_putc(*p++);
}

void uart_receive(void) __interrupt(18)
{
	unsigned char ch= UART1_DR;
	queue_enqueue(rq, ch);
}