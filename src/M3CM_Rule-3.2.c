/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-3.2.c
 *
 * Rule-3.2: Line-splicing shall not be used in // comments.
 *
 * Implemented by message(s):
 *   5134   C++ style comment uses line splicing.
 *
 *
 *//* PRQA S 5134 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_0302( void )
{
    int16_t r0302_x = 1;                                              /* expect: 5134 */    // comment \
    if (bla)
    {
        r0302_x = r0302_x + 1;                     /* This is always executed */
    }
    ++r0302_x;

    return r0302_x;
}


