/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-2.3.c
 *
 * Rule-2.3: A project should not contain unused type declarations
 *
 * Implemented by message(s):
 *   3205   The identifier '%s' is not used and could be removed.
 *
 *
 *//* PRQA S 3205 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0203( void )
{
    typedef int INT;                                                  /* expect: 3205 */

    return 1;
}


