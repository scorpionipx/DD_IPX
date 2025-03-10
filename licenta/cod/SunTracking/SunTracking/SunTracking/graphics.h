/*
 * graphics.h
 *
 * Created: 28-Oct-17 6:25:27 PM
 *  Author: ScorpionIPX
 */ 


#ifndef GRAPHICS_H_
#define GRAPHICS_H_

void display_title(void);
void display_data_menu(void);
void display_light_sensor_data(unsigned char sensor, int data);
void display_idle_state_message(void);
void display_manual_state_message(void);
void display_joystick_data(unsigned int x, unsigned int y);

#endif /* GRAPHICS_H_ */