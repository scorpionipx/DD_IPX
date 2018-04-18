
#include "global.h"
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "adc_driver.h"
#include "hx1230.h"
#include "hx_8x6_characters.h"
#include "graphics.h"
#include "light.h"
#include "pwm_driver.h"
#include "sg90_driver.h"
#include "tracking.h"
#include "user_interface.h"
#include "state_handler.h"
#include "joystick_driver.h"
#include "monitoring.h"
#include "unipolar_driver.h"

void uC_init(void);

int main(void)
{
	STATE = STATE_INIT;
	OLD_STATE = STATE_INIT;
	uC_init();
	
	SG90_INCLINE_DUTY_CYCLE_REGISTER = SG90_INCLINE_POS_0;
	SG90_ROTATE_DUTY_CYCLE_REGISTER = SG90_ROTATE_POS_90;
	turn_on_pwm_channels();
	
	
	STATE = STATE_IDLE;
	/*DDRC = 0xFF;
	PORTC = 0x00;*/
	_delay_ms(500);
	UNIPOLAR_01_SET_STEP_1;
	_delay_ms(500);
	UNIPOLAR_01_CLEAR_STEP_1;
	_delay_ms(500);
	UNIPOLAR_01_SET_STEP_2;
	_delay_ms(500);
	UNIPOLAR_01_CLEAR_STEP_2;
	_delay_ms(500);
	UNIPOLAR_01_SET_STEP_3;
	_delay_ms(500);
	UNIPOLAR_01_CLEAR_STEP_3;
	_delay_ms(500);
	UNIPOLAR_01_SET_STEP_4;
	_delay_ms(500);
	UNIPOLAR_01_CLEAR_STEP_4;
	_delay_ms(500);
	
	while (1)
	{
		/*PORTC = ~PORTC;
		_delay_ms(100);*/
		
		if(STATE_CHANGED)
		{
			OLD_STATE = STATE; // update state
			go_to_state(STATE);
			_delay_ms(250);
			sei(); // enable interrupts
		}
		
		switch(OLD_STATE)
		{
			case STATE_TRACKING:
			{
				track();
				break;
			}
			case STATE_MANUAL:
			{
				manua C9+                                                                                                                                                                                                                                                          C  09l_control();
				break;
			}
			case STATE_MONITORING:
			{
				monitor();
				break;
			}
			default:
			{
				break;
			}
		}
	}
}

void uC_init(void)
{
	// Wait for system to get fully powered up
	_delay_ms(100);
	
	// initialize required modules
	ADC_init();
	_delay_ms(50);
	
	init_pwm_channels();
	_delay_ms(50);
	
	init_user_interface();
	_delay_ms(50);
	
	init_unipolar_control();
	
	init_hx1230_control();
	_delay_ms(50);
	hx_fill_screen();
	_delay_ms(500);
	hx_clear_screen();
	_delay_ms(50);
	
	display_title();
	display_idle_state_message();
	
	sei(); // enable global interrupts
}
