#include "utilities.h"
#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"

void LED_init(void)
{
	static GPIO_InitTypeDef  GPIO_InitStruct;
	static GPIO_InitTypeDef  MY_PINS;
	
	__HAL_RCC_GPIOD_CLK_ENABLE();
	
	GPIO_InitStruct.Pin = GPIO_PIN_2;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FAST;
	HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, SET);
}

void LED_on(void)
{
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, SET);
}

void LED_off(void)
{
	HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, RESET);
}

void LED_toggle(void)
{
	HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_2);
}

void Digital_ref_init(void)
{
	
}