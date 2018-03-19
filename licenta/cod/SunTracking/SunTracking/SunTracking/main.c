
#include "global.h"
#include <avr/io.h>
#include <util/delay.h>
#include "adc_driver.h"
#include "hx1230.h"
#include "hx_8x6_characters.h"
#include "graphics.h"
#include "light.h"
#include "pwm_driver.h"
#include "sg90_driver.h"
#include "tracking.h"

void uC_init(void);

int main(void)
{
	uC_init();
	
	SG90_INCLINE_DUTY_CYCLE_REGISTER = SG90_INCLINE_POS_0;
	SG90_ROTATE_DUTY_CYCLE_REGISTER = SG90_ROTATE_INIT_POS;
	turn_on_pwm_channels();
	
	//test_sg90_rotate(1);
	//_delay_ms(2000);
	
    while (1) 
    {
		_delay_ms(50);
		track();
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
	
	init_hx1230_control();
	_delay_ms(50);
	hx_fill_screen();
	_delay_ms(500);
	hx_clear_screen();
	_delay_ms(50);
	
	display_title();
	_delay_ms(1150);
	display_data_menu();
	_delay_ms(150);
}
