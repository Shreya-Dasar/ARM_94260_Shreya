/*
 * Toggle.c
 *
 *  Created on: Dec 17, 2025
 *      Author: DELL G15 RYZEN
 */
#include "Toggle.h"

/* LED initialization */
void led_init(void)
{
    RCC->AHB1ENR |= BV(3);   // GPIOD clock enable

    GPIOD->MODER &= ~(BV(24) | BV(25) | BV(30) | BV(31));
    GPIOD->MODER |=  (BV(24) | BV(30));  // PD12, PD15 output
}

/* Switch initialization */
void switch_init(void)
{
    RCC->AHB1ENR |= BV(0);   // GPIOA clock enable

    GPIOA->MODER &= ~(BV(0) | BV(1));   // PA0 input
    GPIOA->PUPDR &= ~(BV(0) | BV(1));   // no pull
}

/* LED control */
void green_on(void)
{
    GPIOD->ODR |= BV(GREEN_LED);
    GPIOD->ODR &= ~BV(BLUE_LED);
}

void blue_on(void)
{
    GPIOD->ODR |= BV(BLUE_LED);
    GPIOD->ODR &= ~BV(GREEN_LED);
}

void leds_off(void)
{
    GPIOD->ODR &= ~BV(GREEN_LED);
    GPIOD->ODR &= ~BV(BLUE_LED);
}

/* -------- EASY switch logic -------- */
int switch_status(void)
{
    static int state = -1;   // START from -1 (IMPORTANT)

    if (GPIOA->IDR & BV(0))  // switch pressed
    {
        state++;             // move to next state

        if (state > 2)
            state = 0;

        while (GPIOA->IDR & BV(0)); // wait till release
    }

    return state;
}



