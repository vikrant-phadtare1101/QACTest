/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-2.7.c
 *
 * Rule-2.7: There should be no unused parameters in functions
 *
 * Implemented by message(s):
 *   3206   The parameter '%s' is not used in this function.
 *
 *
 *//* PRQA S 3206 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

static void rule_0207a(int16_t a, int16_t b);

extern int16_t rule_0207( void )
{
    rule_0207a(1, 2);

    return 1;
}

static void rule_0207a(int16_t a, int16_t b)                          /* expect: 3206 */
{
    int16_t r0207_s16a;
    r0207_s16a = a;
}


