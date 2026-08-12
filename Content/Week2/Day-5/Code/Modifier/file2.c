
#include <stdint.h>
#include <stdio.h>
#include "file1.h"
extern uint8_t Global;
extern uint8_t x ;
extern uint8_t Speed;
int main()
{
    Add(6,4);
    printf("%d\n",Global);
    // printf("%d\n",Speed);
    
    return 0;
}

