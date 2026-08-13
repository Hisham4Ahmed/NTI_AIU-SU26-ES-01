#include <stdint.h>
#include <stdio.h>

void passByValue(uint32_t x);
void passByReference(uint32_t *x);
void PassPointertoFunction(uint32_t(*PF)(uint32_t,uint32_t),uint32_t x , uint32_t y);
uint32_t Multiplay(uint32_t a , uint32_t b);
int main()
{
    // 1- Pointer to int 
        uint32_t x =10 ; 
        uint32_t *Ptr_Int ;  // Must be Definition By Null 
        Ptr_Int = &x ;
        *Ptr_Int = 20 ; 
    // 2- Pointer to Char 
        uint8_t c = 'A';
        uint8_t *ptr_Char = &c ; 
    // 3- Pointer to float 
        float f = 3.4; // 4byte 
        // uint8_t *ptr_float = &f ; // Error  inComptable Pointer
        float *ptr_float=&f;
    // 4- Pointer to double 
        double d = 9.88;
        double *ptr_double = &d ; 


    // printf("size of pointer to int = %d\n",sizeof(Ptr_Int));
    // printf("size of pointer to Char = %d\n",sizeof(ptr_Char));
    // printf("size of pointer to Char = %p\n",ptr_float);
    //-----------------------------------------
    // Relation Between Pointer and Arrary
    // uint16_t arr[5]={10,20,30,40,50};
    // uint16_t *AliasPtr = arr ;
    // printf("arr[2]=%d\n",*(arr+2)); // Value of arr[2]=> 30 
    // printf("AliasPtr[2]=%d\n",AliasPtr[2]);//Value of arr[2] => 30 
    // arr=arr+2;
    // Pointer to Array 
    // uint16_t (*PtrToArray)[5];
    // PtrToArray =  &arr ; 
    // Pointer to String 
    // uint8_t arr[]="Gestell Embedded System";
    // uint8_t *Str = arr ; 
    // printf("Full String: %s\n",Str);
    // printf("First Elemenr : %c\n",*(Str+0));
    // printf("First Elemenr : %c\n",*(Str+5));
    // Str[5]='z';
    //  printf("First Elemenr : %c\n",*(Str+5));
    //     printf("Full String: %s\n",Str);
    // //--------
    //     // uint8_t arr[]=;
    // uint8_t *Str1 = "Gestell Embedded System" ; 
    // printf("Full String: %s\n",Str1);
    // printf("First Elemenr : %c\n",*(Str1+0));
    // printf("First Elemenr : %c\n",*(Str1+5));
    // Str1[5]='z';
    // printf("First Elemenr : %c\n",*(Str1+5));
    // printf("Full String: %s\n",Str1);
    //-------------------------------------------
    // Pointer to struct
    // typedef struct 
    // {
    //     uint8_t Id;
    //     uint16_t Temp;
    //     uint16_t Speed;
    // }Sensors_t;
    
    // Sensors_t S1 = {1,40,100};
    // Sensors_t* Ptr_S1 ; //Must be Definition by Null 
    // Ptr_S1 = &S1;
    // // How to Access 
    //     printf("ID=%d\n",S1.Id); // By normal Struct 
    //     printf("ID=%d\n",Ptr_S1->Id);// By Pointer to Sturct 
    //     printf("Temp=%d\n",S1.Temp);
    //     Ptr_S1->Temp=50;
    //     printf("Temp=%d\n",S1.Temp);

    // Calling type    
        // uint32_t value = 10 ;
        // passByValue(value); // Value =10 
        // printf("Value=%d\n",value);
        // passByReference(&value); // value 100
        // printf("Value=%d\n",value);
    // Pointer to Function 
        uint32_t (*Multi_PF)(uint32_t,uint32_t)=Multiplay;
        uint32_t Result = Multi_PF(5,6);
        // printf("Result=%d\n",Result);
        PassPointertoFunction(Multi_PF,4,5);
    //-------------------------------------------//
    // 1- NULL Pointer
    // -> NULL -> (void*)0
    // any Pointer don't know the address will be point Must be Defintion by NULL 
        uint16_t *Ptr =NULL;
        if(Ptr!=NULL)
        {

        }
    // 2- walid pointer  
        // it's problem will be happen when create Pointer(Declaration) and access it before 
        // have the Available Address 
        uint16_t *WalidPtr ;
        *WalidPtr = 40;
    // 3- Dangling Pointer 
        // it's problem will be happen when you have address not accessable now 
        uint8_t *Dangling_Ptr = returnPointer();
}
uint8_t * returnPointer()
{
    uint8_t Dangling ;

    return &Dangling;
}
// 1- pass by value 
    void passByValue(uint32_t x)
    {
        x=100;
    }
// 2- pass By reference // Pass pointer to object 
    void passByReference(uint32_t *x){
        *x=100;
    }
uint32_t Multiplay(uint32_t a , uint32_t b)
{
    return a*b;
}
// pass By reference // Pass pointer to Function 
void PassPointertoFunction(uint32_t(*PF)(uint32_t,uint32_t),uint32_t x , uint32_t y)
{
    printf("Result In side funtion = %d\n",PF(x,y));
}

