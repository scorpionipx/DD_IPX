/*
 * joystick_driver.c
 *
 * Created: 3/19/2018 11:34:43 PM
 *  Author: uidq6025
 */ 


#include "global.h"
#include <util/delay.h>
#include "user_interface.h"
#include "adc_driver.h"
#include "graphics.h"
#include "joystick_driver.h"
#include "sg90_driver.h"
#include "unipolar_driver.h"
#include "l293d.h"

void manual_control(void)
{
	unsigned int x = ADC_get_value(ADC_CHANNEL_X_AXIS);
	unsigned int y = ADC_get_value(ADC_CHANNEL_Y_AXIS);
	
	display_joystick_data(x, y);
	
	if(y > (JOYSTICK_IDLE_VALUE + JOYSTICK_DEAD_ZONE))
	{
		unipolar_01_step_backward(UNIPOLLAR_01_CURRENT_STEP);
	}
	else if(y < (JOYSTICK_IDLE_VALUE - JOYSTICK_DEAD_ZONE))
	{
		unipolar_01_step_forward(UNIPOLLAR_01_CURRENT_STEP);
	}
	else
	{
		unipolar_01_clear_steps();
	}
	
	if(x > (JOYSTICK_IDLE_VALUE + JOYSTICK_DEAD_ZONE))
	{
		l293d_hb2_rotate_right();
	}
	else if(x < (JOYSTICK_IDLE_VALUE - JOYSTICK_DEAD_ZONE))
	{
		l293d_hb2_rotate_left();
	}
	else
	{
		l293d_hb2_stop();
	}
	
	_delay_ms(25);
}

signed int format_axis(unsigned int axis)
{
	signed int formated_axis;
	if(axis >= ADC_HALF)
	{
		formated_axis = (axis - ADC_HALF) / JOYSTICK_RESOLUTION;
	} 
	else
	{
		formated_axis = axis / JOYSTICK_RESOLUTION;
		formated_axis = formated_axis * (-1);
		{
		}
	}
	
	return formated_axis;
}