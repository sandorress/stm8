/* STM8S103F.h */

/* Copyright (c) 2003-2015 STMicroelectronics */
/* modified for SDCC */

#ifndef __STM8S103F__
#define __STM8S103F__


#define rim()                 {__asm__("rim\n");}  /* enable interrupts */
#define sim()                 {__asm__("sim\n");}  /* disable interrupts */
#define nop()                 {__asm__("nop\n");}  /* No Operation */
#define trap()                {__asm__("trap\n");} /* Trap (soft IT) */
#define wfi()                 {__asm__("wfi\n");}  /* Wait For Interrupt */
#define halt()                {__asm__("halt\n");} /* Halt */

/* Port A */
/*****************************************************************/

/* Port A data output latch register */
#define PA_ODR	*((volatile unsigned char*)0x5000)

/* Port A input pin value register */
#define PA_IDR	*((volatile unsigned char*)0x5001)

/* Port A data direction register */
#define PA_DDR	*((volatile unsigned char*)0x5002)

/* Port A control register 1 */
#define PA_CR1	*((volatile unsigned char*)0x5003)

/* Port A control register 2 */
#define PA_CR2	*((volatile unsigned char*)0x5004)

/* Port B */
/*****************************************************************/

/* Port B data output latch register */
#define PB_ODR	*((volatile unsigned char*)0x5005)

/* Port B input pin value register */
#define PB_IDR	*((volatile unsigned char*)0x5006)

/* Port B data direction register */
#define PB_DDR	*((volatile unsigned char*)0x5007)

/* Port B control register 1 */
#define PB_CR1	*((volatile unsigned char*)0x5008)

/* Port B control register 2 */
#define PB_CR2	*((volatile unsigned char*)0x5009)

/* Port C */
/*****************************************************************/

/* Port C data output latch register */
#define PC_ODR	*((volatile unsigned char*)0x500a)

/* Port C input pin value register */
#define PC_IDR	*((volatile unsigned char*)0x500b)

/* Port C data direction register */
#define PC_DDR	*((volatile unsigned char*)0x500c)

/* Port C control register 1 */
#define PC_CR1	*((volatile unsigned char*)0x500d)

/* Port C control register 2 */
#define PC_CR2	*((volatile unsigned char*)0x500e)

/* Port D */
/*****************************************************************/

/* Port D data output latch register */
#define PD_ODR	*((volatile unsigned char*)0x500f)

/* Port D input pin value register */
#define PD_IDR	*((volatile unsigned char*)0x5010)

/* Port D data direction register */
#define PD_DDR	*((volatile unsigned char*)0x5011)

/* Port D control register 1 */
#define PD_CR1	*((volatile unsigned char*)0x5012)

/* Port D control register 2 */
#define PD_CR2	*((volatile unsigned char*)0x5013)

/* Flash */
/*****************************************************************/

/* Flash control register 1 */
#define FLASH_CR1	*((volatile unsigned char*)0x505a)

/* Flash control register 2 */
#define FLASH_CR2	*((volatile unsigned char*)0x505b)

/* Flash complementary control register 2 */
#define FLASH_NCR2	*((volatile unsigned char*)0x505c)

/* Flash protection register */
#define FLASH_FPR	*((volatile unsigned char*)0x505d)

/* Flash complementary protection register */
#define FLASH_NFPR	*((volatile unsigned char*)0x505e)

/* Flash in-application programming status register */
#define FLASH_IAPSR	*((volatile unsigned char*)0x505f)

/* Flash Program memory unprotection register */
#define FLASH_PUKR	*((volatile unsigned char*)0x5062)

/* Data EEPROM unprotection register */
#define FLASH_DUKR	*((volatile unsigned char*)0x5064)

/* External Interrupt Control Register (ITC) */
/*****************************************************************/

/* External interrupt control register 1 */
#define EXTI_CR1	*((volatile unsigned char*)0x50a0)

/* External interrupt control register 2 */
#define EXTI_CR2	*((volatile unsigned char*)0x50a1)

/* Reset (RST) */
/*****************************************************************/

/* Reset status register 1 */
#define RST_SR	*((volatile unsigned char*)0x50b3)

/* Clock Control (CLK) */
/*****************************************************************/

/* Internal clock control register */
#define CLK_ICKR	*((volatile unsigned char*)0x50c0)

