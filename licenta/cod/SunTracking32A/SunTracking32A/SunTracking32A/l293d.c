/*
 * l293d.c
 *
 * Created: 22-Apr-18 17:49:49
 *  Author: ScorpionIPX
 */ 

#include "global.h"
#include <util/delay.h>
#include "l293d.h"

void init_l293d_control(void)
{
	L293D_DDR |= ((1 << L293D_HB2_DIRECTION_LEFT) | (1 << L293D_HB2_DIRECTION_RIGHT) | (1 << L293D_HB2_ENABLE));
	L293D_PORT &= ~((1 << L293D_HB2_DIRECTION_LEFT) | (1 << L293D_HB2_DIRECTION_RIGHT) | (1 << L293D_HB2_ENABLE));
}

void l293d_hb2_rotate_left(void)
{
	L293D_CLEAR_HB2_DIRECTION_RIGHT;
	_delay_ms(L293D_DEAD_TIME_MS);
	L293D_SET_HB2_DIRECTION_LEFT;
	L293D_SET_HB2_ENABLE;
}

void l293d_hb2_rotate_right(void)
{
	L293D_CLEAR_HB2_DIRECTION_LEFT;
	_delay_ms(L293D_DEAD_TIME_MS);
	L293D_SET_HB2_DIRECTION_RIGHT;
	L293D_SET_HB2_ENABLE;
}

void l293d_hb2_stop(void)
{
	L293D_CLEAR_HB2_ENABLE;
	L293D_CLEAR_HB2_DIRECTION_LEFT;
	L293D_CLEAR_HB2_DIRECTION_RIGHT;
}