#include "Led_Interface.h"

void Led_Init(uint8_t LedGroup,uint8_t LedPin) // Select Led as ouput
{
    DIO_DirectionSelectforPin(LedGroup,LedPin,DIO_Outputfor1Pin);
}


void Led_On(uint8_t LedGroup,uint8_t LedPin, uint8_t ConnectionType)
{
    if(ConnectionType==Led_SourceConnection)
    {
        DIO_WritePin(LedGroup,LedPin,DIO_Highfor1Pin);
    }
    else if (ConnectionType==Led_SinkConnection)
    {
        DIO_WritePin(LedGroup,LedPin,DIO_Lowfor1Pin);
    }
}

void Led_Off(uint8_t LedGroup,uint8_t LedPin, uint8_t ConnectionType)
{
    if(ConnectionType==Led_SourceConnection)
    {
        DIO_WritePin(LedGroup,LedPin,DIO_Lowfor1Pin);
    }
    else if (ConnectionType==Led_SinkConnection)
    {
        DIO_WritePin(LedGroup,LedPin,DIO_Highfor1Pin);
    }
}