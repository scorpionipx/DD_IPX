/*
 * joystick_driver.c
 *
 * Created: 3/19/2018 11:34:43 PM
 *  Author: uidq6025
 */ 


#include "user_interface.h"
#include "adc_driver.h"
#include "graphics.h"

void manual_control(void)
{
	unsigned int x = ADC_get_value(ADC_CHANNEL_X_AXIS);
	unsigned int y = ADC_get_value(ADC_CHANNEL_Y_AXIS);
	
	display_joystick_data(x, y);
}