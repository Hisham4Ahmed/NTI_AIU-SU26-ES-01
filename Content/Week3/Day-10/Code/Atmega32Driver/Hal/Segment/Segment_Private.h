#ifndef _SEGMENT_PRIVATE_H
#define _SEGMENT_PRIVATE_H

#include <stdint.h>

typedef enum
{
    SSD_Anode,
    SSD_Cathod,

}SSD_Type_t;

static const uint8_t SSD_NumberPatterns[10] =
{
    0x3FU, /* 0 */
    0x06U, /* 1 */
    0x5BU, /* 2 */
    0x4FU, /* 3 */
    0x66U, /* 4 */
    0x6DU, /* 5 */
    0x7DU, /* 6 */
    0x07U, /* 7 */
    0x7FU, /* 8 */
    0x6FU  /* 9 */
};

#endif
