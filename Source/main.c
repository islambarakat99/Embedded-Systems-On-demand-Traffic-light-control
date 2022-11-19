/*
 * GccApplication1.c
 * Write HIGH on PIN 0 on PORT A
 * Created: 11/12/2022 8:53:21 PM
 * Author : Islam Barakat
 */ 

//#include <avr/io.h>
#include "Application/app.h"

//#define F_CPU 1000000U
//#include <util/delay.h>

int main(void)
{
	APP_init();

    while (1) 
    {
		APP_start();
    }
}

