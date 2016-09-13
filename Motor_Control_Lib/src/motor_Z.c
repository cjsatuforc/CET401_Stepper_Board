#include "motor_Z.h"

void MZ_init(void)
{
	static GPIO_InitTypeDef  GPIO_InitStruct;
	static GPIO_InitTypeDef  MZ_PINS;
	  __HAL_RCC_GPIOB_CLK_ENABLE();
	  __HAL_RCC_GPIOC_CLK_ENABLE();

	  MZ_PINS.Pin = GPIO_PIN_0;
	  MZ_PINS.Mode = GPIO_MODE_OUTPUT_PP;
	  MZ_PINS.Pull = GPIO_PULLUP;
	  MZ_PINS.Speed = GPIO_SPEED_FAST;

	  HAL_GPIO_Init(GPIOB, &MZ_PINS);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);

	  MZ_PINS.Pin = GPIO_PIN_2;
	  HAL_GPIO_Init(GPIOB, &MZ_PINS);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);

	  MZ_PINS.Pin = GPIO_PIN_5;
	  HAL_GPIO_Init(GPIOC, &MZ_PINS);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);

	  MZ_PINS.Pin = GPIO_PIN_1;
	  HAL_GPIO_Init(GPIOB, &MZ_PINS);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);

	  MZ_PINS.Pin = GPIO_PIN_4;
	  HAL_GPIO_Init(GPIOC, &MZ_PINS);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);
}

void MZ_set_dir(uint8_t DIR)
{
	if (DIR == clockwise)
	{
		Z_TURN_CLOCKWISE;
	}
	else
	{
		Z_TURN_COUNTERCLOCKWISE;
	}
}

/*SETS A FULL MICROSTEP*/
void MZ_step(uint8_t step)
{
	  static uint16_t i = 0;
		for (i=0;i<step;i++)
		{
			ZMOTORSTEP_ON;
			HAL_Delay(200);
			ZMOTORSTEP_OFF;
		}

}
