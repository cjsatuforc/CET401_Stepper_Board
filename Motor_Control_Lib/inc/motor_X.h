#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
/**************************************************
***********A4982 TRUTH TABLE***********************
**MS1 MS2 	Microstep Resolution Excitation Mode***
**L	 L 		Full Step 2 Phase**********************
**H	 L 		Half Step 1-2 Phase********************
**L  H 		Quarter Step W1-2 Phase****************
**H	 H 		Sixteenth Step 4W1-2 Phase*************
**************************************************/

/**************************************************
******PCB NET LIST*********************************
**PIN				NET
**----------------------
**MS1		-->		MX0
**MS2		-->		MX1
**^EN		-->		MX2
**STEP		-->		XSTEP
**DIR		-->		XDIR
**
******MCU PINOUT***********************************
**----------------------	
**MS1		-->		C7
**MS2		-->		C8
**^EN		-->		C9
**STEP		-->		A8
**DIR		-->		C6
**************************************************/

void MX_init(void);

void MX_set_dir(uint8_t DIR);

void MX_step(uint8_t step);

/*IMPLEMENT LATER HALF AND QUARTER STEP*/