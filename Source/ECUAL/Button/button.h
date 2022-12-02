/*
 * button.h
 *
 * Created: 11/19/2022 8:44:02 PM
 *  Author: Islam Barakat
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO/dio.h"

#define LOW 0
#define HIGH 1

void BUTTON_init(uint8_t buttonPort, uint8_t button_Pin);
void BUTTON_read(uint8_t buttonPort, uint8_t button_Pin, uint8_t *value);


#endif /* BUTTON_H_ */