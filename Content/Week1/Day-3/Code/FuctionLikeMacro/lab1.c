#include <stdio.h>


// FunctionLikeMacro -> Preprocessor 
inline int calc_ECU_Speed(int distance , int time )
{
    if(time==0){return 0;}
    return distance/time ;
}

#define Summation(x,y)     x+y
#define WelcomeMessage(  ) printf("NTI----AIU\n");\
                           printf("EmbeddedSystemDiploma\n");\
                           printf("Gestell\n")
// No1 = 
int main()
{
    int c_distance =100 ;
    int c_time = 2;
    int speed = calc_ECU_Speed(c_distance,c_time);
    /*Compiler
    int c_distance =100 ;
    int c_time = 2;
    int speed ;
    if(c_time==0)
    {
        speed = 0; 
    }
    else 
    {
        speed = c_distance / c_time
    }
    
    
    
    */    

    // int No1 = 7 ;
    // int No2 = 10 ;
    // int R = 0 ; 
    // WelcomeMessage();
    // R=Summation(7,10); // x =No1   y = No2 
        // R=7+10
}

// Tool Chain 

// file.c  ----->preprocessor------>file.i  
