/*
 * state_handler.c
 *
 * Created: 3/19/2018 8:08:05 PM
 *  Author: uidq6025
 */ 

#include "global.h"
#include <util/delay.h>
#include "graphics.h"
#include "state_handler.h"
#include "hx1230.h"

void go_to_state(unsigned char state)
{
	hx_clear_screen();
	switch(state)
	{
		case STATE_IDLE:
		{
			STATE = STATE_IDLE; // update global state
			idle_state_setup();
			break;
		}
		case STATE_MANUAL:
		{
			STATE = STATE_MANUAL; // update global state
			manual_state_setup();
			break;
		}
		case STATE_TRACKING:
		{
			STATE = STATE_TRACKING; // update global state
			tracking_state_setup();
			break;
		}
		case STATE_MONITORING:
		{
			STATE = STATE_MONITORING; // update global state
			monitoring_state_setup();
			break;
		}
	}
}

void idle_state_setup(void)
{
	_delay_ms(200);
	hx_clear_screen();
	display_title();
	display_idle_state_message();
}

void manual_state_setup(void)
{
	_delay_ms(200);
	hx_clear_screen();
	display_title();
	display_manual_state_message();
}

void tracking_state_setup(void)
{
	_delay_ms(200);
	hx_clear_screen();
	display_title();
	display_data_menu();
	_delay_ms(500);
}

void monitoring_state_setup(void)
{
	_delay_ms(200);
	hx_clear_screen();
	display_title();
	display_monitoring_message();
}