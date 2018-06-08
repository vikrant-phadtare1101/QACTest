/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-13.3.c
 *
 * Rule-13.3: A full expression containing an increment (++) or decrement (--)
 *            operator should have no other potential side effects other than
 *            that caused by the increment or decrement operator
 *
 * Implemented by message(s):
 *   3440   Using the value resulting from a ++ or -- operation.
 *
 *
 *//* PRQA S 3440 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1303( void )
{
   int16_t x = 0;
   int16_t r;

   r = ++x;                                                           /* expect: 3440 */
   return r;
}


