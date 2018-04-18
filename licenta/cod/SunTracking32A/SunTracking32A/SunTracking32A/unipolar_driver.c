/*
 * unipolar_driver.c
 *
 * Created: 17-Apr-18 18:55:52
 *  Author: ScorpionIPX
 */ 

#include "global.h"
#include <avr/io.h>
#include <util/delay.h>
#include "unipolar_driver.h"

void init_unipolar_control(void)
{
	UNIPOLAR_01_DDR |= ((1 << UNIPOLAR_01_STEP_1) | (1 << UNIPOLAR_01_STEP_2) | (1 << UNIPOLAR_01_STEP_3) | (1 << UNIPOLAR_01_STEP_4));
	UNIPOLAR_01_CLEAR_STEP_1;
	UNIPOLAR_01_CLEAR_STEP_2;
	UNIPOLAR_01_CLEAR_STEP_3;
	UNIPOLAR_01_CLEAR_STEP_4;
	UNIPOLLAR_01_CURRENT_STEP = 4;
}

void unipolar_01_step_forward(unsigned char current_step)
{
	switch(current_step)
	{
		case 1:
		{
			UNIPOLAR_01_CLEAR_STEP_1;
			UNIPOLAR_01_SET_STEP_2;
			UNIPOLAR_01_CLEAR_STEP_3;
			UNIPOLAR_01_CLEAR_STEP_4;
			UNIPOLLAR_01_CURRENT_STEP = 2;
			break;
		}
		case 2:
		{
			UNIPOLAR_01_CLEAR_STEP_1;
			UNIPOLAR_01_CLEAR_STEP_2;
			UNIPOLAR_01_SET_STEP_3;
			UNIPOLAR_01_CLEAR_STEP_4;
			UNIPOLLAR_01_CURRENT_STEP = 3;
			break;
		}
		case 3:
		{
			UNIPOLAR_01_CLEAR_STEP_1;
			UNIPOLAR_01_CLEAR_STEP_2;
			UNIPOLAR_01_CLEAR_STEP_3;
			UNIPOLAR_01_SET_STEP_4;
			UNIPOLLAR_01_CURRENT_STEP = 4;
			break;
		}
		case 4:
		{
			UNIPOLAR_01_SET_STEP_1;
			UNIPOLAR_01_CLEAR_STEP_2;
			UNIPOLAR_01_CLEAR_STEP_3;
			UNIPOLAR_01_CLEAR_STEP_4;
			UNIPOLLAR_01_CURRENT_STEP = 1;
			break;
		}
	}
	_delay_ms(3);
}

void unipolar_01_step_backward(unsigned char current_step)
{
	switch(current_step)
	{
		case 1:
		{
			UNIPOLAR_01_CLEAR_STEP_1;
			UNIPOLAR_01_CLEAR_STEP_2;
			UNIPOLAR_01_CLEAR_STEP_3;
			UNIPOLAR_01_SET_STEP_4;
			UNIPOLLAR_01_CURRENT_STEP = 4;
			break;
		}
		case 2:
		{
			UNIPOLAR_01_SET_STEP_1;
			UNIPOLAR_01_CLEAR_STEP_2;
			UNIPOLAR_01_CLEAR_STEP_3;
			UNIPOLAR_01_CLEAR_STEP_4;
			UNIPOLLAR_01_CURRENT_STEP = 1;
			break;
		}
		case 3:
		{
			UNIPOLAR_01_CLEAR_STEP_1;
			UNIPOLAR_01_SET_STEP_2;
			UNIPOLAR_01_CLEAR_STEP_3;
			UNIPOLAR_01_CLEAR_STEP_4;
			UNIPOLLAR_01_CURRENT_STEP = 2;
			break;
		}
		case 4:
		{
			UNIPOLAR_01_CLEAR_STEP_1;
			UNIPOLAR_01_CLEAR_STEP_2;
			UNIPOLAR_01_SET_STEP_3;
			UNIPOLAR_01_CLEAR_STEP_4;
			UNIPOLLAR_01_CURRENT_STEP = 3;
			break;
		}
	}
	_delay_ms(3);
}