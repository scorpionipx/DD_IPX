/*
 * state_handler.h
 *
 * Created: 3/19/2018 8:10:15 PM
 *  Author: uidq6025
 */ 

#include "global.h"

#ifndef STATE_HANDLER_H_
#define STATE_HANDLER_H_


#define STATE_CHANGED (!(OLD_STATE == STATE))


void go_to_state(unsigned char state);
void idle_state_setup(void);
void manual_state_setup(void);
void tracking_state_setup(void);


#endif /* STATE_HANDLER_H_ */