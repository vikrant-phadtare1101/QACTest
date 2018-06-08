/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-20.1.c
 *
 * Rule-20.1: #include directives should only be preceded by preprocessor
 *            directives or comments
 *
 * Implemented by message(s):
 *   5087   Use of #include directive after code fragment.
 *
 *
 *//* PRQA S 5087 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2001 (void)
{
  return 1;
}

#include "M3CM_Rule-20.1.h"                                           /* expect: 5087 */


