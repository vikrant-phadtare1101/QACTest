/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-18.8.c
 *
 * Rule-18.8: Variable-length array types shall not be used
 *
 * Implemented by message(s):
 *   1051   [C99] A variable length array has been declared.
 *
 *   1052   [C99] A variable length array of unspecified size has been
 *          declared.
 *
 *
 *//* PRQA S 1051,1052 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

static void rule_1808a(int16_t buf[*])                                /* expect: 1052 */
{
  buf[0] = 0;
}

extern int16_t rule_1808( void )
{
  int16_t ret_1808;

  uint16_t size_1808 = 5;

  int16_t vla1_1808[size_1808];                                       /* expect: 1051 */
  rule_1808a (vla1_1808);

  ret_1808 = sizeof (int16_t[size_1808]);                             /* expect: 1051 */
  typedef uint16_t vector_1808 [size_1808];                           /* expect: 1051 */

  return ret_1808;
}


