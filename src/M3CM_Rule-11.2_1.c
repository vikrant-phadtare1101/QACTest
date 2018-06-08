/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-11.2_1.c
 *
 * Rule-11.2: Conversions shall not be performed between a pointer to an incomplete
 *            type and any other type
 *
 * Implemented by message(s):
 *   0308   Non-portable cast involving pointer to an incomplete type.
 *
 *   0323   [u] Cast between a pointer to incomplete type and a floating
 *          type.
 *
 *   0324   [u] Cast between a pointer to incomplete type and an integral
 *          type.
 *
 *   0325   [u] Cast between a pointer to incomplete type and a pointer to
 *          function.
 *
 *
 *//* PRQA S 0308,0323,0324,0325 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"
#include "M3CM_Rule-11.2.h"

extern int16_t rule_1102( void )
{
    (int16_t *)  ps1102;                                              /* expect: 0308 */
    (float32_t)ps1102;                                                /* expect: 0323 */
    (int16_t)ps1102;                                                  /* expect: 0324 */
    (void (*)(void))ps1102;                                           /* expect: 0325 */




    return 0;
}


