/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-7.2.c
 *
 * Rule-7.2: A "u" or "U" suffix shall be applied to all integer constants that are
 *           represented in an unsigned type
 *
 * Implemented by message(s):
 *   1281   Integer literal constant is of an unsigned type but does not
 *          include a "U" suffix.
 *
 *
 *//* PRQA S 1281 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0702( void )
{
   0x10000;
   0x7FFFFFFF;
   0x80000000;                                                        /* expect: 1281 */
   0xFFFFFFFF;                                                        /* expect: 1281 */

   return 0;
}


