/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-19.1.c
 *
 * Rule-19.1: An object shall not be assigned or copied to an overlapping object
 *
 * Implemented by message(s):
 *   0681   [U] Assignment between two incompatible members of the same
 *          union.
 *
 *   2776   Definite: Copy between overlapping objects.
 *
 *   2777   Apparent: Copy between overlapping objects.
 *
 *
 *//* PRQA S 0681,2776,2777 -- *//*
 * <<<------------------------------------------------------------ */


#include "string.h"
#include "misra.h"
#include "m3cmex.h"

union u1_1901
{
  int16_t x;
  int32_t y;
};

union u2_1901
{
  int16_t x;
  int16_t y;
};

int16_t s16a_1901;

extern int16_t rule_1901 (void)
{
  union u1_1901 unc_1901;
  union u2_1901 uc_1901;

  unc_1901.y = 1;                                                     /* expect: 1575 */
  unc_1901.x = unc_1901.y;                                            /* expect:   681,2776 */
  uc_1901.y = 1;
  uc_1901.x = uc_1901.y;                                              /* expect: !681,!2776 */

  PC buf_1901[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";                    /* expect: 1594,1594 */

  memcpy (&buf_1901[ 10 ], &buf_1901[ 20 ], 20U);                     /* expect:  2776 */

  uint16_t size_1901;

  size_1901 = 5;
  memcpy (&buf_1901[ 10 ], &buf_1901[ 20 ], size_1901);               /* expect: !2776 */

  if (s16a_1901 == 0)
  {
    size_1901 = 30;                                                   /* expect: 1575 */
  }
  memcpy (&buf_1901[ 10 ], &buf_1901[ 20 ], size_1901);               /* expect:  2777,    1574 */

  memmove (&buf_1901[ 10 ], &buf_1901[ 20 ], 20U);                    /* expect: !2776 */

  if (s16a_1901 == 1)
  {
    size_1901 = 30;
  }
  memmove (&buf_1901[ 10 ], &buf_1901[ 20 ], size_1901);              /* expect: !2777 */

  return 1;
}


