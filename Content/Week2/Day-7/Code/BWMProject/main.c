#include <stdio.h>
#include <stdint.h>
#include "Driver/Config.h"
#include "Driver/Private.h"
#include "Driver/Private.h"
#include "Driver/Private.h"
#include "Driver/Private.h"


int main()
{
     
    #if CarVersion==MiddleEastVersion
        #define MaxSpeed     200 
        uint8_t CurrentSpeed = 120 ;
    #endif 
    #if CarVersion==EuropVersion
        #define MaxSpedd  400 
        uint16_t CurrentSpeed=200; 
    #endif 
}