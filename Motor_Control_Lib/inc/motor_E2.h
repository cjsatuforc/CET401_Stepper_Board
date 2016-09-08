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
**MS1		-->		ME20
**MS2		-->		ME21
**^EN		-->		ME22
**STEP		-->		E2STEP
**DIR		-->		E2DIR
**
******MCU PINOUT***********************************
**----------------------	
**MS1		-->		C2
**MS2		-->		B9
**^EN		-->		C3
**STEP		-->		A0
**DIR		-->		B8
**************************************************/

void ME2_init(void);

void ME2_set_dir(uint8_t DIR);

void ME2_step(uint8_t step);

/*IMPLEMENT LATER HALF AND QUARTER STEP*/