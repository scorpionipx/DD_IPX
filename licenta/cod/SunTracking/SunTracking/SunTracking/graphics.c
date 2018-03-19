/*
 * graphics.c
 *
 * Created: 28-Oct-17 6:25:15 PM
 *  Author: ScorpionIPX
 */ 

#include "hx1230.h"

void display_title(void)
{
	hx_set_coordinates(0, 0);
	hx_write_string("AutoTracking LDR");
	hx_set_coordinates(0, 1);
	hx_write_string("  ScorpionIPX");
}

void display_data_menu(void)
{
	/*
	hx_set_coordinates(0, 3);
	hx_write_string("Light UL: n/a%");
	hx_set_coordinates(0, 4);
	hx_write_string("Light UR: n/a%");
	hx_set_coordinates(0, 5);
	hx_write_string("Light DL: n/a%");
	hx_set_coordinates(0, 6);
	hx_write_string("Light DR: n/a%");
	hx_set_coordinates(0, 7);
	hx_write_string("A: n/a");
	hx_set_coordinates(HX_MAX_COL / 2, 7);
	hx_write_string("B: n/a");
	*/
	
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