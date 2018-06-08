/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-22.2.c
 *
 * Rule-22.2: A block of memory shall only be freed if it was allocated by means of
 *            a Standard Library function
 *
 * Implemented by message(s):
 *   2721   Definite: Deallocation of non dynamic memory.
 *
 *   2722   Apparent: Deallocation of non dynamic memory.
 *
 *
 *//* PRQA S 2721,2722 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdlib.h>
#include "misra.h"
#include "m3cmex.h"

uint16_t u16a_2202;
uint16_t u16b_2202;
uint16_t a16_2202[5];

extern int16_t rule_2202 (void)
{
  uint16_t * m1_2202 = &a16_2202;
  free (m1_2202);                                                     /* expect: 2721 */

  uint16_t * m2_2202;
  if (u16a_2202 > 10)
  {
    m2_2202 = malloc (sizeof(uint16_t[5]));
  }
  else
  {
    m2_2202 = &a16_2202;                                              /* expect: 1586 */
  }
  free (m2_2202);                                                     /* expect: 2722 */

  return 1;
}


