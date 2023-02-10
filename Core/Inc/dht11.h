/*
 * dht11.h
 *
 *  Created on: Feb 10, 2023
 *      Author: npedu002
 */

#ifndef INC_DHT11_H_
#define INC_DHT11_H_

#include "main.h"

void Delayus(uint32_t us);
void DHT11_Start();
uint8_t DHT11_CheckResponse();
uint8_t DHT11_Read();

#endif /* INC_DHT11_H_ */