/* External clock control register */
#define CLK_ECKR	*((volatile unsigned char*)0x50c1)

/* Clock master status register */
#define CLK_CMSR	*((volatile unsigned char*)0x50c3)

/* Clock master switch register */
#define CLK_SWR	*((volatile unsigned char*)0x50c4)

/* Clock switch control register */
#define CLK_SWCR	*((volatile unsigned char*)0x50c5)

/* Clock divider register */
#define CLK_CKDIVR	*((volatile unsigned char*)0x50c6)

/* Peripheral clock gating register 1 */
#define CLK_PCKENR1	*((volatile unsigned char*)0x50c7)

/* Clock security system register */
#define CLK_CSSR	*((volatile unsigned char*)0x50c8)

/* Configurable clock control register */
#define CLK_CCOR	*((volatile unsigned char*)0x50c9)

/* Peripheral clock gating register 2 */
#define CLK_PCKENR2	*((volatile unsigned char*)0x50ca)

/* CAN clock control register */
#define CLK_CANCCR	*((volatile unsigned char*)0x50cb)

/* HSI clock calibration trimming register */
#define CLK_HSITRIMR	*((volatile unsigned char*)0x50cc)

/* SWIM clock control register */
#define CLK_SWIMCCR	*((volatile unsigned char*)0x50cd)

/* Window Watchdog (WWDG) */
/*****************************************************************/

/* WWDG Control Register */
#define WWDG_CR	*((volatile unsigned char*)0x50d1)

/* WWDR Window Register */
#define WWDG_WR	*((volatile unsigned char*)0x50d2)

/* Independent Watchdog (IWDG) */
/*****************************************************************/

/* IWDG Key Register */
#define IWDG_KR	*((volatile unsigned char*)0x50e0)

/* IWDG Prescaler Register */
#define IWDG_PR	*((volatile unsigned char*)0x50e1)

/* IWDG Reload Register */
#define IWDG_RLR	*((volatile unsigned char*)0x50e2)

/* Auto Wake-Up (AWU) */
/*****************************************************************/

/* AWU Control/Status Register */
#define AWU_CSR	*((volatile unsigned char*)0x50f0)

/* AWU asynchronous prescaler buffer register */
#define AWU_APR	*((volatile unsigned char*)0x50f1)

/* AWU Timebase selection register */
#define AWU_TBR	*((volatile unsigned char*)0x50f2)

/* Beeper (BEEP) */
/*****************************************************************/

/* BEEP Control/Status Register */
#define BEEP_CSR	*((volatile unsigned char*)0x50f3)

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* SPI Control Register 1 */
#define SPI_CR1	*((volatile unsigned char*)0x5200)

/* SPI Control Register 2 */
#define SPI_CR2	*((volatile unsigned char*)0x5201)

/* SPI Interrupt Control Register */
#define SPI_ICR	*((volatile unsigned char*)0x5202)

/* SPI Status Register */
#define SPI_SR	*((volatile unsigned char*)0x5203)

/* SPI Data Register */
#define SPI_DR	*((volatile unsigned char*)0x5204)

/* SPI CRC Polynomial Register */
#define SPI_CRCPR	*((volatile unsigned char*)0x5205)

/* SPI Rx CRC Register */
#define SPI_RXCRCR	*((volatile unsigned char*)0x5206)

/* SPI Tx CRC Register */
#define SPI_TXCRCR	*((volatile unsigned char*)0x5207)

/* I2C Bus Interface (I2C) */
/*****************************************************************/

/* I2C control register 1 */
#define I2C_CR1	*((volatile unsigned char*)0x5210)

/* I2C control register 2 */
#define I2C_CR2	*((volatile unsigned char*)0x5211)

/* I2C frequency register */
#define I2C_FREQR	*((volatile unsigned char*)0x5212)

/* I2C Own address register low */
#define I2C_OARL	*((volatile unsigned char*)0x5213)

/* I2C Own address register high */
#define I2C_OARH	*((volatile unsigned char*)0x5214)

/* I2C data register */
#define I2C_DR	*((volatile unsigned char*)0x5216)

/* I2C status register 1 */
#define I2C_SR1	*((volatile unsigned char*)0x5217)

/* I2C status register 2 */
#define I2C_SR2	*((volatile unsigned char*)0x5218)

/* I2C status register 3 */
#define I2C_SR3	*((volatile unsigned char*)0x5219)

