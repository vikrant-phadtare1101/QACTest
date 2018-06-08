/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-8.4.c
 *
 * Rule-8.4: A compatible declaration shall be visible when an object or function
 *           with external linkage is defined
 *
 * Implemented by message(s):
 *   3408   '%s' has external linkage and is being defined without any
 *          previous declaration.
 *
 *
 *//* PRQA S 3408 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

int16_t obj0804 = 1;                                                  /* expect: 3408 */

extern int16_t rule_0804(void)
{
    return 1;
}


