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
**MS1		-->		ME0
**MS2		-->		ME1
**^EN		-->		ME2
**STEP		-->		ESTEP
**DIR		-->		EDIR
**
******MCU PINOUT***********************************
**----------------------	
**MS1		-->		A4
**MS2		-->		A3
**^EN		-->		A5
**STEP		-->		A2
**DIR		-->		A1
**************************************************/

void ME_init(void);

void ME_set_dir(uint8_t DIR);

void ME_step(uint8_t step);

/*IMPLEMENT LATER HALF AND QUARTER STEP*/