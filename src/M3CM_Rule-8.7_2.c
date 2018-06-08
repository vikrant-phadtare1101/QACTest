/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-8.7_2.c
 *
 * Rule-8.7: Functions and objects should not be defined with external linkage if
 *           they are referenced in only one translation unit
 *
 * Implemented by message(s):
 *   1504   The object '${name}' is only referenced in the translation unit
 *          where it is defined.
 *
 *   1505   The function '${name}' is only referenced in the translation
 *          unit where it is defined.
 *
 *   1531   The object '${name}' is referenced in only one translation unit
 *          - but not the one in which it is defined.
 *
 *   1532   The function '%1s' is only referenced in one translation unit -
 *          but not the one in which it is defined.
 *
 *
 *//* PRQA S 1504,1505,1531,1532 -- *//*
 * <<<------------------------------------------------------------ */


#include "M3CM_Rule-8.7.h"

int16_t rule0807_foo()                                                /* expect: 1532*/
{
    x0807_2 = 1;                                                      /* expect: 1579 */
    return x0807_2;                                                   /* expect: 1579 */
}
int16_t rule0807_bar()
{
    x0807_2 = 1;                                                      /* expect: 1579 */
    return x0807_2;                                                   /* expect: 1579 */
    }

