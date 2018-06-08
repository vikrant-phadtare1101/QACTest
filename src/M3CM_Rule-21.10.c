/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.10.c
 *
 * Rule-21.10: The Standard Library time and date functions shall not be used
 *
 * Implemented by message(s):
 *   5127   Use of standard header file <time.h>.
 *
 *
 *//* PRQA S 5127 -- *//*
 * <<<------------------------------------------------------------ */


#include <time.h>                                                     /* expect: 5127 */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2110 (void)
{
  return 1;
}


