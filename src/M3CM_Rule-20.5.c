/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-20.5.c
 *
 * Rule-20.5: #undef should not be used
 *
 * Implemented by message(s):
 *   0841   Using '#undef'.
 *
 *
 *//* PRQA S 0841 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2005 (void)
{
  return 1;
}

#define  L      0
#undef   L                                                            /* expect: 0841 */


