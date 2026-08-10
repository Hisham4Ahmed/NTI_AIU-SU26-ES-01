// Write c code Scan from user 5number and store 
// in array and display the no of odd and no of even for this array


#include <stdio.h>
#define ReadBit(Reg,BitNo)    ((Reg>>BitNo)&1)
   
int main()
{
    int Number[6]={0};
    char counter  =0 ; 
    char NoOfOddCount = 0 ;
    char NoOfEvenCount = 0 ;
    // char Result = 0;
    for(counter=0;counter<6;counter++)
    {
        printf("Enter the your Number[%d]",counter+1);
        scanf("%d",&Number[counter]);
        /*----------------------------------*/
        // if(ReadBit(Number[counter],0)==0)
        if((Number[counter]%2)==0)
        {
            NoOfEvenCount++;
        }
        else if((Number[counter]%2)==1)
        {
            NoOfOddCount++;
        }
        else
        {
            /*No Action*/

        }
    }
    printf("Number of Even Count = %d\n",NoOfEvenCount);
    printf("Number of Odd Count = %d\n",NoOfOddCount);
}