/* I2C interrupt control register */
#define I2C_ITR	*((volatile unsigned char*)0x521a)

/* I2C Clock control register low */
#define I2C_CCRL	*((volatile unsigned char*)0x521b)

/* I2C Clock control register high */
#define I2C_CCRH	*((volatile unsigned char*)0x521c)

/* I2C TRISE register */
#define I2C_TRISER	*((volatile unsigned char*)0x521d)

/* I2C packet error checking register */
#define I2C_PECR	*((volatile unsigned char*)0x521e)

/* Universal synch/asynch receiver transmitter (UART1) */
/*****************************************************************/

/* UART1 Status Register */
#define UART1_SR	*((volatile unsigned char*)0x5230)

/* UART1 Data Register */
#define UART1_DR	*((volatile unsigned char*)0x5231)

/* UART1 Baud Rate Register 1 */
#define UART1_BRR1	*((volatile unsigned char*)0x5232)

/* UART1 Baud Rate Register 2 */
#define UART1_BRR2	*((volatile unsigned char*)0x5233)

/* UART1 Control Register 1 */
#define UART1_CR1	*((volatile unsigned char*)0x5234)

/* UART1 Control Register 2 */
#define UART1_CR2	*((volatile unsigned char*)0x5235)

/* UART1 Control Register 3 */
#define UART1_CR3	*((volatile unsigned char*)0x5236)

/* UART1 Control Register 4 */
#define UART1_CR4	*((volatile unsigned char*)0x5237)

/* UART1 Control Register 5 */
#define UART1_CR5	*((volatile unsigned char*)0x5238)

/* UART1 Guard time Register */
#define UART1_GTR	*((volatile unsigned char*)0x5239)

/* UART1 Prescaler Register */
#define UART1_PSCR	*((volatile unsigned char*)0x523a)

/* 16-Bit Timer 1 (TIM1) */
/*****************************************************************/

/* TIM1 Control register 1 */
#define TIM1_CR1	*((volatile unsigned char*)0x5250)

/* TIM1 Control register 2 */
#define TIM1_CR2	*((volatile unsigned char*)0x5251)

/* TIM1 Slave Mode Control register */
#define TIM1_SMCR	*((volatile unsigned char*)0x5252)

/* TIM1 external trigger register */
#define TIM1_ETR	*((volatile unsigned char*)0x5253)

/* TIM1 Interrupt enable register */
#define TIM1_IER	*((volatile unsigned char*)0x5254)

/* TIM1 Status register 1 */
#define TIM1_SR1	*((volatile unsigned char*)0x5255)

/* TIM1 Status register 2 */
#define TIM1_SR2	*((volatile unsigned char*)0x5256)

/* TIM1 Event Generation register */
#define TIM1_EGR	*((volatile unsigned char*)0x5257)

/* TIM1 Capture/Compare mode register 1 */
#define TIM1_CCMR1	*((volatile unsigned char*)0x5258)

/* TIM1 Capture/Compare mode register 2 */
#define TIM1_CCMR2	*((volatile unsigned char*)0x5259)

/* TIM1 Capture/Compare mode register 3 */
#define TIM1_CCMR3	*((volatile unsigned char*)0x525a)

/* TIM1 Capture/Compare mode register 4 */
#define TIM1_CCMR4	*((volatile unsigned char*)0x525b)

/* TIM1 Capture/Compare enable register 1 */
#define TIM1_CCER1	*((volatile unsigned char*)0x525c)

/* TIM1 Capture/Compare enable register 2 */
#define TIM1_CCER2	*((volatile unsigned char*)0x525d)

/* TIM1 Counter */
#define TIM1_CNTR	*((volatile unsigned int*)0x525e)
/* Data bits High */
#define TIM1_CNTRH	*((volatile unsigned char*)0x525e)
/* Data bits Low */
#define TIM1_CNTRL	*((volatile unsigned char*)0x525f)

/* TIM1 Prescaler register */
#define TIM1_PSCR	*((volatile unsigned int*)0x5260)
/* Data bits High */
#define TIM1_PSCRH	*((volatile unsigned char*)0x5260)
/* Data bits Low */
#define TIM1_PSCRL	*((volatile unsigned char*)0x5261)

