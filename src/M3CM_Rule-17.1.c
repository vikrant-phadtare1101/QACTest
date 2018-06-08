/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-17.1.c
 *
 * Rule-17.1: The features of <stdarg.h> shall not be used
 *
 * Implemented by message(s):
 *   5130   Use of standard header file <stdarg.h>.
 *
 *   1337   Function defined with a variable number of parameters.
 *
 *
 *//* PRQA S 5130,1337 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdarg.h>                                                   /* expect:  5130 */
#include "misra.h"
#include "m3cmex.h"

static void rule_1701a (uint16_t count_1701, ...)                     /* expect:  1337 */
{
  va_list args_1701;
  va_start (args_1701, count_1701);
  for (int i_1701 = 0; i_1701 < count_1701; ++ i_1701)
  {
    double num_1701 = va_arg (args_1701, double);
  }
  va_end (args_1701);
}

extern int16_t rule_1701 (void)                                       /* expect: !1337 */
{
  rule_1701a (5, 1.1, 1.2, 1.3, 1.4, 1.5);
  return 1;
}


