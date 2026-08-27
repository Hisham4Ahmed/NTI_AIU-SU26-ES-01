#include "Hal/LCD/LCD_Interface.h"
#include "Common/Definition.h"
#include "Hal/LED/Led_Interface.h"
#include "Hal/Button/Button_Interface.h"
#include <util/delay.h>
#include "Mcal/EXTI/EXTI_Interface.h"
#include "Mcal/GIE/GIE_Interface.h"
#include "Mcal/ADC/ADC_Interface.h"
void main()
{
    DIO_DirectionSelectforPin(DIO_GroupA,DIO_Pin0,DIO_Inputfor1Pin);
    LCD_Init();
    ADC_Config_t MyTestADC =
    {
        .Vref   = ADC_Avcc,
        .Adjust = ADC_RightAdjust,
        .Prescaler = ADC_Prescaler8,
        .Mode = ADC_SingleConversionMode,
        .Interrupt=ADC_InterruptDisable,
        .State = ADC_Enable
    };
    ADC_Init(&MyTestADC);
    uint16_t DigitalVolt= 0; 
    uint16_t AnalogVolt= 0; 
    LCD_WriteNumber(20);
    while (1)
    {
        DigitalVolt=ADC_ReadChannelPolling(ADC_SingleCh0);
        // AnalogVolt = DigitalVolt*Step;
        AnalogVolt = (uint16_t)((DigitalVolt * 5UL)/1023);
        // LCD_WriteNumber(AnalogVolt);
    }
    
}

