/*
 * user_interface.c
 *
 * Created: 3/19/2018 8:38:39 PM
 *  Author: uidq6025
 */ 

#include "global.h"
#include <util/delay.h>
#include <avr/interrupt.h>
#include "user_interface.h"
#include "state_handler.h"
#include "adc_driver.h"



void init_user_interface(void)
{
	init_next_state_button();
}


void init_next_state_button(void)
{
	BUTTON_1_DRR &= ~(1 << BUTTON_1_PIN); // PD2 is input

	BUTTON_1_PORT |= (1 << BUTTON_1_PIN);    // turn on the pull-up resistor
	// PD2 is now an input with pull-up enabled



	MCUCR &= ~(1 << ISC00 | 1 << ISC01);    // low level of INT0 generates an interrupt request: when BUTTON_1 is pressed
	GICR |= (1 << INT0);     // turns on INT0
}

ISR (INT0_vect)
{
	cli(); // temporarily disable interrupts
	switch(STATE)
	{
		case STATE_IDLE:
		{
			STATE = STATE_MANUAL;
			break;
		}
		case STATE_MANUAL:
		{
			STATE = STATE_TRACKING;
			break;
		}
		case STATE_TRACKING:
		{
			STATE = STATE_IDLE;
			break;
		}
		default:
		{
			STATE = STATE_IDLE;
			break;
		}
	}
}