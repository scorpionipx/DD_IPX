/*
 * unipolar_driver.h
 *
 * Created: 17-Apr-18 18:56:06
 *  Author: ScorpionIPX
 */ 


#ifndef UNIPOLAR_DRIVER_H_
#define UNIPOLAR_DRIVER_H_

void init_unipolar_control(void);
void unipolar_01_step_forward(unsigned char current_step);
void unipolar_01_step_backward(unsigned char current_step);

#define UNIPOLAR_01_DDR DDRB
#define UNIPOLAR_01_PORT PORTB

#define UNIPOLAR_01_STEP_1 PORTB0
#define UNIPOLAR_01_STEP_2 PORTB1
#define UNIPOLAR_01_STEP_3 PORTB2
#define UNIPOLAR_01_STEP_4 PORTB3

#define UNIPOLAR_01_SET_STEP_1 (UNIPOLAR_01_PORT |= 1 << UNIPOLAR_01_STEP_1)
#define UNIPOLAR_01_SET_STEP_2 (UNIPOLAR_01_PORT |= 1 << UNIPOLAR_01_STEP_2)
#define UNIPOLAR_01_SET_STEP_3 (UNIPOLAR_01_PORT |= 1 << UNIPOLAR_01_STEP_3)
#define UNIPOLAR_01_SET_STEP_4 (UNIPOLAR_01_PORT |= 1 << UNIPOLAR_01_STEP_4)

#define UNIPOLAR_01_CLEAR_STEP_1 (UNIPOLAR_01_PORT &= ~(1 << UNIPOLAR_01_STEP_1))
#define UNIPOLAR_01_CLEAR_STEP_2 (UNIPOLAR_01_PORT &= ~(1 << UNIPOLAR_01_STEP_2))
#define UNIPOLAR_01_CLEAR_STEP_3 (UNIPOLAR_01_PORT &= ~(1 << UNIPOLAR_01_STEP_3))
#define UNIPOLAR_01_CLEAR_STEP_4 (UNIPOLAR_01_PORT &= ~(1 << UNIPOLAR_01_STEP_4))

#endif /* UNIPOLAR_DRIVER_H_ */