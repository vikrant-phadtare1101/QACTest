/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-7.3.c
 *
 * Rule-7.3: The lowercase character "l" shall not be used in a literal suffix
 *
 * Implemented by message(s):
 *   1280   A lowercase letter L (l) has been used in an integer or
 *          floating suffix.
 *
 *
 *//* PRQA S 1280 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0703( void )
{
   uint32_t   r0703_u32a  = 123lu;                                    /* expect: 1280 */
   float128_t r0703_f128a = 12.34l;                                   /* expect: 1280 */

   return 0;
}


