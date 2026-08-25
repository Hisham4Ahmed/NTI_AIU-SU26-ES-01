#include "Hal/LCD/LCD_Interface.h"
#include "Common/Definition.h"
#include "Hal/LED/Led_Interface.h"
#include "Hal/Button/Button_Interface.h"
#include <util/delay.h>
#include "Mcal/EXTI/EXTI_Interface.h"
#include "Mcal/GIE/GIE_Interface.h"
void main()
{
Led_Init(DIO_GroupA,DIO_Pin0);
Led_Init(DIO_GroupC,DIO_Pin0);
Btn_Init(DIO_GroupD,DIO_Pin2,Button_InternalPullUp);
EXTI_Init(EXTI0,EXTI_Rising);
GIE_Enable();
while(1)
 {
    Led_Toggle(DIO_GroupA,DIO_Pin0);
    _delay_ms(5000);
 }
}

/*EXTI0*/
void __vector_1()  
{
    Led_Toggle(DIO_GroupC,DIO_Pin0);
}