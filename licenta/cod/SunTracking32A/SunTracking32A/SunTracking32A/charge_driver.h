/*
 * charge_driver.h
 *
 * Created: 24-Mar-18 14:40:12
 *  Author: ScorpionIPX
 */ 

#include <avr/io.h>

#ifndef CHARGE_DRIVER_H_
#define CHARGE_DRIVER_H_

#define BATTERY_ADC_CHANNEL 6
#define CONVERTER_ADC_CHANNEL 7

#define BATTERY_MAX_MV 20000  // ADC channel uses a 1/4 voltage divider
#define CONVERTER_MAX_MV 20000  // ADC channel uses a 1/4 voltage divider

#define V_BAT_GAIN 975  // as unit of 1000
#define V_CHR_GAIL 975  // as unit of 1000

#define RELAY_PIN PINB4
#define RELAY_PORT PORTB
#define RELAY_DDR DDRB
#define TURN_ON_RELAY (RELAY_PORT |= 1 << RELAY_PIN)
#define TURN_OFF_RELAY (RELAY_PORT &= ~(1 << RELAY_PIN))


unsigned int get_battery_voltage(void);
unsigned int get_converter_voltage(void);
void init_charge_control(void);
void turn_on_charging(void);
void turn_off_charging(void);



#endif /* CHARGE_DRIVER_H_ */