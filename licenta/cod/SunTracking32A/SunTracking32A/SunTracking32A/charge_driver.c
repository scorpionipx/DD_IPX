/*
 * charge_driver.c
 *
 * Created: 24-Mar-18 14:39:59
 *  Author: ScorpionIPX
 */ 

#include "charge_driver.h"
#include "adc_driver.h"

void init_charge_control(void)
{
	RELAY_DDR |= 1 << RELAY_PIN;  // Relay pin as output
	RELAY_PORT &= ~(1 << RELAY_PIN);  // Relay default state OFF
}

void turn_on_charging(void)
{
	TURN_ON_RELAY;
}

void turn_off_charging(void)
{
	TURN_OFF_RELAY;
}

unsigned int get_battery_voltage(void)
{
	unsigned int battery_voltage = ADC_get_value(BATTERY_ADC_CHANNEL);
	battery_voltage = battery_voltage*((long)BATTERY_MAX_MV) / ADC_MAX;
	battery_voltage = battery_voltage*((long) V_BAT_GAIN) / 1000;
	return battery_voltage;
}

unsigned int get_converter_voltage(void)
{
	unsigned int battery_voltage = ADC_get_value(CONVERTER_ADC_CHANNEL);
	battery_voltage = battery_voltage*((long)CONVERTER_MAX_MV)/ADC_MAX;
	battery_voltage = battery_voltage*((long) V_CHR_GAIL) / 1000;
	return battery_voltage;
}