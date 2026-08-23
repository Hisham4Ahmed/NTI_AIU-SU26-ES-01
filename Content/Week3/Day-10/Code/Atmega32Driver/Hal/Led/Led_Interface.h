#ifndef _HAL_LED_LED_INTERFACE_H
#define _HAL_LED_LED_INTERFACE_H
 

#include <stdint.h>
#include "../../Common/BitMath.h"
#include "../../Common/Definiton.h"
#include "../../Mcal/DIO/DIO_Interface.h"

#include "Led_Private.h"

void Led_Init(uint8_t LedGroup,uint8_t LedPin); // Select Led as ouput

void Led_On(uint8_t LedGroup,uint8_t LedPin, uint8_t ConnectionType);
void Led_Off(uint8_t LedGroup,uint8_t LedPin, uint8_t ConnectionType);
void Led_Toggle(uint8_t LedGroup,uint8_t LedPin);
#endif
