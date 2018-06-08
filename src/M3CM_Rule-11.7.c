/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-11.7.c
 *
 * Rule-11.7: A cast shall not be performed between pointer to object and a non-
 *            integer arithmetic type
 *
 * Implemented by message(s):
 *   0301   [u] Cast between a pointer to object and a floating type.
 *
 *   0328   [u] Cast between a pointer to object and an essential type
 *          other than signed/unsigned.
 *
 *
 *//* PRQA S 0301,0328 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

float32_t r1107_fta;
N1 r1107_n1;

extern int16_t rule_1107( void )
{
    (int16_t *)r1107_fta;                                             /* expect: 0301 0328 */
    (int16_t *)r1107_n1;                                              /* expect: 0328 */

    return 0;
}


