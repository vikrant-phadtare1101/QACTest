/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.17.c
 *
 * Rule-21.17: Use of the string handling functions from <string.h> shall not
 *             result in accesses beyond the bounds of the objects referenced by
 *             their pointer parameters
 *
 * Implemented by message(s):
 *   2835   Constant: Non null terminated string used in a string function.
 *
 *   2836   Definite: Non null terminated string used in a string function.
 *
 *
 *//* PRQA S 2835,2836 -- *//*
 * <<<------------------------------------------------------------ */


#include <string.h>
#include "misra.h"
#include "m3cmex.h"

char * str_2117;

#define ARR_2117 (char []){ 'H', 'e', 'l', 'l', 'o' }

extern int16_t rule_2117 (void)
{
  char const lhs_2117 [5];
  char const rhs_2117 [5];

  strlen (ARR_2117);                                                  /* expect: 2835,    1586 */
  strcmp (ARR_2117, str_2117);                                        /* expect: 2835,    1586 */
  strcoll (ARR_2117, str_2117);                                       /* expect: 2835,    1586 */

  strlen (rhs_2117);                                                  /* expect: 2836 */
  strcmp (lhs_2117, rhs_2117);                                        /* expect: 2836,2836 */
  strcoll (lhs_2117, rhs_2117);                                       /* expect: 2836,2836 */

  strlen (str_2117);                                                  /* expect: !2836 */
  strcmp (lhs_2117, str_2117);                                        /* expect: 2836 */
  strcmp (lhs_2117, str_2117);                                        /* expect: 2836 */

  return 1;
}


