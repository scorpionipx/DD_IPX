/*
 * light.h
 *
 * Created: 28-Oct-17 7:02:15 PM
 *  Author: ScorpionIPX
 */ 


#ifndef LIGHT_H_
#define LIGHT_H_

#define LS_UP_LEFT    0
#define LS_UP_RIGHT   1
#define LS_DOWN_LEFT  2
#define LS_DOWN_RIGHT 3

#define LS_UP_LEFT_RAW_OFFSET 0
#define LS_UP_RIGHT_RAW_OFFSET   0
#define LS_DOWN_LEFT_RAW_OFFSET  -5
#define LS_DOWN_RIGHT_RAW_OFFSET 0

static const int LS_RAW_OFFSETS[4] = {LS_UP_LEFT_RAW_OFFSET, LS_UP_RIGHT_RAW_OFFSET, LS_DOWN_LEFT_RAW_OFFSET, LS_DOWN_RIGHT_RAW_OFFSET};

int get_light_intensity(uint8_t sensor);
int get_filtered_light_intensity(uint8_t sensor);
int percentage_value(int raw_value);

#endif /* LIGHT_H_ */