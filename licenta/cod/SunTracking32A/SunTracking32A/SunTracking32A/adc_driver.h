/*
 * adc_driver.h
 *
 * Created: 18-Oct-17 9:58:32 AM
 *  Author: uidq6025
 */ 


#ifndef ADC_DRIVER_H_
#define ADC_DRIVER_H_

#include <avr/io.h>

#define ADC_MAX 1023
#define ADC_HALF 512

void ADC_init(void);
uint16_t ADC_get_value(uint8_t ch);

#endif /* ADC_DRIVER_H_ */