/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-17.8.c
 *
 * Rule-17.8: A function parameter should not be modified
 *
 * Implemented by message(s):
 *   1338   The parameter '%s' is being modified.
 *
 *   1339   Evaluating the address of the parameter '%s'.
 *
 *   1340   Storing the address of the parameter '%s' in a constant
 *          pointer.
 *
 *
 *//* PRQA S 1338,1339,1340 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

static void rule_1708a( int16_t a_1708 )
{
    ++ a_1708;                                                        /* expect:  1338 */
    int16_t local_1708 = a_1708;
    ++ local_1708;                                                    /* expect: !1338 */
}

static void rule_1708b( int16_t * b_1708, int16_t * c_1708 )
{
    b_1708 = c_1708;                                                  /* expect:  1338 */
    *b_1708 = *c_1708;                                                /* expect: !1338 */
}

static void rule_1708c ( int16_t d_1708 )
{
    int16_t * dp_1708 = &d_1708;                                      /* expect:  1339 */
    const int16_t * dcp_1708 = &d_1708;                               /* expect:  1340 */
    ++ *dp_1708;                                                      /* expect: !1338 */
    ++ *(int16_t)dcp_1708;                                            /* expect: !1338 */
}

extern int16_t rule_1708( void )
{
    int16_t x_1708 = 5;
    int16_t y_1708 = 6;

    rule_1708a(x_1708);
    rule_1708b(&x_1708, &y_1708);
    rule_1708c(x_1708);

    return x_1708 + y_1708;  /* 12 */
}


