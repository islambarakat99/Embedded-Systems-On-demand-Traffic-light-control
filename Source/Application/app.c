/*
 * app.c
 *
 * Created: 11/19/2022 8:36:42 PM
 *  Author: Islam Barakat
 */ 

#include "app.h"

// Button Macros
#define BUTTON_PORT PORT_D
#define BUTTON_PIN  2

// Car LEDs Macros
#define CAR_LED_RED_PORT 	PORT_A
#define CAR_LED_YELLOW_PORT PORT_A
#define CAR_LED_GREEN_PORT 	PORT_A
#define CAR_LED_RED_PIN 		0
#define CAR_LED_YELLOW_PIN 		1
#define CAR_LED_GREEN_PIN 		2

#define CAR_LED_YELLOW_PORT PORT_A
#define CAR_LED_YELLOW_PIN 		4

// Pedestrian LEDs Macros
#define PED_LED_RED_PORT 	PORT_B
#define PED_LED_YELLOW_PORT PORT_B
#define PED_LED_GREEN_PORT 	PORT_B
#define PED_LED_RED_PIN 		0
#define PED_LED_YELLOW_PIN 		1
#define PED_LED_GREEN_PIN 		2

unsigned int overflowCounter = 0;

void APP_init()
{
	// Initalize Button
	BUTTON_init(BUTTON_PORT, BUTTON_PIN);

	// Initalize Car LEDs
	LED_init(CAR_LED_RED_PORT, CAR_LED_RED_PIN);
	LED_init(CAR_LED_YELLOW_PORT, CAR_LED_YELLOW_PIN);
	LED_init(CAR_LED_GREEN_PORT, CAR_LED_GREEN_PIN);

	// Initalize Pedestrian LEDs
	LED_init(PED_LED_RED_PORT, PED_LED_RED_PIN);
	LED_init(PED_LED_YELLOW_PORT, PED_LED_YELLOW_PIN);
	LED_init(PED_LED_GREEN_PORT, PED_LED_GREEN_PIN);

	// Initialize Timer 0
	TCCR0 = 0x00;
    TCNT0 = 0x00;
}

void APP_start()
{
	uint8_t buttonState = 2;
	
	BUTTON_read(PORT_D, 7, &buttonState);
	if(buttonState == HIGH)
	{
		LED_on(PORT_A, 4);
	}
	else if (buttonState == LOW)
	{
		LED_off(PORT_A, 4);
	}	
	else
	{
	
	}

	while(1){	
		LED_toggle(CAR_LED_YELLOW_PORT,CAR_LED_YELLOW_PIN);
		TCCR0 |= (1<<0);
		while(overflowCounter < 2000)
		{
			while((TIFR & (1<<0)) == 0);	
			TIFR |= (1<<0);
			overflowCounter++;
		}
		overflowCounter = 0;
		TCCR0 = 0X00;
	}
}