 /*
 * user_interface.h
 *
 * Created: 3/19/2018 8:38:53 PM
 *  Author: uidq6025
 */ 

#include <avr/io.h>


#ifndef USER_INTERFACE_H_
#define USER_INTERFACE_H_

#define BUTTON_1_DRR DDRD
#define BUTTON_1_PORT PORTD
#define BUTTON_1_PIN 2 // PD2

#define ADC_CHANNEL_X_AXIS 4
#define ADC_CHANNEL_Y_AXIS 5

void init_next_state_button(void);
void init_user_interface(void);


#endif /* USER_INTERFACE_H_ */