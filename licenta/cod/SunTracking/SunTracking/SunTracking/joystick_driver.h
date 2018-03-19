/*
 * joystick_driver.h
 *
 * Created: 3/19/2018 11:34:57 PM
 *  Author: uidq6025
 */ 


#ifndef JOYSTICK_DRIVER_H_
#define JOYSTICK_DRIVER_H_

#define JOYSTICK_RESOLUTION 10
#define JOYSTICK_IDLE_VALUE 512
#define JOYSTICK_DEAD_ZONE 100

void manual_control(void);
signed int format_axis(unsigned int axis);



#endif /* JOYSTICK_DRIVER_H_ */