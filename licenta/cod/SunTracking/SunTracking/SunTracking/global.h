/*
 * global.h
 *
 * Created: 06-Oct-17 11:42:12 AM
 *  Author: ScorpionIPX
 */ 


#ifndef GLOBAL_H_
#define GLOBAL_H_

#define F_CPU 1000000UL


unsigned char STATE;
unsigned char OLD_STATE;
#define STATE_INIT 0
#define STATE_IDLE 1
#define STATE_MANUAL 2
#define STATE_TRACKING 3


#endif /* GLOBAL_H_ */