/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.7.c
 *
 * Rule-21.7: The atof, atoi, atol and atoll functions of <stdlib.h> shall not be
 *            used
 *
 * Implemented by message(s):
 *   5125   Use of function: atof, atoi, atol or atoll.
 *
 *
 *//* PRQA S 5125 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdlib.h>

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2107 (void)
{
  FT f_2107;
  SI i_2107;
  SL l_2107;

  f_2107 = atof("12.34");                                             /* expect: 5125 */
  i_2107 = atoi("3456");                                              /* expect: 5125 */
  l_2107 = atol("12345678");                                          /* expect: 5125 */

  return 1;
}


