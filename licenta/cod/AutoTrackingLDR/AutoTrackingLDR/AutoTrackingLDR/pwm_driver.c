/*
 * pwm_driver.c
 *
 * Created: 07-Sep-17 8:53:43 PM
 *  Author: ScorpionIPX
 */ 

#include "global.h"
#include <avr/io.h>

void init_pwm_channels(void)
{
	DDRD |= (1 << DDD4)|(1 << DDD5);
	// PB1 and PB2 is now an output
	
	 ICR1 = 1249;
	 // set TOP to count 20ms @ 16its

	 OCR1A = 00;
	 // set PWM for 0% duty cycle @ 16bits

	 OCR1B = 00;
	 // set PWM for 0% duty cycle @ 16bits

	 TCCR1A &= ~((1 << COM1A1)|(1 << COM1B1));
	 // make sure PWM signal is off

	TCCR1B |= (1 << CS12);
	// START the timer with 256 prescaler

	 TCCR1A |= (1 << WGM11);
	 TCCR1B |= (1 << WGM12)|(1 << WGM13);
	 // set Fast PWM mode using ICR1 as TOP
}

void turn_on_pwm_channels(void)
{
	TCCR1A |= (1 << COM1A1)|(1 << COM1B1);
}

void turn_off_pwm_channels(void)
{
	TCCR1A &= ~((1 << COM1A1)|(1 << COM1B1));
}