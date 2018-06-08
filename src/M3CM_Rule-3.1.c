/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-3.1.c
 *
 * Rule-3.1: The character sequences /* and // shall not be used within a comment.
 *
 * Implemented by message(s):
 *   3108   Nested comments are not recognized in the ISO standard.
 *
 *
 *//* PRQA S 3108 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0301( void )
{
                                                                      /* expect: 3108 */ /* /*  nested comment ? */

                                                                      /* expect: 3108 */ /* //  nested comment ? */

                                                                      /* expect: 3108 */ // /*  nested comment ? */

   return 0;
}