/* TIM1 Auto-reload register */
#define	TIM1_ARR	*((volatile unsigned *)0x5262)
/* Data bits High */
#define TIM1_ARRH	*((volatile unsigned char*)0x5262)
/* Data bits Low */
#define TIM1_ARRL	*((volatile unsigned char*)0x5263)

/* TIM1 Repetition counter register */
#define TIM1_RCR	*((volatile unsigned char*)0x5264)

/* TIM1 Capture/Compare register 1 */
#define TIM1_CCR1	*((volatile unsigned int*)0x5265)
/* Data bits High */
#define TIM1_CCR1H	*((volatile unsigned char*)0x5265)
/* Data bits Low */
#define TIM1_CCR1L	*((volatile unsigned char*)0x5266)

/* TIM1 Capture/Compare register 2 */
#define TIM1_CCR2	*((volatile unsigned int*)0x5267)
/* Data bits High */
#define TIM1_CCR2H	*((volatile unsigned char*)0x5267)
/* Data bits Low */
#define TIM1_CCR2L	*((volatile unsigned char*)0x5268)

/* TIM1 Capture/Compare register 3 */
#define TIM1_CCR3	*((volatile unsigned int*)0x5269)
/* Data bits High */
#define TIM1_CCR3H	*((volatile unsigned char*)0x5269)
/* Data bits Low */
#define TIM1_CCR3L	*((volatile unsigned char*)0x526a)

/* TIM1 Capture/Compare register 4 */
#define TIM1_CCR4	*((volatile unsigned int*)0x526b)
/* Data bits High */
#define TIM1_CCR4H	*((volatile unsigned char*)0x526b)
/* Data bits Low */
#define TIM1_CCR4L	*((volatile unsigned char*)0x526c)

/* TIM1 Break register */
#define TIM1_BKR	*((volatile unsigned char*)0x526d)

/* TIM1 Dead-time register */
#define TIM1_DTR	*((volatile unsigned char*)0x526e)

/* TIM1 Output idle state register */
#define TIM1_OISR	*((volatile unsigned char*)0x526f)

/* 16-Bit Timer 2 (TIM2) */
/*****************************************************************/

/* TIM2 Control register 1 */
#define TIM2_CR1	*((volatile unsigned char*)0x5300)

/* TIM2 Interrupt enable register */
#define TIM2_IER	*((volatile unsigned char*)0x5303)

/* TIM2 Status register 1 */
#define TIM2_SR1	*((volatile unsigned char*)0x5304)

/* TIM2 Status register 2 */
#define TIM2_SR2	*((volatile unsigned char*)0x5305)

/* TIM2 Event Generation register */
#define TIM2_EGR	*((volatile unsigned char*)0x5306)

/* TIM2 Capture/Compare mode register 1 */
#define TIM2_CCMR1	*((volatile unsigned char*)0x5307)

/* TIM2 Capture/Compare mode register 2 */
#define TIM2_CCMR2	*((volatile unsigned char*)0x5308)

/* TIM2 Capture/Compare mode register 3 */
#define TIM2_CCMR3	*((volatile unsigned char*)0x5309)

/* TIM2 Capture/Compare enable register 1 */
#define TIM2_CCER1	*((volatile unsigned char*)0x530a)

/* TIM2 Capture/Compare enable register 2 */
#define TIM2_CCER2	*((volatile unsigned char*)0x530b)

/* TIM2 Counter */
#define TIM2_CNTR	*((volatile unsigned int*)0x530c)
/* Data bits High */
#define TIM2_CNTRH	*((volatile unsigned char*)0x530c)
/* Data bits Low */
#define TIM2_CNTRL	*((volatile unsigned char*)0x530d)

/* TIM2 Prescaler register */
#define TIM2_PSCR	*((volatile unsigned char*)0x530e)

/* TIM2 Auto-reload register */
#define TIM2_ARR	*((volatile unsigned int*)0x530f)
/* Data bits High */
#define TIM2_ARRH	*((volatile unsigned char*)0x530f)
/* Data bits Low */
#define TIM2_ARRL	*((volatile unsigned char*)0x5310)

/* TIM2 Capture/Compare register 1 */
#define TIM2_CCR1	*((volatile unsigned int*)0x5311)
/* Data bits High */
#define TIM2_CCR1H	*((volatile unsigned char*)0x5311)
/* Data bits Low */
#define TIM2_CCR1L	*((volatile unsigned char*)0x5312)

