
#include "button.h"

void BUTTON_init(uint8_t buttonPort, uint8_t button_Pin)
{
	DIO_init(buttonPort, button_Pin, IN);
}
void BUTTON_read(uint8_t buttonPort, uint8_t button_Pin, uint8_t *value)
{
	DIO_read(buttonPort, button_Pin, value);
}