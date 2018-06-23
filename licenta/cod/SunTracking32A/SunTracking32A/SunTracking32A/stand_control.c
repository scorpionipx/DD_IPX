/*
 * stand_control.c
 *
 * Created: 29-Apr-18 21:55:45
 *  Author: ScorpionIPX
 */ 

#include "global.h"
#include "l293d.h"
#include "unipolar_driver.h"

#define ROTATE_LEFT_ALLOWED 1
#define ROTATE_RIGHT_ALLOWED 1
#define INCLINE_UP_ALLOWED 1
#define INCLINE_DOWN_ALLOWED 1

void stand_rotate_left(void)
{
	if(ROTATE_LEFT_ALLOWED)
	{
		l293d_hb2_rotate_left();
	}
}

void stand_rotate_right(void)
{
	if(ROTATE_RIGHT_ALLOWED)
	{
		l293d_hb2_rotate_right();
	}
}

void stand_stop_rotation(void)
{
	l293d_hb2_stop();
}

void stand_incline_down(void)
{
	if(INCLINE_DOWN_ALLOWED)
	{
		unipolar_01_step_backward(UNIPOLLAR_01_CURRENT_STEP);
	}
}

void stand_incline_up(void)
{
	if(INCLINE_UP_ALLOWED)
	{
		unipolar_01_step_forward(UNIPOLLAR_01_CURRENT_STEP);
	}
}

void stand_stop_incline(void)
{
	unipolar_01_clear_steps();
}