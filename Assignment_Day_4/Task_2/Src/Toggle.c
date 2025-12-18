/*
 * Toggle.c
 *
 *  Created on: Dec 17, 2025
 *      Author: DELL G15 RYZEN
 */
#include"Toggle.h"

void led_init(void)
{
	RCC->AHB1ENR |=BV(3);

	LED_PORT->MODER &= ~(BV(29));
	LED_PORT->MODER |=BV(28);

	LED_PORT->OSPEEDR &=~(BV(29));
	LED_PORT->OSPEEDR &=~(BV(28));

	LED_PORT->OTYPER &=~(BV(14));

	LED_PORT->PUPDR &=~(BV(29));
	LED_PORT->PUPDR &=~(BV(28));

}
void led_on(void)
{
	GPIOD->ODR |=BV(RED_LED);
}
void led_off(void)
{
	GPIOD->ODR &=~(BV(RED_LED));
}
void switch_init(void)
{
	//0. enable clock for GPIOA in AHB1
	RCC->AHB1ENR |= BV(0);
	//1. select mode as Input
	GPIOA->MODER &= ~(BV(0) | BV(1) );
	GPIOA->OSPEEDR &= ~(BV(0) | BV(1));

	//4. select pull up/down as no
	GPIOA->PUPDR &= ~(BV(0) | BV(1));

}
int switch_status(void)
{
    static int pressed = 0;
    static int led_state = 0;

    if (GPIOA->IDR & BV(14))
    {
        if (pressed == 0)
        {
            pressed = 1;
            led_state ^= 1;
        }
    }
    else
    {
        pressed = 0;
    }

    return led_state;
}




