

#include "Mcal/DIO/DIO_Interface.h"
#include <util/delay.h>
#include "Hal/Led/Led_Interface.h"
void Lab1_ControlLedSinkSource();
#define Pressed      0
#define NotPressed   1
void main()
{
// Internal Pull Up Button to control on Led 
       DIO_DirectionSelectforPin(DIO_GroupA,DIO_Pin0,DIO_Inputfor1Pin);// Input 
       DIO_WritePin(DIO_GroupA,DIO_Pin0,DIO_Highfor1Pin);
       // Led 
     DIO_DirectionSelectforPin(DIO_GroupD,DIO_Pin0,DIO_Outputfor1Pin);
     uint8_t ButtonState=NotPressed;
     while(1)
     {
        DIO_ReadPin(DIO_GroupA,DIO_Pin0,&ButtonState);
        if(ButtonState==Pressed)
        {
            // DIO_WritePin(DIO_GroupD,DIO_Pin0,DIO_Highfor1Pin);
            Led_On(DIO_GroupD,DIO_Pin0,Led_SourceConnection);
        }
        else
        {
            DIO_WritePin(DIO_GroupD,DIO_Pin0,DIO_Lowfor1Pin);

        }
     }
}


void Lab1_ControlLedSinkSource()
{
    DIO_DirectionSelectforPin(DIO_GroupA,DIO_Pin0,DIO_Outputfor1Pin);
    DIO_DirectionSelectforPin(DIO_GroupC,DIO_Pin0,DIO_Outputfor1Pin);
    while(1)
    {
        DIO_WritePin(DIO_GroupA,DIO_Pin0,DIO_Highfor1Pin); // LedOff ///Sink Connection 
        DIO_WritePin(DIO_GroupC,DIO_Pin0,DIO_Lowfor1Pin); //LedOff // SourceConnecion 
        _delay_ms(500);
        DIO_WritePin(DIO_GroupA,DIO_Pin0,DIO_Lowfor1Pin); // LedON ///Sink Connection 
        DIO_WritePin(DIO_GroupC,DIO_Pin0,DIO_Highfor1Pin);
        _delay_ms(500);
        
    }
}