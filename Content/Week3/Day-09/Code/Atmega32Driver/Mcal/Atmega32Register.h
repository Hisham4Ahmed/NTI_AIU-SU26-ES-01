/**
 * @file Atmega32Register.h
 * @author Hesham Ahmed (Hisham4Ahmed@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-08-20
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#ifndef _MCAL_ATMEGA32REGISTER_H
#define _MCAL_ATMEGA32REGISTER_H
#include <stdint.h>
/*IO- Memory Map Address*/

#define SREG_Reg *((volatile uint8_t*)0x5F)
/*Stack Pointer */
#define SPH_Reg *((volatile uint8_t*)0x5E)
#define SPL_Reg *((volatile uint8_t*)0x5D)
#define SP_Reg  *((volatile uint16_t*)0x5D)


#endif /*_MCAL_ATMEGA32REGISTER_H*/