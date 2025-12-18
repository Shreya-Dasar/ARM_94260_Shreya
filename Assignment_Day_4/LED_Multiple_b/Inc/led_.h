/*
 * led_.h
 *
 *  Created on: Dec 17, 2025
 *      Author: DELL G15 RYZEN
 */

#ifndef LED__H_
#define LED__H_


/* LED__H_ */

#include <stdint.h>
#include <stdio.h>

#include"stm32f407xx.h"

#define BV(n) (1 << (n))
#define GREEN_LED   12
#define ORANGE_LED  13
#define RED_LED     14
#define BLUE_LED    15

#define LED_PORT GPIOD

void led_init(void);
void led_on(void);
void led_off(void);


#endif
