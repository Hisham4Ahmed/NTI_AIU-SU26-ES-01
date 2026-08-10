/*Main.c */
#include "Math_Interface.h"
#include <stdio.h>

int main()
{
    printf("Enter the Degree:");
    char Number = Math_Scan1CharNumber();
    Math_Display1CharNumber(Number);
    return 0;
}