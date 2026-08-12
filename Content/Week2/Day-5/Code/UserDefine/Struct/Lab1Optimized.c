//  c code that defines a structure for employees that contains his
//  salary, bonus and deductions. The program shall ask the user to enter
//  these information for three employees ( Ahmed, Waleed and Amr).
//  Then the program will print the total value shall be supplied by
//  finance team.

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#pragma pack (2)
typedef struct employees
{
    uint32_t Salary;
    uint32_t Bonus;
    uint32_t Deduction;
}Employee_t;

extern Employee_t ScanInfo();
extern void DisplayInfo(Employee_t E);
int main()
{
    Employee_t GestellEmployee[5] = {0};
    uint8_t Index = 0 ;
    uint8_t ProgramState=0;
    uint32_t Total = 0 ;
    do
    {
        system("clear");
        printf("Please Enter Information for this Empolyees\n");
        Total = 0 ;
        for(Index=0;Index<5;Index++)
        {
            printf("Enter Empolyee[%d] Information\n",Index+1);
            GestellEmployee[Index]=ScanInfo();
            Total+=(GestellEmployee[Index].Salary+GestellEmployee[Index].Bonus-GestellEmployee[Index].Deduction);
        }
        printf("Total=%d",Total);
        printf("if you Want to Exist press E other wise to cont..");
        scanf(" %c",&ProgramState);
    }while(ProgramState!='E'&&ProgramState!='e');
}

void DisplayInfo(Employee_t E)
{
    printf("Salary=%d\n",E.Salary);
    printf("Bonus=%d\n",E.Bonus);
    printf("Deduction=%d\n",E.Deduction);
}
Employee_t ScanInfo()
{
    Employee_t E = {0,0,0};
    printf("Enter the Salary:");
    scanf("%d",E.Salary);
    printf("Enter the Bonus:");
    scanf("%d",E.Bonus);
    printf("Enter the Deduction:");
    scanf("%d",E.Deduction);
}