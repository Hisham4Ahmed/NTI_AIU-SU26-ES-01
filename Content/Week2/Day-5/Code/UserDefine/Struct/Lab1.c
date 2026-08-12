//  c code that defines a structure for employees that contains his
//  salary, bonus and deductions. The program shall ask the user to enter
//  these information for three employees ( Ahmed, Waleed and Amr).
//  Then the program will print the total value shall be supplied by
//  finance team.

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct employees
{
    uint32_t Salary;
    uint32_t Bonus;
    uint32_t Deduction;
}Empoyess_t;


int main()
{
    Empoyess_t Ahmed = {0,0,0};
    Empoyess_t Waleed = {0,0,0};
    Empoyess_t Amr = {0,0,0};
    uint8_t ProgramState=0;
    do
    {
        system("clear");

        printf("Please Enter Information for this Empolyees\n");

        printf("Enter Ahmed Salary:\n");
        scanf("%d",&Ahmed.Salary);
        printf("Enter Ahmed Bonus:\n");
        scanf("%d",&Ahmed.Bonus);
        printf("Enter Ahmed Deduction:\n");
        scanf("%d",&Ahmed.Deduction);
        printf("----------------------------\n");
        printf("Enter Waleed Salary:\n");
        scanf("%d",&Waleed.Salary);
        printf("Enter Waleed Bonus:\n");
        scanf("%d",&Waleed.Bonus);
        printf("Enter Waleed Deduction:\n");
        scanf("%d",&Waleed.Deduction);
        printf("----------------------------\n");
        printf("Enter Amr Salary:\n");
        scanf("%d",&Amr.Salary);
        printf("Enter Amr Bonus:\n");
        scanf("%d",&Amr.Bonus);
        printf("Enter Amr Deduction:\n");
        scanf("%d",&Amr.Deduction);

        uint32_t Total = (Ahmed.Salary+Ahmed.Bonus-Ahmed.Deduction)+
                         (Waleed.Salary+Waleed.Bonus-Waleed.Deduction)+
                         (Amr.Salary+Amr.Bonus-Amr.Deduction);

        printf("Total=%d",Total);
        
            




        printf("if you Want to Exist press E other wise to cont..");
        scanf(" %c",&ProgramState);
    }while(ProgramState!='E'&&ProgramState!='e');
}