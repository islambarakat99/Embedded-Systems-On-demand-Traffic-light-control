
#include <stdio.h>
#include "dio.h"

EN_portNumber_t getPortNumber(uint8_t portNumber)
{
	if (portNumber != 'A' || portNumber != 'B' || portNumber != 'C' || portNumber != 'D')
		return WRONG_PORT_NUMBER;
	return portNumber;
}

EN_pinNumber_t getPinNumber(uint8_t pinNumber)
{
	if(pinNumber>7 || pinNumber <0)
		return WRONG_PIN_NUMBER;
	return PIN_OK;
}

EN_pinDirection_t getPinDirection(uint8_t direction)
{
	if(direction>1 || direction<0)
		return WRONG_DIRECTION;
	return direction;
}

EN_pinValue_t getPinValue(uint8_t value)
{
	if(value>1 || value<0)
		return WRONG_VALUE;
	return value;
}

EN_dioError_t DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction)
{	
	if (getPinNumber(pinNumber)==WRONG_PIN_NUMBER)
	{
		printf("%s","DIO Couldn't be initated, WRONG PIN NUMBER\n");
		return PIN_NUMBER_ERROR;
	}
	else if (getPinDirection(direction) == WRONG_DIRECTION)
	{
		printf("%s","DIO Couldn't be initated, WRONG PIN DIRECTION\n");
		return PIN_DIRECTION_ERROR;
	}
	else if (getPortNumber(portNumber)==WRONG_PORT_NUMBER)
	{
		printf("%s","DIO Couldn't be initated, WRONG PORT NUMBER\n");
		return PORT_ERROR;
	}
	else
	{
		switch(portNumber)
		{
			case PORT_A:
			if(direction == IN)
			{
				DDRA &= ~(1<<pinNumber);
			}
			else
			{
				DDRA |= (1<<pinNumber);
			}
			break;
			case PORT_B:
			if(direction == IN)
			{
				DDRB &= ~(1<<pinNumber);
			}
			else
			{
				DDRB |= (1<<pinNumber);
			}
			break;
			case PORT_C:
			if(direction == IN)
			{
				DDRC &= ~(1<<pinNumber);
			}
			else
			{
				DDRC |= (1<<pinNumber);
			}
			break;
			case PORT_D:
				if(direction == IN)
				{
					DDRD &= ~(1<<pinNumber);
				}
				else
				{
					DDRD |= (1<<pinNumber);
				}
			break;
			default:
				printf("%s","DIO Couldn't be initated, WRONG PORT NUMBER");
		}
		return OK;
	}	
}

EN_dioError_t DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value)
{
	if (getPinNumber(pinNumber)==WRONG_PIN_NUMBER)
	{
		printf("%s","DIO Couldn't be initated, WRONG PIN NUMBER\n");
		return PIN_NUMBER_ERROR;
	}
	else if (getPinValue(value) == WRONG_VALUE)
	{
		printf("%s","DIO Couldn't be initated, WRONG VALUE\n");
		return PIN_VALUE_ERROR;
	}
	else if (getPortNumber(portNumber)==WRONG_PORT_NUMBER)
	{
		printf("%s","DIO Couldn't be initated, WRONG PORT NUMBER\n");
		return PORT_ERROR;
	}
	else
	{
		switch(portNumber)
		{
			case PORT_A:
			if(value == LOW)
			{
				PORTA &= ~(1<<pinNumber);
			}
			else
			{
				PORTA |= (1<<pinNumber);
			}
			break;
			case PORT_B:
			if(value == LOW)
			{
				PORTB &= ~(1<<pinNumber);
			}
			else
			{
				PORTB |= (1<<pinNumber);
			}
			break;
			case PORT_C:
			if(value == LOW)
			{
				PORTC &= ~(1<<pinNumber);
			}
			else
			{
				PORTC |= (1<<pinNumber);
			}
			break;
			case PORT_D:
			if(value == LOW)
			{
				PORTD &= ~(1<<pinNumber);
			}
			else
			{
				PORTD |= (1<<pinNumber);
			}
			break;
		}
		return OK;
	}
}

EN_dioError_t DIO_toggle(uint8_t portNumber, uint8_t pinNumber)
{
	if (getPinNumber(pinNumber)==WRONG_PIN_NUMBER)
	{
		printf("%s","DIO Couldn't be initated, WRONG PIN NUMBER\n");
		return PIN_NUMBER_ERROR;
	}
	else if (getPortNumber(portNumber)==WRONG_PORT_NUMBER)
	{
		printf("%s","DIO Couldn't be initated, WRONG PORT NUMBER\n");
		return PORT_ERROR;
	}
	else
	{
		switch(portNumber)
		{
			case PORT_A:
				PORTA ^= (1<<pinNumber);
			break;
			case PORT_B:
				PORTB ^= (1<<pinNumber);
			break;
			case PORT_C:
				PORTC ^= (1<<pinNumber);
			break;
			case PORT_D:
				PORTD ^= (1<<pinNumber);
			break;
		}
		return OK;
	}
}

EN_dioError_t DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t *value)
{
	if (getPinNumber(pinNumber)==WRONG_PIN_NUMBER)
	{
		printf("%s","DIO Couldn't be initated, WRONG PIN NUMBER\n");
		return PIN_NUMBER_ERROR;
	}
	else if (getPortNumber(portNumber)==WRONG_PORT_NUMBER)
	{
		printf("%s","DIO Couldn't be initated, WRONG PORT NUMBER\n");
		return PORT_ERROR;
	}
	else
	{
		switch(portNumber)
		{
			case PORT_A:
				*value = (PINA & (1<<pinNumber)) >> pinNumber;
				break;
			case PORT_B:
				*value = (PINB & (1<<pinNumber)) >> pinNumber;
				break;
			case PORT_C:
				*value = (PINC & (1<<pinNumber)) >> pinNumber;
				break;
			case PORT_D:
				*value = (PIND & (1<<pinNumber)) >> pinNumber;
				break;
		}
		return OK;
	}
}
