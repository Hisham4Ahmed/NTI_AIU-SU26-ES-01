#include <stdint.h>
#include <stdio.h>

void ScanNo(uint32_t * No);
void DisplayNo(uint32_t No);
void swap(uint32_t *x, uint32_t *y);
void ScanArray(uint32_t *Ptr , uint32_t Size);
void Calc(uint32_t x , uint32_t y , uint32_t*SUM,uint32_t*SUB,uint32_t*Multi,float*Devision);

int main()
{
    // Address of TempSensor Reading is 0x50 ; 
    // Compiler any number -> Value 
    // to make compile see this number as address must be casting 

    // volatile uint32_t * TempSensor = (volatile uint32_t*)0x50 ; 

    uint8_t*Ptr1 = (void*)0; 
    uint8_t*Ptr2 = NULL ;
    // if(*TempSensor)
    // // Null Pointer  
    //     -> it's zero have casting to void pointer 
        //    -> NULL-> (void*)0;

    // Walid Pointer  
    uint8_t *Ptr ; 
    *Ptr = 40;
    // -> to Solve this walid Pointer Must be not Declaration 
    // Definition By Null 

}


void ScanNo(uint32_t * No)
{
    scanf("%d",No);
}
void DisplayNo(uint32_t No)
{
    printf("%d\n",No);
}
void swap(uint32_t *x, uint32_t *y)
{
    // int Temp = *x ;
    // *x = *y;
    // *y=Temp;
    /////Way2
    // *x = *x+*y;
    // *y = *x-*y;
    // *x = *x-*y;
    //Way3
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
}
void ScanArray(uint32_t *Ptr , uint32_t Size)
{
    uint32_t Index = 0 ; 
    for(Index=0;Index<Size;Index)
    {
        printf("Enter the Arr[Count]:",Index+1);
        scanf("%d",&Ptr[Index]);
        scanf("%d",(Ptr+Index));
    }
}
void Calc(uint32_t x , uint32_t y , uint32_t*SUM,uint32_t*SUB,uint32_t*Multi,float*Devision)
{
    *SUM = x+y;
    *SUB = x-y;
    *Multi = x*y;
    *Devision = x/(float)y;


}
