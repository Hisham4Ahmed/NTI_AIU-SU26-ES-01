
// to generate the exe file from C code 
    // 1- Open terminal in the same folder contain the file.c 
    // 2- write this command 
        // gcc filename.c -o outputname.exe
// to run the exe file 
    // write this command 
        // 1- ./outputname.exe 
        // 2- outputname.exe 
#include <stdio.h>

int main()
{
    // printf("NTI Course\n");
    // //Print Some Information about you 
    //     // 1- Name 
    //     printf("Name:Hesham Ahmed Hamed\n");
    //     // 2- Age 
    //     printf("Age:30\n");
    //     // 3- Faculty 
    //     printf("Faculty:Engineering\n");
    //     // 4- Department 
    //     printf("Department:Communication&Electronics\n");
    //     // 5- level
    

    // Create New Variable to Store 300 Number 
    // char -> 1 byte -> 8bits -> max value -> 1 1 1 1 1 1 1 1 => 255
    int Number = 300 ; // Definitioan : allocate new location in Ram 

    Number = 700 ; // modify -> New Assignation 

    char No2  ; // Declartion -> allocate new location in Ram  without any init value 
//  LHS Must be Location in memory 
//  LHS = RHS
    No2 = 20 ; 
    // 20=20; -> error Lvalue 

    return 0;
}