/* TIM2 Capture/Compare register 2 */
#define TIM2_CCR2	*((volatile unsigned int*)0x5313)
/* Data bits High */
#define TIM2_CCR2H	*((volatile unsigned char*)0x5313)
/* Data bits Low */
#define TIM2_CCR2L	*((volatile unsigned char*)0x5314)

/* TIM2 Capture/Compare register 3 */
#define TIM2_CCR3	*((volatile unsigned int*)0x5315)
/* Data bits High */
#define TIM2_CCR3H	*((volatile unsigned char*)0x5315)
/* Data bits Low */
#define TIM2_CCR3L	*((volatile unsigned char*)0x5316)

/* 8-Bit  Timer 4 (TIM4) */
/*****************************************************************/

/* TIM4 Control register 1 */
#define TIM4_CR1	*((volatile unsigned char*)0x5340)

/* TIM4 Interrupt enable register */
#define TIM4_IER	*((volatile unsigned char*)0x5343)

/* TIM4 Status register */
#define TIM4_SR	*((volatile unsigned char*)0x5344)

/* TIM4 Event Generation register */
#define TIM4_EGR	*((volatile unsigned char*)0x5345)

/* TIM4 Counter */
#define TIM4_CNTR	*((volatile unsigned char*)0x5346)

/* TIM4 Prescaler register */
#define TIM4_PSCR	*((volatile unsigned char*)0x5347)

/* TIM4 Auto-reload register */
#define TIM4_ARR	*((volatile unsigned char*)0x5348)

/* 10-Bit A/D Converter (ADC1) */
/*****************************************************************/

/* ADC Data buffer Register 0 */
#define ADC_DB0R	*((volatile unsigned int*)0x53e0)
/* Data Buffer register 0 High */
#define ADC_DB0RH	*((volatile unsigned char*)0x53e0)
/* Data Buffer register 0 Low */
#define ADC_DB0RL	*((volatile unsigned char*)0x53e1)

/* ADC Data buffer Register 1 */
#define ADC_DB1R	*((volatile unsigned int*)0x53e2)
/* Data Buffer register 1 High */
#define ADC_DB1RH	*((volatile unsigned char*)0x53e2)
/* Data Buffer register 1 Low */
#define ADC_DB1RL	*((volatile unsigned char*)0x53e3)

/* ADC Data buffer Register 2 */
#define ADC_DB2R	*((volatile unsigned int*)0x53e4)
/* Data Buffer register 2 High */
#define ADC_DB2RH	*((volatile unsigned char*)0x53e4)
/* Data Buffer register 2 Low */
#define ADC_DB2RL	*((volatile unsigned char*)0x53e5)

/* ADC Data buffer Register 3 */
#define ADC_DB3R	*((volatile unsigned int*)0x53e6)
/* Data Buffer register 3 High */
#define ADC_DB3RH	*((volatile unsigned char*)0x53e6)
/* Data Buffer register 3 Low */
#define ADC_DB3RL	*((volatile unsigned char*)0x53e7)

/* ADC Data buffer Register 4 */
#define ADC_DB4R	*((volatile unsigned int*)0x53e8)
/* Data Buffer register 4 High */
#define ADC_DB4RH	*((volatile unsigned char*)0x53e8)
/* Data Buffer register 4 Low */
#define ADC_DB4RL	*((volatile unsigned char*)0x53e9)

/* ADC Data buffer Register 5 */
#define ADC_DB5R	*((volatile unsigned int*)0x53ea)
/* Data Buffer register 5 High */
#define ADC_DB5RH	*((volatile unsigned char*)0x53ea)
/* Data Buffer register 5 Low */
#define ADC_DB5RL	*((volatile unsigned char*)0x53eb)

/* ADC Data buffer Register 6 */
#define ADC_DB6R	*((volatile unsigned int*)0x53ec)
/* Data Buffer register 6 High */
#define ADC_DB6RH	*((volatile unsigned char*)0x53ec)
/* Data Buffer register 6 Low */
#define ADC_DB6RL	*((volatile unsigned char*)0x53ed)

/* ADC Data buffer Register 7 */
#define ADC_DB7R	*((volatile unsigned int*)0x53ee)
/* Data Buffer register 7 High */
#define ADC_DB7RH	*((volatile unsigned char*)0x53ee)
/* Data Buffer register 7 Low */
#define ADC_DB7RL	*((volatile unsigned char*)0x53ef)

