#include "DHT11.h"
#include "main.h"
//#include "cmsis_os.h"

#define DHT11_PORT GPIOB
#define DHT11_PIN GPIO_PIN_14
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

void Set_Pin_Output(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };
	GPIO_InitStruct.Pin = GPIO_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}

void Set_Pin_Input(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	GPIO_InitTypeDef GPIO_InitStruct = { 0 };
	GPIO_InitStruct.Pin = GPIO_Pin;
	GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
	GPIO_InitStruct.Pull = GPIO_PULLUP;
	HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}
void DHT_start(void)
{
	Set_Pin_Output(DHT11_PORT,DHT11_PIN);
	HAL_GPIO_WritePin(DHT11_PORT,DHT11_PIN,GPIO_PIN_RESET);
	delay_us(25000);
	HAL_GPIO_WritePin(DHT11_PORT,DHT11_PIN,GPIO_PIN_SET);
	Set_Pin_Input(DHT11_PORT,DHT11_PIN);
}
char DHT_check(void)
{
  uint8_t Response=0;
	delay_us(40);
	if((HAL_GPIO_ReadPin(DHT11_PORT,DHT11_PIN))==0)
	{
		delay_us(80);
		if((HAL_GPIO_ReadPin(DHT11_PORT,DHT11_PIN))==1)
			{Response =1;}
		else
			{Response =0;}
	}
	while((HAL_GPIO_ReadPin(DHT11_PORT,DHT11_PIN))==1);
	return Response;
}
char DHT_Byte(void)// doc byte dht
{
	uint8_t i,j;
	for (j=0;j<8;j++)
	{
		while (!(HAL_GPIO_ReadPin (DHT11_PORT,DHT11_PIN)));   // wait for the pin to go high
		delay_us(50);   // wait for 40 us
		if ((HAL_GPIO_ReadPin (DHT11_PORT,DHT11_PIN))==0)   // if the pin is low
		{
			i&= ~(1<<(7-j));   // write 0
		}
		else i|= (1<<(7-j));  // if the pin is high, write 1
		while ((HAL_GPIO_ReadPin (DHT11_PORT,DHT11_PIN))==1);  // wait for the pin to go low
	}
	return i;
}
void DHT_ReadByte(void)
{
    for(uint8_t i=0;i<5;i++)
    {
      byte[i]=DHT_Byte();
    }
}
void DHT11_init(void)
{
	 DHT_start();
	 Response=DHT_check();
	 DHT_ReadByte();
	 tempDHT =(float)byte[2]+(float)byte[3]/10;
	 humidDHT =(float)byte[0]+(float)byte[1]/10;

}


