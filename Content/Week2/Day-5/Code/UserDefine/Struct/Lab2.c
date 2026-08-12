

#include<stdint.h>
typedef struct CalcOperation
{
    uint8_t Sum ; 
    uint8_t Sub ; 
    uint8_t Muti ; 
    float Devision ; 
}Calc_t;


Calc_t Calc(uint8_t No1 , uint8_t No2)
{
    Calc_t Temp = {0};
    Temp.Sum = No1+No2;
}