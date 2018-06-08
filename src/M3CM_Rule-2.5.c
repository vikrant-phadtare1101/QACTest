/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-2.5.c
 *
 * Rule-2.5: A project should not contain unused macro declarations
 *
 * Implemented by message(s):
 *   3214   The macro '%s' is not used and could be removed.
 *
 *
 *//* PRQA S 3214 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

#define UNUSED_MACRO 1					                                      /* expect: 3214 */

extern int16_t rule_0205( void )
{

    return 1;
}



