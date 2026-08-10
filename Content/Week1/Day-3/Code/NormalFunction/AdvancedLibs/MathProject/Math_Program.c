/*Math.c*/
#include <stdio.h>
#include "Math_Interface.h"

//%d -> in scaf open buffer size   = 4 
//%hd -> in scaf open buffer size  = 2
//%hhd -> in scaf open buffer size = 1 
//%ld -> in scaf open buffer size  = 2
//%lld -> in scaf open buffer size = 12 


// 1- Scan Number 
//     1- Char 
//     2- int 
//     3- float 
//     4- double 
char    Math_Scan1CharNumber()
{
    char EnteredNumber = 0;
    scanf("%hhd",&EnteredNumber);
    return EnteredNumber;
}
int     Math_Scan1IntNumber();
float   Math_Scan1floatNumber();
double  Math_Scan1doubleNumber();


// 2- Display Number 
//     1- Char 
//     2- int 
//     3- float 
//     4- double 

void    Math_Display1CharNumber(char Number)
{
    printf("%d\n",Number);
}
void    Math_Display1IntNumber(int Number);
void    Math_Display1floatNumber(float Number);
void    Math_Display1doubleNumber(double Number);