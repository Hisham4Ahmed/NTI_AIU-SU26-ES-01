
#include <stdint.h>
#include <stdio.h>

uint8_t Global=100;
static uint8_t Speed=120;
int Add(int x , int y )
{
    printf("%d\n",Speed);
    return x+y;
}