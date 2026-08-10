#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef unsigned char u8 ;
#define Order      0
#define NotOrder   1
int main()
{
    u8 ProgramState = 0 ;
    uint8_t Number[5] = {0};
    char Index     = 0 ; 
    char Questionscount = 0;
    char ElementOrderd= 0;
    char IsOrder = Order ;
    do
    {
        system("clear");
        printf("------------------------Sorting Programmer---------------------\n");
        /*Scanning*/
        for(Index = 0 ; Index <5;Index++)
        {
            printf("Enter the Number[%d]:",Index+1);
            scanf("%hhd",&Number[Index]);
        }
        /*sorting */
        for(ElementOrderd=0;ElementOrderd<5-1;ElementOrderd++)
        {
            for(Questionscount=0;Questionscount<5-1-ElementOrderd;Questionscount++)
            {
                if(Number[Questionscount]>Number[Questionscount+1])
                {
                    Number[Questionscount]   = Number[Questionscount] + Number[Questionscount+1];
                    Number[Questionscount+1] = Number[Questionscount] - Number[Questionscount+1];
                    Number[Questionscount]   = Number[Questionscount] - Number[Questionscount+1];
                    IsOrder=NotOrder;
                }

            }
            if(IsOrder==Order)
            {
                break;
            }
        }

        /**Display */
        for(Index = 0 ; Index <5;Index++)
        {
            printf("Number[%d]:%d\n",Index+1,Number[Index]);
            // scanf("%hhd",&Number[Index]);
        }
        /*ProgramState*/
        printf("Enter the E to Exist other wise to cont...\n");
        scanf(" %c",&ProgramState);
    }while(ProgramState!='E');
}