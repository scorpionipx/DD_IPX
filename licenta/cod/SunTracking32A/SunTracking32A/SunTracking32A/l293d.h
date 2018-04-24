/*
 * l293d.h
 *
 * Created: 22-Apr-18 17:50:02
 *  Author: ScorpionIPX
 */ 


#ifndef L293D_H_
#define L293D_H_

#include <avr/io.h>

#define L293D_PORT PORTD
#define L293D_DDR DDRD

#define L293D_DEAD_TIME_MS 1  /* delay time to wait before changing H bridge current direction */

#define L293D_HB2_DIRECTION_LEFT PORTD3
#define L293D_HB2_DIRECTION_RIGHT PORTD4
#define L293D_HB2_ENABLE PORTD5

#define L293D_SET_HB2_DIRECTION_LEFT (L293D_PORT |= (1 << L293D_HB2_DIRECTION_LEFT))
#define L293D_SET_HB2_DIRECTION_RIGHT (L293D_PORT |= (1 << L293D_HB2_DIRECTION_RIGHT))
#define L293D_SET_HB2_ENABLE (L293D_PORT |= (1 << L293D_HB2_ENABLE))

#define L293D_CLEAR_HB2_DIRECTION_LEFT (L293D_PORT &= ~(1 << L293D_HB2_DIRECTION_LEFT))
#define L293D_CLEAR_HB2_DIRECTION_RIGHT (L293D_PORT &= ~(1 << L293D_HB2_DIRECTION_RIGHT))
#define L293D_CLEAR_HB2_ENABLE (L293D_PORT &= ~(1 << L293D_HB2_ENABLE))


void init_l293d_control(void);
void l293d_hb2_rotate_left(void);
void l293d_hb2_rotate_right(void);
void l293d_hb2_stop(void);

#endif /* L293D_H_ */