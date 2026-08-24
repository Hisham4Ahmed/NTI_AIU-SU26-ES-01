#include "Segment_Interface.h"

void SSD_Init(uint8_t SSDGroup)
{
    /* ASSUMPTION: DIO_DirectionSelectforGroup(Group,Direction) and
     * DIO_Outputfor8Pins exist in your DIO_Interface.h as the whole-port
     * counterparts of DIO_DirectionSelectforPin / DIO_Outputfor1Pin.
     */
    DIO_DirectionSelectforGroup(SSDGroup, DIO_Outputfor8Pins);
}

void SSD_DisplayNumber(uint8_t SSDGroup, uint8_t SSDType, uint8_t Number)
{
    uint8_t LocalPattern;

    if (Number <= 9U)
    {
        LocalPattern = SSD_NumberPatterns[Number];

        if (SSDType == SSD_Anode)
        {
            /* Common-Anode: segments are active LOW -> invert the pattern */
            LocalPattern = (uint8_t)(~LocalPattern);
        }
        else
        {
            /* Common-Cathode: segments are active HIGH, pattern used as-is */
        }

        /* ASSUMPTION: DIO_WriteGroup(Group,Value) exists in your
         * DIO_Interface.h as the whole-port counterpart of DIO_WritePin.
         */
        DIO_WriteGroup(SSDGroup, LocalPattern);
    }
    else
    {
        /* Invalid digit (>9): no action (defensive branch) */
    }
}

void SSD_Off(uint8_t SSDGroup, uint8_t SSDType)
{
    if (SSDType == SSD_Anode)
    {
        DIO_WriteGroup(SSDGroup, 0xFFU); /* all segments off (active LOW)  */
    }
    else
    {
        DIO_WriteGroup(SSDGroup, 0x00U); /* all segments off (active HIGH) */
    }
}
