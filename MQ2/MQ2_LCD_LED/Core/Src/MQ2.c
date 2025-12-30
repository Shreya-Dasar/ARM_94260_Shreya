/*
 * MQ2.c
 *
 *  Created on: Dec 30, 2025
 *      Author: DELL G15 RYZEN
 */
#include<MQ2.h>
extern ADC_HandleTypeDef hadc1;



uint16_t MQ2_Read(void)
{
    uint16_t val = 0;

    HAL_ADC_Start(&hadc1);

    HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);

    val = HAL_ADC_GetValue(&hadc1);

    HAL_ADC_Stop(&hadc1);

    HAL_Delay(500);
    return val;
}

/*float MQ2_ConvertToTemp(int val)
{
	return ((float)val*0.1);
}*/

// char str[70];
     	 // int val;

   // temp=(val*3.3/4095)*100;








