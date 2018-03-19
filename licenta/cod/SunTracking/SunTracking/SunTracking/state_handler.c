/*
 * state_handler.c
 *
 * Created: 3/19/2018 8:08:05 PM
 *  Author: uidq6025
 */ 

#include "global.h"
#include "graphics.h"
#include "state_handler.h"

void go_to_state(unsigned char state)
{
	switch(state)
	{
		case STATE_IDLE:
		{
			STATE = STATE_IDLE; // update global state
			idle_state_setup();
		}
	}
}

void idle_state_setup(void)
{
	display_title();
	display_idle_state_message();
}