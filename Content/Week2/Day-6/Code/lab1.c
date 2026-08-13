#include <stdio.h>
#include <stdint.h>


int main()
{
    uint8_t x = 30 ;
    uint8_t a = 40 ; 
    uint8_t b = 50 ; 
    uint8_t c = 60 ;  
    uint8_t * Ptr1 = &x ; 
    
    uint16_t y = 40 ; 
    uint16_t * Ptr2 ;
    Ptr2 = &y;
    uint8_t z = 0 ; 
    // uint32_t *Ptr3 = &z;
    printf("x Value=%hhd\n",x); // 30
    printf("y Value=%hd\n",y); // 40

    printf("x Value By *Ptr=%hhd\n",*Ptr1);// 30
    printf("y Value by *Ptr=%hd\n",*Ptr2);//40
// ----------------------------------------------------
    printf("x Address=%p\n",&x);
    printf("x Address by ptr=%p\n",Ptr1);
    printf("ptr Address = %p\n",&Ptr1);
// ----------------------------------------------------
    printf("Operation=%d",*(Ptr1+3));
    // printf("ptr Address = %p\n",&Ptr1);
    // x      value of x 
    // &x     Address of x 
    // *ptr   value of x  
    // ptr    Address of x 
    // &ptr   Address of Ptr 

    // Ptr1 = 0x00 
    // Ptr1+3 => 0x03
    // *(Ptr1+3) => Value of 0x03
    // *(Ptr1+3) -> 

}