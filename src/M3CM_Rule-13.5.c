/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-13.5.c
 *
 * Rule-13.5: The right hand operand of a logical && or || operator shall not
 *            contain persistent side effects
 *
 * Implemented by message(s):
 *   3415   Right hand operand of '&&' or '||' is an expression with
 *          possible side effects.
 *
 *
 *//* PRQA S 3415 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1305( void )
{
   int16_t r1305_a;
   int16_t r1305_b;

   if ( ( r1305_a > 1 ) && ( r1305_b++ < 0 ) )                        /* expect: 3415 */
   {
   }

   return 1;
}


