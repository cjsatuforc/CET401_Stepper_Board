#include "AD5206.h"

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
 
 */

void AD5206_INIT(void)
{
	static GPIO_InitTypeDef  GPIO_InitStruct;
	static GPIO_InitTypeDef  AD_PINS;
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOA_CLK_ENABLE();

	  AD_PINS.Pin = GPIO_PIN_7;
	  AD_PINS.Mode = GPIO_MODE_OUTPUT_PP;
	  AD_PINS.Pull = GPIO_PULLUP;
	  AD_PINS.Speed = GPIO_SPEED_FAST;

	  HAL_GPIO_Init(GPIOB, &AD_PINS);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
	  
	  AD_PINS.Pin = GPIO_PIN_6;
	  HAL_GPIO_Init(GPIOA, &AD_PINS);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, RESET);
	  
	  AD_PINS.Pin = GPIO_PIN_7;
	  HAL_GPIO_Init(GPIOA, &AD_PINS);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
}
 
void set_YREF(void)
/*Set YREF for 128*/
/*SPI CAPTURES VALUE ON FALLING EDGE*/
{
	/*001	RDAC2		YREF*/
	
	/*CLK HIGH*/
	ADCLK_HIGH;
	HAL_Delay(1);
	/*CS_LOW*/
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, RESET);
	HAL_Delay(1);
	
	/*0*/
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*00*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*001*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*0011*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*00110*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*001100*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*0011000*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*00110000*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*001100000*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*0011000000*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*00110000000*/
	ADCLK_HIGH;
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
	ADCLK_LOW;
	HAL_Delay(1);
	
	/*CS_HIGH*/
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, SET);
	HAL_Delay(1);
}

