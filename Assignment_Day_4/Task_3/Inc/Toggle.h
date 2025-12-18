/*
 * Toggle.h
 *
 *  Created on: Dec 17, 2025
 *      Author: DELL G15 RYZEN
 */

#ifndef PROGRAM_H_
#define PROGRAM_H_

#include "stm32f407xx.h"

#define BV(x) (1U << (x))

// LED pins
#define GREEN_LED 12
#define BLUE_LED  15

void led_init(void);
void switch_init(void);

void green_on(void);
void blue_on(void);
void leds_off(void);

int switch_status(void);

#endif

