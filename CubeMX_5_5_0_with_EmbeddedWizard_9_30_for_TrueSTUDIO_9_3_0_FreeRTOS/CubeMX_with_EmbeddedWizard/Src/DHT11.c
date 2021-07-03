#include "DHT11.h"
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"
//#include "tim.h"
#include <stdio.h>
//#include "cmsis_os.h"

//#define DHT11_PORT GPIOB
//#define DHT11_PIN GPIO_PIN_14
TIM_HandleTypeDef htim2;

uint8_t Response=0;
char byte[5];
float tempDHT;
float humidDHT;

void delay_us (uint16_t time)
{
  HAL_TIM_Base_Start(&htim2);
  for(;time>0; time--)
	{
      TIM2->CNT=0;
      while( TIM2->CNT != htim2.Init.Period );
  }
}

void DHT_Set_Output(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };
	GPIO_InitStruct.Pin = GPIO_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}

void DHT_Set_Input(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };
	GPIO_InitStruct.Pin = GPIO_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}
int DH11_ReadByte(void) {
	unsigned int data = 0, i, cout;

	for (i = 0; i < 8; i++) {
		cout = 1;
		while (!DHT_ReadPin() && cout++) {
			delay_us(1);
			if (cout > 100)
				break;
		}

		delay_us(40);
		data = data << 1;
		if (DHT_ReadPin() == GPIO_PIN_SET) {

			data |= 1;
		}

		cout = 1;
		while (DHT_ReadPin() && cout++) {
			delay_us(1);
			if (cout > 100)
				break;
		}

	}
	return data;
}

void DHT11_ReadData(void) {

	unsigned int cout = 1;
	HAL_TIM_Base_Start(&htim2);
	DHT_Set_Output(DHT11_PORT,DHT11_PIN);

	DHT_LowPin();
	HAL_Delay(20);

	DHT_HignPin();
	delay_us(80);

	DHT_Set_Input(DHT11_PORT,DHT11_PIN);
	taskENTER_CRITICAL();
	if (DHT_ReadPin() == 0) {
		cout = 1;
		while (!DHT_ReadPin() && cout++) {
			delay_us(1);
			if (cout > 100)
				break;
		}

		cout = 1;
		while (DHT_ReadPin() && cout++) {
			delay_us(1);
			if (cout > 100)
				break;
		}

		byte[0] = DH11_ReadByte();
		byte[1] = DH11_ReadByte();
		byte[2] = DH11_ReadByte();
		byte[3] = DH11_ReadByte();
		byte[4] = DH11_ReadByte();
		if (byte[4] == (byte[0] + byte[1] + byte[2] + byte[3]));
		else byte[4] = 00;
		DHT_Set_Output(DHT11_PORT,DHT11_PIN);
		DHT_HignPin();
	} else {
		DHT_Set_Output(DHT11_PORT,DHT11_PIN);
		DHT_HignPin();
	}
	taskEXIT_CRITICAL();
	HAL_TIM_Base_Stop(&htim2);
}
void DHT11_init(void)
{
	 DHT11_ReadData();
	 tempDHT =(float)byte[2]+(float)byte[3]/10;
	 humidDHT =(float)byte[0]+(float)byte[1]/10;

}


