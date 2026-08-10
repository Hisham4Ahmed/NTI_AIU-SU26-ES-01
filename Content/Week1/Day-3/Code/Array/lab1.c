#include <stdio.h>
#include <stdlib.h>
void DisplayArray(char arr[],char size);
char arr3 [4] ; // global ----> Decleration
char arr4 [3] = {3,4,5}; // global ----> Definitions
int main()
{
    char count = 0 ;
    char arr1[4] = {0};// local - Definitions
    char arr2[3] ; // local Decleration
    /*arr1*/
    printf("EnterNumber_arr1:");
    scanf("%d",&arr1[0]);
    scanf("%d",&arr1[1]);
    scanf("%d",&arr1[2]);
    scanf("%d",&arr1[3]);
    /*arr2*/
    for(count=0;count<3;count++)
    {
        printf("EnterNumber_arr2:");
        scanf("%d",&arr2[count]);
    }

}