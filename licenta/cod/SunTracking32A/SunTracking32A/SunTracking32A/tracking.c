/*
 * tracking.c
 *
 * Created: 29-Oct-17 5:24:58 PM
 *  Author: ScorpionIPX
 */ 

#include "global.h"
#include <avr/io.h>
#include <stdlib.h>
#include <util/delay.h>
#include "tracking.h"
#include "light.h"
#include "hx1230.h"
#include "graphics.h"
#include "sg90_driver.h"

int light_up_left;
int light_up_right;
int light_down_left;
int light_down_right;

int up_intensity_average;
int down_intensity_average;
int left_intensity_average;
int right_intensity_average;

int up_down_movement_gradient_request;
int left_right_movement_gradient_request;

void track(void)
{
	light_up_left = get_filtered_light_intensity(LS_UP_LEFT);
	light_up_right = get_filtered_light_intensity(LS_UP_RIGHT);
	light_down_left = get_filtered_light_intensity(LS_DOWN_LEFT);
	light_down_right = get_filtered_light_intensity(LS_DOWN_RIGHT);
	
	display_light_sensor_data(LS_UP_LEFT, light_up_left);
	display_light_sensor_data(LS_UP_RIGHT, light_up_right);
	display_light_sensor_data(LS_DOWN_LEFT, light_down_left);
	display_light_sensor_data(LS_DOWN_RIGHT, light_down_right);
	
	up_intensity_average = light_up_left + light_up_right;
	up_intensity_average >>= 1;
	
	down_intensity_average = light_down_left + light_down_right;
	down_intensity_average >>= 1;
	
	left_intensity_average = light_up_left + light_down_left;
	left_intensity_average >>= 1;
	
	right_intensity_average = light_up_right + light_down_right;
	right_intensity_average >>= 1;
	
	hx_set_coordinates(42, 2);
	hx_write_char('0' + (up_intensity_average / 10) % 10);
	hx_write_char('0' + up_intensity_average % 10);
	
	hx_set_coordinates(42, 6);
	hx_write_char('0' + (down_intensity_average / 10) % 10);
	hx_write_char('0' + down_intensity_average % 10);
	
	hx_set_coordinates(6, 4);
	hx_write_char('0' + (left_intensity_average / 10) % 10);
	hx_write_char('0' + left_intensity_average % 10);
	
	hx_set_coordinates(78, 4);
	hx_write_char('0' + (right_intensity_average / 10) % 10);
	hx_write_char('0' + right_intensity_average % 10);
	
	up_down_movement_gradient_request = up_intensity_average - down_intensity_average;
	left_right_movement_gradient_request = left_intensity_average - right_intensity_average;
	
	if(abs(up_down_movement_gradient_request) > TRACKING_TOLERANCE)
	{
		SG90_INCLINE_DUTY_CYCLE_REGISTER -= up_down_movement_gradient_request / 4;
	}
	
	if(abs(left_right_movement_gradient_request) > TRACKING_TOLERANCE)
	{
		SG90_ROTATE_DUTY_CYCLE_REGISTER -= left_right_movement_gradient_request / 4;
	}
	if(SG90_INCLINE_DUTY_CYCLE_REGISTER > SG90_UPPER_INCLINE_LIMIT)
	{
		SG90_INCLINE_DUTY_CYCLE_REGISTER = SG90_UPPER_INCLINE_LIMIT;
	}
	if(SG90_INCLINE_DUTY_CYCLE_REGISTER < SG90_INCLINE_POS_0)
	{
		SG90_INCLINE_DUTY_CYCLE_REGISTER = SG90_INCLINE_POS_0;
	}
	if(SG90_ROTATE_DUTY_CYCLE_REGISTER > SG90_ROTATE_POS_180)
	{
		SG90_ROTATE_DUTY_CYCLE_REGISTER = SG90_ROTATE_POS_180;
	}
	if(SG90_ROTATE_DUTY_CYCLE_REGISTER < SG90_ROTATE_POS_0)
	{
		SG90_ROTATE_DUTY_CYCLE_REGISTER = SG90_ROTATE_POS_0;
	}
	_delay_ms(100);
}