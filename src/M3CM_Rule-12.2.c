/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-12.2.c
 *
 * Rule-12.2: The right hand operand of a shift operator shall lie in the range
 *            zero to one less than the width in bits of the essential type of
 *            the left hand operand
 *
 * Implemented by message(s):
 *   0499   Right operand of shift operator is greater than or equal to the
 *          width of the essential type of the left operand.
 *
 *   2790   Constant: Right hand operand of shift operator is negative or
 *          too large.
 *
 *   2791   Definite: Right hand operand of shift operator is negative or
 *          too large.
 *
 *   2792   Apparent: Right hand operand of shift operator is negative or
 *          too large.
 *
 *
 *//* PRQA S 0499,2790,2791,2792 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1202( void )
{
   return 1;
}

static void r1202_foo(int32_t r1202_si, uint8_t u8a, uint16_t u16a)   /* expect: 1594 1594 1594 */
{
    if (r1202_si > 40)                                                /* expect: 1575 1575*/
    {
        u8a >> r1202_si;                                              /* expect: 2791 */
    }
    u8a >> r1202_si;                                                  /* expect: 2792 1574 */
    u16a >> -16;                                                      /* expect: 2790 */
    u8a >> 8u;                                                        /* expect: 0499 */
    }

