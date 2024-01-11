/*
 * uart.c
 *
 *  Created on: Jan 10, 2024
 *      Author: user
 */

#include "uart.h"

UART_HandleTypeDef *huart;

void initUart(UART_HandleTypeDef *inHuart){
	huart = inHuart;
}

int _write(int file, char *p, int len) {
	HAL_UART_Transmit(huart, p, len, len);
	return len;
}
