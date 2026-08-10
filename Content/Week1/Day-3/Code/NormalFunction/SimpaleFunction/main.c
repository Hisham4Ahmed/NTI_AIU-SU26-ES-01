#include <stdio.h>

/*Scan From User Number*/
int AddTwoDecimalNumber(int No1,int No2);
int SubTwoDecimalNumber(int No1,int No2);
int MultiTwoDecimalNumber(int No1,int No2);
float DivisionTwoDecimalNumber(int No1,int No2);
int ReminderTwoDecimalNumber(int No1,int No2);
int ScanDecimalNumber(void);
char ScanCharacter(void);

void DisplayDecimalNumber(int Number);



// write C Program scan two number and Operation type 
// and print the result by the function 

int main()
{
    // int Temp = 0 ;
    // Temp = ScanDecimalNumber();
    // DisplayDecimalNumber(Temp);
    // int No1 = 0 ;
    // int No2 = 0 ;
    // char Sum = 0 ;
    // No1=ScanDecimalNumber();
    // No2=ScanDecimalNumber();
    // Sum=AddTwoDecimalNumber(No1,No2);
    // DisplayDecimalNumber(Sum);
    int No1 = 0 ;
    int No2 = 0 ;
    char Operation = 0 ;
    ScanDecimalNumber();
    No1 =ScanDecimalNumber();
    // Operation=DisplayDecimalNumber(No1);
    switch (Operation)
    {
    case '+':
        /* code */
        DisplayDecimalNumber(AddTwoDecimalNumber(No1,No2));
        break;
    case '-':
         DisplayDecimalNumber(SubTwoDecimalNumber(No1,No2));
    default:
        break;
    } 
    return 0;
}

int ScanDecimalNumber(void)
{
    int EnteredNumber = 0 ;
    printf("Enter the Number:");
    scanf("%d",&EnteredNumber);
    return EnteredNumber ;
}
char ScanCharacter(void)
{
    char EnteredSymoble = 0 ;
    printf("Enter the Symoble:");
    scanf(" %c",&EnteredSymoble);
    return EnteredSymoble;
}

void DisplayDecimalNumber(int Number)
{
    printf("Number=%d\n",Number);
}
int AddTwoDecimalNumber(int No1,int No2)
{
    return No1+No2 ; 
}
int SubTwoDecimalNumber(int No1,int No2)
{
    return No1-No2;
}
int MultiTwoDecimalNumber(int No1,int No2)
{
    return No1*No2;
}
float DivisionTwoDecimalNumber(int No1,int No2)
{
    return (float)No1/No2;
}
int ReminderTwoDecimalNumber(int No1,int No2)
{
    return No1%No2;
}