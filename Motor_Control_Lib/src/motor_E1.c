#include "motor_E1.h"

void ME_init(void)
{
	static GPIO_InitTypeDef  GPIO_InitStruct;
	static GPIO_InitTypeDef  ME_PINS;
	  __HAL_RCC_GPIOA_CLK_ENABLE();

	  ME_PINS.Pin = GPIO_PIN_4;
	  ME_PINS.Mode = GPIO_MODE_OUTPUT_PP;
	  ME_PINS.Pull = GPIO_PULLUP;
	  ME_PINS.Speed = GPIO_SPEED_FAST;

	  HAL_GPIO_Init(GPIOA, &ME_PINS);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET);

	  ME_PINS.Pin = GPIO_PIN_3;
	  HAL_GPIO_Init(GPIOA, &ME_PINS);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, RESET);

	  ME_PINS.Pin = GPIO_PIN_5;
	  HAL_GPIO_Init(GPIOA, &ME_PINS);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, RESET);

	  ME_PINS.Pin = GPIO_PIN_2;
	  HAL_GPIO_Init(GPIOA, &ME_PINS);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, RESET);

	  ME_PINS.Pin = GPIO_PIN_1;
	  HAL_GPIO_Init(GPIOA, &ME_PINS);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, RESET);
}

void ME_set_dir(uint8_t DIR)
{
	if (DIR == clockwise)
	{
		E_TURN_CLOCKWISE;
	}
	else
	{
		E_TURN_COUNTERCLOCKWISE;
	}
}

/*SETS A FULL MICROSTEP*/
void ME_step(uint8_t step)
{
	  static uint16_t i = 0;
		for (i=0;i<step;i++)
		{
			EMOTORSTEP_ON;
			HAL_Delay(200);
			EMOTORSTEP_OFF;
		}

}