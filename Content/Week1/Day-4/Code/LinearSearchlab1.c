#include <stdio.h>

int main()
{
    char InputRepeatedNo = 0 ;
    char Number[5] = {0};
    char NoOfRepeated = 0 ;
    char Index = 0 ;
    /*Scanning*/
    for(Index = 0 ; Index <5;Index++)
    {
        printf("Enter the Number[%d]:",Index+1);
        scanf("%hhd",&Number[Index]);
    }
    /*Scan the Input No */
    printf("--------------------------\n");
    printf("Enter the Number Check Repeated:\n");
    scanf("%hhd",&InputRepeatedNo);
    /*Searching*/
    for(Index=0;Index<5;Index++)
    {
        if(Number[Index]==InputRepeatedNo)
        {
            NoOfRepeated++;
        }
    }
    /*Print the Number*/
    if(NoOfRepeated>0)
    {
        printf("The Number %d Repeated %d time\n",InputRepeatedNo,NoOfRepeated);
    }
    else 
    {
        printf("The Number %d Not exist in Array \n",InputRepeatedNo,NoOfRepeated);
    }
}