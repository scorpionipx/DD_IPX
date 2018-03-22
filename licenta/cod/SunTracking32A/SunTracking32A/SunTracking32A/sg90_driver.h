/*
 * sg90_driver.h
 *
 * Created: 03-Feb-18 1:04:37 PM
 *  Author: ScorpionIPX
 */ 


#ifndef SG90_DRIVER_H_
#define SG90_DRIVER_H_

#include <avr/io.h>

#define WIDTH_20_MS ICR1  // controller's register defined as counter top to reach 20ms

#define IDEAL_SG90_POS_0 (WIDTH_20_MS / 20)  // ~1 ms, maximum right / up
#define IDEAL_SG90_POS_90 ((WIDTH_20_MS * 10) / 133)  // ~1.5 ms, middle
#define IDEAL_SG90_POS_180 (WIDTH_20_MS / 10)  // ~2 ms, maximum left / down

#define SG90_TEST_TIME_MS 1200  // time required to reach a 90 degrees difference position

#define SG90_INCLINE 0  // servo used to tilt/incline the attached device
#define SG90_ROTATE 1  // servo used to rotate the attached device

#define SG90_INCLINE_DUTY_CYCLE_REGISTER OCR1A  // attach signal cable to PD5
#define SG90_ROTATE_DUTY_CYCLE_REGISTER OCR1B  // attach signal cable to PD4

#define SG90_INCLINE_POS_0_OFFSET 65  // determined by manual testing
#define SG90_INCLINE_POS_90_OFFSET 40  // determined by manual testing
#define SG90_INCLINE_POS_180_OFFSET 0  // determined by manual testing

#define SG90_ROTATE_POS_0_OFFSET 60  // determined by manual testing
#define SG90_ROTATE_POS_90_OFFSET 37  // determined by manual testing
#define SG90_ROTATE_POS_180_OFFSET 5  // determined by manual testing

#define SG90_INCLINE_POS_0 IDEAL_SG90_POS_0 - SG90_INCLINE_POS_0_OFFSET
#define SG90_INCLINE_POS_90 IDEAL_SG90_POS_90 - SG90_INCLINE_POS_90_OFFSET
#define SG90_INCLINE_POS_180 IDEAL_SG90_POS_180 - SG90_INCLINE_POS_180_OFFSET

#define SG90_ROTATE_POS_0 IDEAL_SG90_POS_0 - SG90_ROTATE_POS_0_OFFSET
#define SG90_ROTATE_POS_90 IDEAL_SG90_POS_90 - SG90_ROTATE_POS_90_OFFSET
#define SG90_ROTATE_POS_180 IDEAL_SG90_POS_180 - SG90_ROTATE_POS_180_OFFSET

#define SG90_INCLINE_INIT_POS SG90_INCLINE_POS_0
#define SG90_ROTATE_INIT_POS SG90_ROTATE_POS_90

#define SG90_UPPER_INCLINE_LIMIT SG90_INCLINE_POS_90


void test_sg90_incline(int number_of_iteration);
void test_sg90_rotate(int number_of_iteration);

void rotate_to_angle(int angle_deg);
void incline_to_angle(int angle_deg);

int __angle_to_duty_cycle_rotate__(int angle);
int __angle_to_duty_cycle_incline__(int angle);

#endif /* SG90_DRIVER_H_ */