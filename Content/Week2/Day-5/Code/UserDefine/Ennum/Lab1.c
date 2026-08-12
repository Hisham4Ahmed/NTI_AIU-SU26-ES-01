#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef enum 
{
    RedLight,
    YellowLight,
    GreenLight,
}TrafficLight_t;

TrafficLight_t CurrentLight = RedLight;
    // Size as same int Size 
    
uint8_t Light = RedLight; 
if(Light == RedLight)