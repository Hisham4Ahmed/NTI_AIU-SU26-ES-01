#include "Hal/LCD/LCD_Interface.h"
#include "Common/Definition.h"
#include "Hal/LED/Led_Interface.h"
#include "Hal/Button/Button_Interface.h"
#include <util/delay.h>
#include "Mcal/EXTI/EXTI_Interface.h"
#include "Mcal/GIE/GIE_Interface.h"
#include "Mcal/ADC/ADC_Interface.h"
#include "Mcal/Timer0/T0_Interface.h"
// Team 1 
    // Test Normal Mode And CTC Mode 
        // 1- Led toggle at 500 msec 
        // 2- Buzzer toggle at 150 msec 
        // 3- SevenSegment at 1sec 
void main()
{
    T0_Config_t Timer0Test=
    {
        .Prescaler=T0_Prescaler8,
        .Mode=T0_FastPWM,
        .OC0Mode=T0_OC0_NonInverting,
        .CompareValue=200,
    };
    T0_Init(&Timer0Test);
    // OC0->
    DIO_DirectionSelectforPin(DIO_GroupB,DIO_Pin3,DIO_Outputfor1Pin);
    
}


        
// Team 2 
    // Test Normal Mode And CTC Mode 
        // 1- Led toggle at 500 msec 
        // 2- Buzzer toggle at 150 msec 
        // 3- SevenSegment at 1sec 
    // PWM diffietent Duty Cycle 


// Team 3 
    // Test Normal Mode And CTC Mode 
        // 1- Led toggle at 500 msec 
        // 2- Buzzer toggle at 150 msec 
        // 3- SevenSegment at 1sec 
    // PWM diffietent Duty Cycle 


// Team 4 
    // Test Normal Mode And CTC Mode 
        // 1- Led toggle at 500 msec 
        // 2- Buzzer toggle at 150 msec 
        // 3- SevenSegment at 1sec 
    // PWM diffietent Duty Cycle 