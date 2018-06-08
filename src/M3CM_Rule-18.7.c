/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-18.7.c
 *
 * Rule-18.7: Flexible array members shall not be declared
 *
 * Implemented by message(s):
 *   1060   [C99] A flexible array member has been declared.
 *
 *
 *//* PRQA S 1060 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"
#include <stdlib.h>

struct s_1807
{
  uint16_t len;
  uint32_t data [];                                                   /* expect: 1060 */
};
struct s_1807 str_1807;

extern int16_t rule_1807 (void)
{
  struct s_1807 * sp_1807;

  sp_1807 = malloc (sizeof (struct s_1807) + (str_1807.len * sizeof (uint32_t)));
  *sp_1807 = str_1807;  /* only copies sp_1807.len */

  return 1;
}


