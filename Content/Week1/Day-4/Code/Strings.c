#include <stdio.h>


// '\0'
int main()
{
    char Name[20]={0};
    printf("Enter you Name:");
    scanf("%99[^\n]",Name);

    printf("Welcome Mr.%S\n",Name);
}


void ScanArray(char arr[],char size);
void DisplayArray(char arr[],char size);

char LinearSearch(char arr[],char size,char SearchValue);// No of repeate 

char BinarySearch(char arr[],char size,char SearchValue);// Index 


void BubbleSort(char arr[],char size,char OrderType);// 

