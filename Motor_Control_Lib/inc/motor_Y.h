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
**MS1		-->		MY0
**MS2		-->		MY1
**^EN		-->		MY2
**STEP		-->		YSTEP
**DIR		-->		YDIR
**
******MCU PINOUT***********************************
**----------------------	
**MS1		-->		B14
**MS2		-->		B13
**^EN		-->		B12
**STEP		-->		B10
**DIR		-->		B15
**************************************************/

/*
**Set Vref to 0.8V on digital POT FIRST
*/

#define YMOTORSTEP_ON HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, SET);
#define YMOTORSTEP_OFF HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);
#define YENABLE HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);
#define YDISABLE HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, SET);

#define Y_TURN_CLOCKWISE HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
#define Y_TURN_COUNTERCLOCKWISE HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, SET);

#define clockwise 0
#define counterclockwise 1

void MY_init(void);

void MY_set_dir(uint8_t DIR);

void MY_step(uint8_t step);

/*IMPLEMENT LATER HALF AND QUARTER STEP*/