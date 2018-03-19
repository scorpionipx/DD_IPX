/*
 * light.c
 *
 * Created: 28-Oct-17 7:02:05 PM
 *  Author: ScorpionIPX
 */ 

#include <avr/io.h>
#include "light.h"
#include "adc_driver.h"

#define FILTLER_RANK 15

int get_light_intensity(uint8_t sensor)
{
	uint16_t adc_value = ADC_get_value(sensor);
	adc_value = percentage_value(adc_value);
	return adc_value;
}

int get_filtered_light_intensity(uint8_t sensor)
{
	uint16_t adc_value = 0;
	for(char i = 0; i < FILTLER_RANK; i++)
	{
		adc_value += ADC_get_value(sensor);
	}
	adc_value /= FILTLER_RANK;
	adc_value = percentage_value(adc_value);
	return adc_value;
}

int percentage_value(int raw_value)
{
	raw_value = raw_value*((long)100)/1023;
	raw_value = 100 - raw_value;
	return raw_value;
}