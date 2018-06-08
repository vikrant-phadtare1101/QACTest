/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-22.7.c
 *
 * Rule-22.7: The macro EOF shall on ly be compared with the unmodified return
 *            value from any Standard Library function capable of returning EOF
 *
 * Implemented by message(s):
 *   2671   Definite: The value being compared with macro EOF does not
 *          originate from an EOF returning function.
 *
 *   2676   Definite: The value originating from an EOF returning function
 *          was modified before being compared with macro EOF.
 *
 *
 *//* PRQA S 2671,2676 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdio.h>

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2207(void)
{
  int16_t i = 5;
  i == EOF;                                                           /* expect: 2671 */

  i = getchar();
  i++;
  i == EOF;                                                           /* expect: 2676 */

  return 1;
}


