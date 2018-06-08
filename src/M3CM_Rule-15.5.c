/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-15.5.c
 *
 * Rule-15.5: A function should have a single point of exit at the end
 *
 * Implemented by message(s):
 *   2889   This function has more than one 'return' path.
 *
 *
 *//* PRQA S 2889 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

int16_t rule_1505_s16a;

extern int16_t rule_1505a( void )                                     /* expect: 2889  */
{
   if ( rule_1505_s16a > 0 )
   {
      return 0;                                                       /* expect: 1572 */
   }
   else
   {
      return 1;                                                       /* expect: 1572 */
   }
}

extern void rule_1505b( void )                                        /* expect: 2889  */
{
   if ( rule_1505_s16a > 0 )
   {
      return;                                                         /* expect: 1572 */
   }
   rule_1505_s16a = 1;
}                                                                     /* expect: 1572 */

extern int16_t rule_1505c( void )                                     /* expect: !2889 */
{
   int16_t rule_1505_r = 0;
   if ( rule_1505_s16a > 0 )
   {
      rule_1505_r = 0;
   }
   else
   {
      rule_1505_r = 1;
   }
   return rule_1505_r;
}


