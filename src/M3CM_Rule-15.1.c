/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-15.1.c
 *
 * Rule-15.1: The goto statement should not be used
 *
 * Implemented by message(s):
 *   2001   A 'goto' statement has been used.
 *
 *
 *//* PRQA S 2001 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1501( void )
{
   goto rule_1501_label;                                              /* expect: 2001 */

rule_1501_label:

   return 1;
}


