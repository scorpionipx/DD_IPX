/*
 * sg90_driver.c
 *
 * Created: 03-Feb-18 1:04:18 PM
 *  Author: ScorpionIPX
 */ 

#include "global.h"
#include <avr/io.h>
#include <util/delay.h>
#include "sg90_driver.h"


void rotate_to_angle(int angle_deg)
{
	int duty_cycle = __angle_to_duty_cycle_rotate__ (angle_deg);
	SG90_ROTATE_DUTY_CYCLE_REGISTER = duty_cycle;
}

void incline_to_angle(int angle_deg)
{
	int duty_cycle = __angle_to_duty_cycle_incline__ (angle_deg);
	SG90_INCLINE_DUTY_CYCLE_REGISTER = duty_cycle;
}

int __angle_to_duty_cycle_rotate__(int angle)
{
	int duty_cycle = (((((long)(SG90_ROTATE_POS_180 - SG90_ROTATE_POS_0) * 100) / 18) * angle) / 1000);
	return duty_cycle;
}

int __angle_to_duty_cycle_incline__(int angle)
{
	int duty_cycle = (((((long)(SG90_INCLINE_POS_180 - SG90_INCLINE_POS_0) * 100) / 18) * angle) / 1000);
	return duty_cycle;
}

void test_sg90_incline(int number_of_iteration)
{
	for(int c=0; c<number_of_iteration; c++)
	{
		SG90_INCLINE_DUTY_CYCLE_REGISTER = SG90_INCLINE_POS_0;
		_delay_ms(SG90_TEST_TIME_MS);
		
		SG90_INCLINE_DUTY_CYCLE_REGISTER = SG90_INCLINE_POS_90;
		_delay_ms(SG90_TEST_TIME_MS);
		
		SG90_INCLINE_DUTY_CYCLE_REGISTER = SG90_INCLINE_POS_180;
		_delay_ms(SG90_TEST_TIME_MS);
		
		SG90_INCLINE_DUTY_CYCLE_REGISTER = SG90_INCLINE_POS_90;
		_delay_ms(SG90_TEST_TIME_MS);
	}
}

void test_sg90_rotate(int number_of_iteration)
{
	for(int c=0; c<number_of_iteration; c++)
	{
		SG90_ROTATE_DUTY_CYCLE_REGISTER = SG90_ROTATE_POS_0;
		_delay_ms(SG90_TEST_TIME_MS);
		
		SG90_ROTATE_DUTY_CYCLE_REGISTER = SG90_ROTATE_POS_90;
		_delay_ms(SG90_TEST_TIME_MS);
		
		SG90_ROTATE_DUTY_CYCLE_REGISTER = SG90_ROTATE_POS_180;
		_delay_ms(SG90_TEST_TIME_MS);
		
		SG90_ROTATE_DUTY_CYCLE_REGISTER = SG90_ROTATE_POS_90;
		_delay_ms(SG90_TEST_TIME_MS);
	}
}
