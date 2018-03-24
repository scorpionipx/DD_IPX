/*
 * graphics.c
 *
 * Created: 28-Oct-17 6:25:15 PM
 *  Author: ScorpionIPX
 */ 

#include "hx1230.h"
#include "joystick_driver.h"
#include "sg90_driver.h"
#include <stdlib.h>

void display_title(void)
{
	hx_set_coordinates(0, 0);
	hx_write_string("AutoTracking LDR");
	hx_set_coordinates(0, 1);
	hx_write_string("  ScorpionIPX");
}

void display_data_menu(void)
{
	hx_set_coordinates(0, 3);
	hx_write_string("       ||");
	hx_set_coordinates(0, 4);
	hx_write_string("================");
	hx_set_coordinates(0, 5);
	hx_write_string("       ||");
}

void display_light_sensor_data(uint8_t sensor, int data)
{
	//hx_set_coordinates(60, 3 + sensor);
	hx_set_coordinates(24 + 36 * (sensor & 1), 3 + 2 * (sensor >> 1));
	
	// hx_write_char('0' + ((data / 100) % 10));
	hx_write_char('0' + ((data / 10) % 10));
	hx_write_char('0' + (data % 10));
	
	hx_set_coordinates(18, 7);
	hx_write_char('0' + OCR1A / 100);
	hx_write_char('0' + (OCR1A / 10) % 10);
	hx_write_char('0' + OCR1A % 10);
	
	hx_set_coordinates(66, 7);
	hx_write_char('0' + OCR1B / 100);
	hx_write_char('0' + (OCR1B / 10) % 10);
	hx_write_char('0' + OCR1B % 10);
}

void display_idle_state_message(void)
{
	hx_set_coordinates(0, 3);
	hx_write_string("- system is in ");
	hx_set_coordinates(0, 4);
	hx_write_string("IDLE mode");
	hx_set_coordinates(0, 6);
	hx_write_string("going to sleep");
}


void display_manual_state_message(void)
{
	hx_set_coordinates(0, 3);
	hx_write_string("- system is in ");
	hx_set_coordinates(0, 4);
	hx_write_string("MANUAL mode");
	
	hx_set_coordinates(0, 6);
	hx_write_string("JX:");
	hx_set_coordinates(54, 6);
	hx_write_string("B:");
	
	hx_set_coordinates(0, 7);
	hx_write_string("JY:");
	hx_set_coordinates(54, 7);
	hx_write_string("A:");
}

void display_joystick_data(unsigned int x, unsigned int y)
{	 
	hx_set_coordinates(24, 6);
	
	hx_write_char('0' + x / 1000);
	hx_write_char('0' + (x / 100) % 10);
	hx_write_char('0' + (x / 10) % 10);
	hx_write_char('0' + x % 10);
	
	hx_set_coordinates(72, 6);
	
	hx_write_char('0' + SG90_ROTATE_DUTY_CYCLE_REGISTER / 1000);
	hx_write_char('0' + (SG90_ROTATE_DUTY_CYCLE_REGISTER / 100) % 10);
	hx_write_char('0' + (SG90_ROTATE_DUTY_CYCLE_REGISTER / 10) % 10);
	hx_write_char('0' + SG90_ROTATE_DUTY_CYCLE_REGISTER % 10);
	
	hx_set_coordinates(24, 7);
	
	hx_write_char('0' + y / 1000);
	hx_write_char('0' + (y / 100) % 10);
	hx_write_char('0' + (y / 10) % 10);
	hx_write_char('0' + y % 10);
	
	hx_set_coordinates(72, 7);
	
	hx_write_char('0' + SG90_INCLINE_DUTY_CYCLE_REGISTER / 1000);
	hx_write_char('0' + (SG90_INCLINE_DUTY_CYCLE_REGISTER / 100) % 10);
	hx_write_char('0' + (SG90_INCLINE_DUTY_CYCLE_REGISTER / 10) % 10);
	hx_write_char('0' + SG90_INCLINE_DUTY_CYCLE_REGISTER % 10);
	
	
}

void display_monitoring_message(void)
{
	hx_set_coordinates(0, 3);
	hx_write_string("- system is in ");
	hx_set_coordinates(0, 4);
	hx_write_string("MONITORING mode");
	
	hx_set_coordinates(0, 6);
	hx_write_string("Vbat:");
	hx_set_coordinates(80, 6);
	hx_write_string("V");
	
	hx_set_coordinates(0, 7);
	hx_write_string("Vchr:");
	hx_set_coordinates(80, 7);
	hx_write_string("V");
}

void display_monitoring_data(unsigned int v_bat, unsigned int v_chr)
{
	hx_set_coordinates(42, 6);
	
	hx_write_char('0' + v_bat / 10000);
	hx_write_char('0' + (v_bat / 1000) % 10);
	hx_write_char('.');
	hx_write_char('0' + (v_bat / 100) % 10);
	hx_write_char('0' + (v_bat / 10) % 10);
	hx_write_char('0' + v_bat % 10);
	
	hx_set_coordinates(42, 7);
	
	hx_write_char('0' + v_chr / 10000);
	hx_write_char('0' + (v_chr / 1000) % 10);
	hx_write_char('.');
	hx_write_char('0' + (v_chr / 100) % 10);
	hx_write_char('0' + (v_chr / 10) % 10);
	hx_write_char('0' + v_chr % 10);
}