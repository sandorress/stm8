/******************************************************************************************* 
	The second hello world example. This blinks the LED on PB5 with interrupt.
	some of the power saving features are used
	http://www.st.com/web/en/resource/technical/document/application_note/CD00219011.pdf
	"Rules to help minimize power consumption"
 ******************************************************************************************/
#include <stm8s103f.h>

void TIM4_ISR(void) __interrupt(23)
{
	PB_ODR^=0x20;
	TIM4_SR&=(unsigned char)~0x01;	
}

void main()
{
	// LOW POWER SETTINGS -- begin --
	// 1. configure all unused port pins to output low.
	PA_DDR= 0xFF;
	PB_DDR= 0xFF;
	PC_DDR= 0xFF;
	PD_DDR= 0xFF;
	PA_CR1= 0xFF;
	PB_CR1= 0xFF;
	PC_CR1= 0xFF;
	PD_CR1= 0xFF;
	PA_ODR= 0;
	PB_ODR= 0x20;
	PC_ODR= 0;
	PD_ODR= 0;
	// switch off all unused peripherals (USART, SWIM - the others are turned off by default)
	UART1_CR1=0x20; // RM 22.7.5
	// turn off peripherial clocks, except for TIM4.	
	CLK_PCKENR1= 0x10;
	CLK_PCKENR2= 0x00; 
	// use minimal frequency
	// turn on LSI 128kHz oscillator
	// Following the reference manual, 9.2.2 "Master clock switching procedures"
	// enable SWN bit in the Switch control register 
	CLK_SWCR|=0x2;
	CLK_SWR=0xD2;	// make sure, that LSI_EN option bit is set. (programmer!!! option byte!)
    // wait until switch completed
	while (CLK_SWCR & 0x1); 
	// downclock to 1kHz, divide 128. RM 9.9.6
	CLK_CKDIVR|=0x07;
	
	// setup TIM4 now we have ~128kHz master clock, divide it further 
	TIM4_PSCR= 0x7;	// prescaler 128 RM 19.6.8.
	// now the counter's clock is 1kHz. 
	// set auto reload value to 249
	// we will have interrupts about 1k/250=4 Hz. 
	TIM4_ARR= 0xEF; // RM 19.6.9.
	TIM4_IER= 0x01; // enable update interrupt, RM 19.6.4.
	TIM4_CR1= 0x01;	// enable counting. RM 19.6.1.
	// enable interrupts
	rim();
	
	// do nothing, but wait for interrupts
	while (1) 
		wfi();
	
} 

