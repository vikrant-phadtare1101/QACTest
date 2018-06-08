/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-20.9.c
 *
 * Rule-20.9: All identifiers used in the controlling expression of #if or #elif
 *            preprocessing directives shall be #define'd before evaluation
 *
 * Implemented by message(s):
 *   3332   The macro '%s' used in this '#if' or '#elif' expression is not
 *          defined.
 *
 *
 *//* PRQA S 3332 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

#if X < 0                                                             /* expect:  3332 */
#define M 1
#endif

#define X 1

#if X < 0                                                             /* expect: !3332 */
#define N 1
#endif

extern int16_t rule_2009 (void)
{
  return 1;
}


