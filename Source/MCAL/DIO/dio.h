
#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/registers.h"

/************************************
 * DIO Errors 
***************************************/

// DIO Components Errors 
typedef enum EN_portNumber_t
{
    PORT_A = 'A', PORT_B, PORT_C, PORT_D, WRONG_PORT_NUMBER
}EN_portNumber_t;

typedef enum EN_pinNumber_t
{
    PIN_OK, WRONG_PIN_NUMBER
}EN_pinNumber_t;

typedef enum EN_pinDirection_t
{
    IN, OUT, WRONG_DIRECTION
}EN_pinDirection_t;

typedef enum EN_pinValue_t
{
    LOW, HIGH, WRONG_VALUE
}EN_pinValue_t;

// DIO GLOBAL ERROR
typedef enum EN_dioError_t
{
    OK, PORT_ERROR, PIN_NUMBER_ERROR, PIN_DIRECTION_ERROR, PIN_VALUE_ERROR
}EN_dioError_t;

/************************************
 * DIO Errors APIs
***************************************/

EN_portNumber_t getPortNumber(uint8_t portNumber);
EN_pinNumber_t getPinNumber(uint8_t pinNumber);
EN_pinDirection_t getPinDirection(uint8_t direction);
EN_pinValue_t getPinValue(uint8_t value);

/************************************
 * DIO APIs  
***************************************/

EN_dioError_t DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction);
EN_dioError_t DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value);
EN_dioError_t DIO_toggle(uint8_t portNumber, uint8_t pinNumber);
EN_dioError_t DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t *value);

#endif
