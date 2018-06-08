/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-17.7.c
 *
 * Rule-17.7: The value returned by a function having non-void return type shall be
 *            used
 *
 * Implemented by message(s):
 *   3200   '%s' returns a value which is not being used.
 *
 *
 *//* PRQA S 3200 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

static int16_t rule_1707a( void )
{
  return 1;
}

extern int16_t rule_1707( void )
{
  int16_t ret_1707;

  rule_1707a();                                                       /* expect:  3200 */

  ret_1707 = rule_1707a();                                            /* expect: !3200 */

  return 1;
}


