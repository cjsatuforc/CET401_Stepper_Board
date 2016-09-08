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
**MS1		-->		MZ0
**MS2		-->		MZ1
**^EN		-->		MZ2
**STEP		-->		ZSTEP
**DIR		-->		ZDIR
**
******MCU PINOUT***********************************
**----------------------	
**MS1		-->		B0
**MS2		-->		B2
**^EN		-->		C5
**STEP		-->		B1
**DIR		-->		C4
**************************************************/

void MZ_init(void);

void MZ_set_dir(uint8_t DIR);

void MZ_step(uint8_t step);

/*IMPLEMENT LATER HALF AND QUARTER STEP*/