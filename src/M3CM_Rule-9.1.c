/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-9.1.c
 *
 * Rule-9.1: The value of an object with automatic storage duration shall not be
 *           read before it has been set
 *
 * Implemented by message(s):
 *   2883   This 'goto' statement will always bypass the initialization of
 *          local variables.
 *
 *   2961   Definite: Using value of uninitialized automatic object '%s'.
 *
 *   2962   Apparent: Using value of uninitialized automatic object '%s'.
 *
 *   2971   Definite: Passing address of uninitialized object '%s' to a
 *          function parameter declared as a pointer to const.
 *
 *   2972   Apparent: Passing address of uninitialized object '%s' to a
 *          function parameter declared as a pointer to const.
 *
 *
 *//* PRQA S 2883,2961,2962,2971,2972 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0901a( const int16_t *p ){return *p;}


extern int16_t rule_0901( void )
{
   int16_t ax;                                                        /* expect: 1594 */
   int16_t bx;                                                        /* expect: 1594 */
   int16_t cx;
   int16_t dx;                                                        /* expect: 1594 */
   int16_t ex;                                                        /* expect: 1594 */
   int16_t rx;                                                        /* expect: 1594 */
   int16_t r0901_s16a;                                                /* expect: 1594 */

   goto JUMP_OVER_INIT;                                               /* expect: 2883 */
   int16_t r0901_ux = 0;                                              /* expect: 1594 */

JUMP_OVER_INIT:   ++rx;                                               /* expect: 2961 1576 */

   rx = ax;                                                           /* expect: 2961 */

   if ( r0901_s16a > 0 )                                              /* expect: 2961 */
   {
       bx = r0901_s16a;                                               /* expect: 1577 1586 */
       ex = r0901_s16a;                                               /* expect: 1577 1586 */
   }

   rx = rx + bx;                                                      /* expect: 2962 */

   cx = rule_0901a( &dx );                                            /* expect: 2971 */

   dx = 1;

   cx += rule_0901a( &ex );                                           /* expect: 2972 */

   return rx + cx + dx;
}


