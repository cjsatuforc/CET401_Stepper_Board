#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

/*CURRENT LIMITER INTERFACE*/
/*HIGH RESISTANCE = MORE CURRENT*/
/*
 * PINOUT
 * ^CS  = B7
 * SCK  = A6	//FUCKED IT UP JUST BITBANG SPI INTERFACE
 * MOSI	= A7
 */

/*
 * AD5206 works by clocking an 11 BIT SPI WORD
 * First 3 BITS ARE ADDRESS BITS MSB FIRST
 * FOLLOWED BY 8 DATA BITS	MSB FIRST
 *
 * 000	RDAC1		ZREF
 * 001	RDAC2		YREF
 * 010	RDAC3		EREF
 * 011	RDAC4		XREF
 * 100	RDAC5		NC
 * 101	RDAC6		E2REF
 *
 * RAB = 33K
 *
 * RWB (Dx) = (Dx)/256 × RAB + RW
	where Dx is the data contained in the 8-bit RDACx latch, and
	RAB is the nominal end-to-end resistance.

	Table 7. Output Resistance Values for the RDAC Latch Codes—
	VB = 0 V and Terminal A = Open Circuited

	D (Dec) 	RWB (ohms) 	Output State
	255			10006		FULL SCALE
	128			5045		MID SCALE
	1 			84 			1 LSB
	0 			45			Zero scale (wiper contact resistance)

	RUN SCK AT 1 MHZ
 * */

//TODO CREATE TIMER for MICROSECOND DELAY
#define ADCLK_HIGH HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
#define ADCLK_LOW  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);

void AD5206_INIT(void);

void set_YREF(void);