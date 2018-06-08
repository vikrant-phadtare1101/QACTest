/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.11.c
 *
 * Rule-21.11: The standard header file <tgmath.h> shall not be used
 *
 * Implemented by message(s):
 *   5131   Use of standard header file <tgmath.h>.
 *
 *
 *//* PRQA S 5131 -- *//*
 * <<<------------------------------------------------------------ */


#include <tgmath.h>                                                   /* expect: 5131 */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2111 (void)
{
  return 1;
}