/* ADC Data buffer Register 8 */
#define ADC_DB8R	*((volatile unsigned int*)0x53f0)
/* Data Buffer register 8 High */
#define ADC_DB8RH	*((volatile unsigned char*)0x53f0)
/* Data Buffer register 8 Low */
#define ADC_DB8RL	*((volatile unsigned char*)0x53f1)

/* ADC Data buffer Register 9 */
#define ADC_DB9R	*((volatile unsigned int*)0x53f2)
/* Data Buffer register 9 High */
#define ADC_DB9RH	*((volatile unsigned char*)0x53f2)
/* Data Buffer register 9 Low */
#define ADC_DB9RL	*((volatile unsigned char*)0x53f3)

/* ADC Control/Status Register */
#define ADC_CSR	*((volatile unsigned char*)0x5400)

/* ADC Configuration Register 1 */
#define ADC_CR1	*((volatile unsigned char*)0x5401)

/* ADC Configuration Register 2 */
#define ADC_CR2	*((volatile unsigned char*)0x5402)

/* ADC Configuration Register 3 */
#define ADC_CR3	*((volatile unsigned char*)0x5403)

/* ADC Data Register */
#define ADC_DR	*((volatile unsigned int*)0x5404)
/* Data bits High */
#define ADC_DRH	*((volatile unsigned char*)0x5404)
/* Data bits Low */
#define ADC_DRL	*((volatile unsigned char*)0x5405)

/* ADC Schmitt Trigger Disable Register */
#define ADC_TDR	*((volatile unsigned int*)0x5406)
/* Schmitt trigger disable High */
#define ADC_TDRH	*((volatile unsigned char*)0x5406)
/* Schmitt trigger disable Low */
#define ADC_TDRL	*((volatile unsigned char*)0x5407)

/* ADC High Threshold Register */
#define ADC_HTR	*((volatile unsigned int*)0x5408)
/* High Threshold Register High */
#define ADC_HTRH	*((volatile unsigned char*)0x5408)
/* High Threshold Register Low */
#define ADC_HTRL	*((volatile unsigned char*)0x5409)

/* ADC Low Threshold Register */
#define ADC_LTR	*((volatile unsigned int*)0x540a)
/* Low Threshold Register High */
#define ADC_LTRH	*((volatile unsigned char*)0x540a)
/* Low Threshold Register Low */
#define ADC_LTRL	*((volatile unsigned char*)0x540b)

/* ADC Analog Watchdog Status Register */
#define ADC_AWSR	*((volatile unsigned int*)0x540c)
/* Analog Watchdog Status register High */
#define ADC_AWSRH	*((volatile unsigned char*)0x540c)
/* Analog Watchdog Status register Low */
#define ADC_AWSRL	*((volatile unsigned char*)0x540d)

/* ADC Analog Watchdog Control Register */
#define ADC_AWCR	*((volatile unsigned int*)0x540e)
/* Analog Watchdog Control register High */
#define ADC_AWCRH	*((volatile unsigned char*)0x540e)
/* Analog Watchdog Control register Low */
#define ADC_AWCRL	*((volatile unsigned char*)0x540f)

/*  Global configuration register (CFG) */
/*****************************************************************/

/* CFG Global configuration register */
#define CFG_GCR *((volatile unsigned char*)0x7f60)

/* Interrupt Software Priority Register (ITC) */
/*****************************************************************/

/* Interrupt Software priority register 1 */
#define ITC_SPR1	*((volatile unsigned char*)0x7f70)

/* Interrupt Software priority register 2 */
#define ITC_SPR2	*((volatile unsigned char*)0x7f71)

/* Interrupt Software priority register 3 */
#define ITC_SPR3	*((volatile unsigned char*)0x7f72)

/* Interrupt Software priority register 4 */
#define ITC_SPR4	*((volatile unsigned char*)0x7f73)

/* Interrupt Software priority register 5 */
#define ITC_SPR5	*((volatile unsigned char*)0x7f74)

/* Interrupt Software priority register 6 */
#define ITC_SPR6	*((volatile unsigned char*)0x7f75)

/* Interrupt Software priority register 7 */
#define ITC_SPR7	*((volatile unsigned char*)0x7f76)

#endif /* __STM8S103F__ */
