#include "Hal/LCD/LCD_Interface.h"
// #include "Common/Definiton.h"
#include <avr/io.h>
void main()
{
DDRA = 30;
 LCD_Init();
 LCD_MoveTo(Lcd_Line1,0);
 LCD_WriteNumber(123);


 while(1);
}