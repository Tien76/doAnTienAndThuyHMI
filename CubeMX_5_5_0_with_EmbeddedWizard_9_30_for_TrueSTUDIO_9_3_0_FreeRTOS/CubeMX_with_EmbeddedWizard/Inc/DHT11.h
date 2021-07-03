#ifndef INC_DHT111_H_
#define INC_DHT111_H_

#include "main.h"

#define DHT11_PORT GPIOB
#define DHT11_PIN GPIO_PIN_14
#define DHT_HignPin()	HAL_GPIO_WritePin(DHT11_PORT, DHT11_PIN, GPIO_PIN_SET)
#define DHT_LowPin()	HAL_GPIO_WritePin(DHT11_PORT, DHT11_PIN, GPIO_PIN_RESET)
#define DHT_ReadPin()	HAL_GPIO_ReadPin(DHT11_PORT, DHT11_PIN)

void DHT11_init(void);

#endif
