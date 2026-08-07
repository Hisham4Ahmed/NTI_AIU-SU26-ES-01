#include <stdio.h>

// 
int main()
{


    // write c code to check the enter number are even or odd by two way 
    char Number = 0 ;
    printf("Enter the Number for checking: ");
    scanf("%d",&Number);
    if((Number&1)==1)
    {
        printf("Number is Odd\n");
    }
    else if ((Number&1)==0)
    {
        printf("Number is even\n");
    }
    // unsigned char Degree = 0 ;
    // printf("Enter the Your Degree:");
    // scanf("%d",&Degree);
    // if(Degree>=0 && Degree<50)
    // {
    //     printf("Fail\n");
    // }
    // else if (Degree>=50 && Degree <70)
    // {
    //     printf("Pass\n");
    // }
    // else if (Degree>=70 && Degree <80)
    // {
    //     printf("Good\n");
    // }
    // else if (Degree>=80 && Degree <90)
    // {
    //     printf("V.Good\n");
    // }
    // else if (Degree>=90 && Degree <=100)
    // {
    //     printf("Execllent");
    // }
    // else 
    // {
    //     printf("Invaild Input\n");
    // }
}