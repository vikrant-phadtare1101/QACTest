/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-6.2.c
 *
 * Rule-6.2: Single-bit named bit fields shall not be of a signed type
 *
 * Implemented by message(s):
 *   3660   Named bit-field consisting of a single bit declared with a
 *          signed type.
 *
 *
 *//* PRQA S 3660 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"


struct r0602_T01 { signed char         bsc: 1; };                     /* expect: 3660 */
struct r0602_T02 { unsigned char       buc: 1; };

extern int16_t rule_0602( void )
{
    struct r0602_T01 t01;
    struct r0602_T02 t02;

    return 0;
}


