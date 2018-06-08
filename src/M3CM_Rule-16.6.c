/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-16.6.c
 *
 * Rule-16.6: Every switch statement shall have at least two switch-clauses
 *
 * Implemented by message(s):
 *   3315   This 'switch' statement is redundant.
 *
 *
 *//* PRQA S 3315 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

int16_t s16a_1606;
int16_t s16b_1606;
int16_t s16c_1606;
int16_t s16d_1606;

extern int16_t rule_1606( void )
{
   int16_t ret_1606;

   switch ( s16a_1606 )
   {
   default: /* Non-compliant */
      ret_1606 = 1;
      break;
   }                                                                  /* expect:  3315 */

   switch ( s16b_1606 )
   {
   case 1: /* Compliant */
      ret_1606 = 1;
      break;
   }                                                                  /* expect: !3315 */

   switch ( s16c_1606 )
   {
   case 1:
   default: /* Non-compliant */
      ret_1606 = 1;
      break;
   }                                                                  /* expect:  3315 */

   switch ( s16d_1606 )
   {
   case 1:
      ret_1606 = 1;
      break;
   default: /* Compliant -separate paths */
      ret_1606 = 2;
      break;
   }                                                                  /* expect: !3315 */

   return ret_1606;
}


