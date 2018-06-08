/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.18.c
 *
 * Rule-21.18: The size_t argument passed to any function in <string.h> shall have
 *             an appropriate value
 *
 * Implemented by message(s):
 *   2840   Constant: Dereference of an invalid pointer value.
 *
 *   2841   Definite: Dereference of an invalid pointer value.
 *
 *   2842   Apparent: Dereference of an invalid pointer value.
 *
 *   2865   Constant: Using 0 as size parameter of a function call.
 *
 *   2866   Definite: Using 0 as size parameter of a function call.
 *
 *   2867   Apparent: Using 0 as size parameter of a function call.
 *
 *   2868   Suspicious: Using 0 as size parameter of a function call.
 *
 *   2869   Possible: Using 0 as size parameter of a function call.
 *
 *
 *//* PRQA S 2840,2841,2842,2865,2866,2867,2868,2869 -- *//*
 * <<<------------------------------------------------------------ */


#include <string.h>
#include "misra.h"
#include "m3cmex.h"

int16_t s16a_2118;                                                    /* expect: 1594 */
int16_t s16b_2118;                                                    /* expect: 1594 */
int16_t s16c_2118;                                                    /* expect: 1594 */
int16_t s16d_2118;
int16_t s16e_2118;
int16_t s16f_2118;

bool_t ba_2118;
uint16_t u16a_2118;

extern int16_t rule_2118 (void)
{
  char buf1_2118[5] = "12345";                                        /* expect: 1594,1594,1594 */
  char buf2_2118[10] = "1234567890";                                  /* expect: 1594 */

  if (memcmp (buf1_2118, buf2_2118, 5) == 0)
  {
  }

  if (memcmp (buf1_2118, buf2_2118, 6) == 0)                          /* expect: 2840 */
  {
  }

  if (memcmp (buf1_2118, buf2_2118, 0) == 0)                          /* expect: 2865 */
  {
  }

  if (s16a_2118 > 5)                                                  /* expect: 1575 */
  {
    memcmp (buf1_2118, buf2_2118, s16a_2118);                         /* expect: 2841 */
  }

  if (s16b_2118 > 10)                                                 /* expect: 1575,1575 */
  {
  }
  memcmp (buf1_2118, buf2_2118, s16b_2118);                           /* expect: 2842,2842,2869,    1574,1574 */

  if (s16c_2118 == 0)                                                 /* expect: 1575 */
  {
    memcmp (buf1_2118, buf2_2118, s16c_2118);                         /* expect: 2866 */
  }

  if (ba_2118)
  {
    s16d_2118 = 0;                                                    /* expect: 1575 */
  }
  memcmp (buf1_2118, buf2_2118, s16d_2118);                           /* expect: 2867,    1574 */

  for (uint16_t i_2118 = u16a_2118; i_2118 > 0; -- i_2118)
  {
    s16e_2118 = 0;                                                    /* expect: 1575 */
  }
  memcmp (buf1_2118, buf2_2118, s16e_2118);                           /* expect: 2868,    1574 */

  return 1;
}


