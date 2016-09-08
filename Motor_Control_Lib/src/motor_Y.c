#include "motor_Y.h"

void MY_init(void)
{
	static GPIO_InitTypeDef  GPIO_InitStruct;
	static GPIO_InitTypeDef  MY_PINS;
	  __HAL_RCC_GPIOB_CLK_ENABLE();

	  MY_PINS.Pin = GPIO_PIN_10;
	  MY_PINS.Mode = GPIO_MODE_OUTPUT_PP;
	  MY_PINS.Pull = GPIO_PULLUP;
	  MY_PINS.Speed = GPIO_SPEED_FAST;

	  HAL_GPIO_Init(GPIOB, &MY_PINS);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, RESET);

	  MY_PINS.Pin = GPIO_PIN_12;
	  HAL_GPIO_Init(GPIOB, &MY_PINS);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, RESET);

	  MY_PINS.Pin = GPIO_PIN_13;
	  HAL_GPIO_Init(GPIOB, &MY_PINS);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, RESET);

	  MY_PINS.Pin = GPIO_PIN_14;
	  HAL_GPIO_Init(GPIOB, &MY_PINS);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, RESET);

	  MY_PINS.Pin = GPIO_PIN_15;
	  HAL_GPIO_Init(GPIOB, &MY_PINS);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, RESET);
}

void MY_set_dir(uint8_t DIR)
{
	if (DIR == clockwise)
	{
		Y_TURN_CLOCKWISE;
	}
	else
	{
		Y_TURN_COUNTERCLOCKWISE;
	}
}

/*SETS A FULL MICROSTEP*/
void MY_step(uint8_t step)
{
	  static uint16_t i = 0;
		for (i=0;i<step;i++)
		{
			YMOTORSTEP_ON;
			HAL_Delay(200);
			YMOTORSTEP_OFF;
		}

}
