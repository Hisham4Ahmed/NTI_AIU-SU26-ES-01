
#include "Atmega32Register.h"
#include "DIO/DIO_Interface.h"
#include "BitMath.h"
#include <util/delay.h>
void main()
{
    /*Team1
        Group A 
        A0 
        A1  
        A2 
        A3 
        A4 
        output -> 5
        InputPut -> 3  
    */
    // 0 0 0 1 1 1 1 1 
    // 0 0 0 1 1 1 0 1 
    // // Update All pin of Group 
    // DDRA_Reg = 0x1f; 
    // // we need update the Pin1 as input 
    // ClearBit(DDRA_Reg,1);

    // 1- Team 1  Work on Group A 
        // Direction (10101011) all member 
        // ourput (PORTA_Reg)
        // Yasseen Ahmed ELSayed    0 bit High 
        // khaled mohamed hamdy elroumy 1 bit High
        // Soha Hossam 3 bit high 
        // Roaya Ali El sayed Ali Badran 5  High
        // Maryam Mohamed Sameh salah 7  High
    // 2- Team 2 Work on GroupB
        // Direction (10101010) all member 
        // ourput (PORTB_Reg)
        // Abdalrhman Akl    1    High
        // Abdelrahman Mohamed Elsawy 3 High
        // Abdelrhman Ahmed Elkome 5 High
        // Ahmed Mahmoud Ali Hafny 7  High
    // 3- youssef Group C  
        // Direction (00110110)
        // output 
    // 4- Team 4 group D  
        // Direction (11000011) all member 
        // Sama Mohamed Mahmoud  0 High
        // Khaled Mohamed ahmed Mohamed 1 High
        // Aseel Muhammed El Sayed 6 High
        // Mohamed sedeek  7 High



// Write a C program to toggle  a DIO pin every 1 second.
    // -> Group B , Pin 5 
    // Select Direction as Ouput -> DDR ,  1 
    // SetBit(DDRB_Reg,5);
    // while(1) //->Super Loop
    // {
    //     // Toggle Led 
    //     ToggleBit(PORTB_Reg,5);
    //     _delay_ms(1000); // Blocking waiting // forLoop empty 
    // }
    DIO_DirectionSelectforPin(DIO_GroupB,DIO_Pin0,DIO_Outputfor1Pin);
    while(1)
    {
        DIO_WritePin(DIO_GroupB,DIO_Pin0,DIO_Highfor1Pin);
        _delay_ms(1000);
        DIO_WritePin(DIO_GroupB,DIO_Pin0,DIO_Lowfor1Pin);
        _delay_ms(1000);
        
    }
    // Pin 
        // Direction : Output -> DDR -> 1 
        //     OutputValue -> High -> PORT -> 1 
        //                 -> Low  -> PORT -> 0 
        // Direction : Input -> DDR -> 0 
        //     ReadInputState-> PIN  

}