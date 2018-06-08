/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.12.c
 *
 * Rule-21.12: The exception handling features of <fenv.h> should not be used
 *
 * Implemented by message(s):
 *   5136   Use of exception handling identifier: feclearexcept,
 *          fegetexceptflag, feraiseexcept, fesetexceptflag or
 *          fetestexcept.
 *
 *
 *//* PRQA S 5136 -- *//*
 * <<<------------------------------------------------------------ */


#include <fenv.h>

#include "misra.h"
#include "m3cmex.h"

int16_t s16a_2112;
float32_t f32a_2112;
float32_t f32b_2112;

extern int16_t rule_2112 (void)
{
  fexcept_t flags_2112;
  fegetexceptflag (flags_2112, FE_DIVBYZERO | FE_OVERFLOW);           /* expect: 5136,5136,    1594,1753 */

  float32_t f_2112;
  s16a_2112 = feclearexcept (FE_DIVBYZERO);                           /* expect: 5136,5136,    1594,1753 */
  f_2112 = f32a_2112 / f32b_2112;
  if (fetestexcept (FE_DIVBYZERO) != 0)                               /* expect: 5136,5136,    1594,1753 */
  {
    feraiseexcept (FE_OVERFLOW);                                      /* expect: 5136,5136,    1594,1753 */
  }
  else
  {
     f_2112 = f32a_2112 * f32b_2112;
  }
  if (f_2112 > f32a_2112)
  {
     if (!fetestexcept (FE_OVERFLOW) != 0)                            /* expect: 5136 */
     {
     }
  }

  fesetexceptflag (flags_2112, FE_DIVBYZERO | FE_OVERFLOW);           /* expect: 5136,5136,    1594,1753 */

  return 1;
}


