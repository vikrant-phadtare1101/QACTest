/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-4.1.c
 *
 * Rule-4.1: Octal and hexadecimal escape sequences shall be terminated
 *
 * Implemented by message(s):
 *   3636   Octal escape sequence '%s' is not terminated.
 *
 *   3637   Hexadecimal escape sequence '%s' is not terminated.
 *
 *
 *//* PRQA S 3636,3637 -- *//*
 * <<<------------------------------------------------------------ */


#include "m3cmex.h"

extern int16_t rule_0401( void )
{
    const char *r0401_s1 = "\x41g";                                   /* expect: 3637 */ /* Non-compliant */
    const char *r0401_s2 = "\x41" "g";                                /* Compliant - terminated by end of literal */
    const char *r0401_s3= "\x41\x67";                                 /* Compliant - terminated by another escape */
    uint16_t r0401_c1 = '\141t';                                      /* expect: 3636 */ /* Non-compliant */
    uint16_t r0401_c2 = '\141\t';                                     /* Compliant - terminated by another escape */

    return 1;
}


