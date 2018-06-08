/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-13.4.c
 *
 * Rule-13.4: The result of an assignment operator should not be used
 *
 * Implemented by message(s):
 *   3226   The result of an assignment is being used in an arithmetic
 *          operation or another assigning operation.
 *
 *   3326   The result of an assignment is being used in a logical
 *          operation.
 *
 *
 *//* PRQA S 3226,3326 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdbool.h>
#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1304( void )
{
    uint16_t r1304_u16a;
    uint16_t r1304_u16b;
    uint16_t r1304_u16c;
    uint32_t r1304_uia;

    int16_t buf[10] = {0};

    buf[r1304_u16a] = buf[r1304_u16b = r1304_u16c];                   /* expect: 3226 */

    if ( ( r1304_uia = 5u ) != 0u)                                    /* expect: 3326 */
    {
    }

    return 1;
}


