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
	// PD4 and PD5 as output of 16bits Timer1
	
	 ICR1 = 2485;
	 // set TOP to count 20ms
	 // TOP calculated by the formula: F_PWM = F_CPU/(PRESCALER*(1 + TOP))
	 // Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_Datasheet, page 164

	 OCR1A = 00;
	 // set PWM for 0% duty cycle

	 OCR1B = 00;
	 // set PWM for 0% duty cycle

	 TCCR1A &= ~((1 << COM1A1)|(1 << COM1B1));
	 // make sure PWM signal is off

	TCCR1B |= (1 << CS11);
	// START the timer with 8 prescaler

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