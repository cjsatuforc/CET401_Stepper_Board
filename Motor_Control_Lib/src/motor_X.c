#include "motor_X.h"

void MX_init(void)
{
	static GPIO_InitTypeDef  GPIO_InitStruct;
	static GPIO_InitTypeDef  MX_PINS;
	  __HAL_RCC_GPIOC_CLK_ENABLE();
	  __HAL_RCC_GPIOC_CLK_ENABLE();

	  MX_PINS.Pin = GPIO_PIN_7;
	  MX_PINS.Mode = GPIO_MODE_OUTPUT_PP;
	  MX_PINS.Pull = GPIO_PULLUP;
	  MX_PINS.Speed = GPIO_SPEED_FAST;

	  HAL_GPIO_Init(GPIOC, &MX_PINS);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, RESET);

	  MX_PINS.Pin = GPIO_PIN_8;
	  HAL_GPIO_Init(GPIOC, &MX_PINS);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, RESET);

	  MX_PINS.Pin = GPIO_PIN_9;
	  HAL_GPIO_Init(GPIOC, &MX_PINS);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_9, RESET);

	  MX_PINS.Pin = GPIO_PIN_8;
	  HAL_GPIO_Init(GPIOA, &MX_PINS);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);

	  MX_PINS.Pin = GPIO_PIN_6;
	  HAL_GPIO_Init(GPIOC, &MX_PINS);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
}


void MX_set_dir(uint8_t DIR)
{
	if (DIR == clockwise)
	{
		X_TURN_CLOCKWISE;
	}
	else
	{
		X_TURN_COUNTERCLOCKWISE;
	}
}

/*SETS A FULL MICROSTEP*/
void MX_step(uint8_t step)
{
	  static uint16_t i = 0;
		for (i=0;i<step;i++)
		{
			XMOTORSTEP_ON;
			HAL_Delay(200);
			XMOTORSTEP_OFF;
		}

}