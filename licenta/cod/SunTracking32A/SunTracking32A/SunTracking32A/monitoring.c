/*
 * monitoring.c
 *
 * Created: 24-Mar-18 15:06:41
 *  Author: ScorpionIPX
 */ 

#include "global.h"
#include <util/delay.h>
#include "charge_driver.h"
#include "graphics.h"

void monitor(void)
{
	unsigned int battery_voltage = get_battery_voltage();
	unsigned int converter_voltage = get_converter_voltage();
	
	display_monitoring_data(battery_voltage, converter_voltage);
	_delay_ms(100);
}