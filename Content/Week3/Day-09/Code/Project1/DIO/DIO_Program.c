#include "DIO_Interface.h"

/*API's*/
// Direction (input 0 Clear / output 1 Set  ) DDRA
void DIO_DirectionSelectforPin(const uint8_t GroupName , const uint8_t PinNo,const uint8_t DirectionState)
{
    if(GroupName>=DIO_GroupA&&GroupName<=DIO_GroupD)
    {
        if(PinNo>=DIO_Pin0&&PinNo<=DIO_Pin7)
        {
            if(DirectionState==DIO_Outputfor1Pin)
            {
                // SetBit(DDR)
                switch(GroupName)
                {
                    case DIO_GroupA: SetBit(DDRA_Reg,PinNo);break;
                    case DIO_GroupB: SetBit(DDRB_Reg,PinNo);break;
                    case DIO_GroupC: SetBit(DDRC_Reg,PinNo);break;
                    case DIO_GroupD: SetBit(DDRD_Reg,PinNo);break;
                    default:break;
                }
            }
            else if (DirectionState==DIO_Inputfor1Pin)
            {
                //ClearBit(DDR)
                switch(GroupName)
                {
                    case DIO_GroupA: ClearBit(DDRA_Reg,PinNo);break;
                    case DIO_GroupB: ClearBit(DDRB_Reg,PinNo);break;
                    case DIO_GroupC: ClearBit(DDRC_Reg,PinNo);break;
                    case DIO_GroupD: ClearBit(DDRD_Reg,PinNo);break;
                    default:break;
                }
            }
            else
            {
                //Error
            }
        }
        else
        {
            //Error
        }
    }
    else
    {
        // Error
    }
}
void DIO_DirectionSelectforGroup(const uint8_t GroupName,  const uint8_t DirectionState)
{

}

// Output Value (low 0  Clear / High 1 Set  ) PORT
void DIO_WritePin(const uint8_t GroupName , const uint8_t PinNo,const uint8_t OutputValue)
{
    if(GroupName>=DIO_GroupA&&GroupName<=DIO_GroupD)
    {
        if(PinNo>=DIO_Pin0&&PinNo<=DIO_Pin7)
        {   
            if(OutputValue==DIO_Highfor1Pin)
            {
                // Set(PORT)
                switch(GroupName)
                {
                    case DIO_GroupA:SetBit(PORTA_Reg,PinNo);break;
                    case DIO_GroupB:SetBit(PORTB_Reg,PinNo);break;
                    case DIO_GroupC:SetBit(PORTC_Reg,PinNo);break;
                    case DIO_GroupD:SetBit(PORTD_Reg,PinNo);break;
                    default:break;
                }
            }
            else if(OutputValue==DIO_Lowfor1Pin)
            {
                // clear/PORT
                switch(GroupName)
                {
                    case DIO_GroupA:ClearBit(PORTA_Reg,PinNo);break;
                    case DIO_GroupB:ClearBit(PORTB_Reg,PinNo);break;
                    case DIO_GroupC:ClearBit(PORTC_Reg,PinNo);break;
                    case DIO_GroupD:ClearBit(PORTD_Reg,PinNo);break;
                    default:break;
                }  
            }
            else
            {

            }
        }
        else
        {

        }
    }
    else
    {

    }
}
void DIO_WriteGroup(const uint8_t GroupName,  const uint8_t OutputValue)
{

}

// InputState 
void DIO_ReadPin(const uint8_t GroupName , const uint8_t PinNo, uint8_t *InputState)
{
    
}
// uint8_t DIO_ReadPin(const uint8_t GroupName , const uint8_t PinNo);
void DIO_ReadGroup(const uint8_t GroupName , uint8_t *InputState)
{
    
}
// uint8_t DIO_ReadGroup(const uint8_t GroupName );


// Toggle 
void DIO_TogglePin(const uint8_t GroupName , const uint8_t PinNo)
{
    
}
void DIO_ToggleGroup(const uint8_t GroupName )
{
    
}