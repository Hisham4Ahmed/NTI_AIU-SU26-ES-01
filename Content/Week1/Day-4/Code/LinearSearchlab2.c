#include <stdio.h>
#include <stdlib.h>
// max
int main()
{
    char Number[5] = {0};
    char Index = 0 ;
    char MaxNo = 0 ;
    char MinNo = 0 ;
    char ProgramState = 0 ;
    do
    {
        system("clear");
        printf("------------------------Max/Min Checking Programmer---------------------\n");
    /*Scanning*/
    for(Index = 0 ; Index <5;Index++)
    {
        printf("Enter the Number[%d]:",Index+1);
        scanf("%hhd",&Number[Index]);
    }
    /*Scan the Input No */
    printf("--------------------------\n");
    /*Searching*/
    MinNo=Number[0];
    for(Index=0;Index<5;Index++)
    {
        if(Number[Index]>MaxNo)
        {
            MaxNo=Number[Index];
        }
        if(Number[Index]<MinNo)
        {
            MinNo=Number[Index];
        }
    }
    /*Print the Number*/
    printf("The Max Number = %d\n",MaxNo);
    printf("The Min Number = %d\n",MinNo);
    /*ProgramState*/
    printf("Enter the E to Exist other wise to cont...\n");
    scanf(" %c",&ProgramState);
    }while(ProgramState!='E');
    return 0 ;
}