/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-11.2_2.c
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


#include "M3CM_Rule-11.2.h"
struct S1102{
    int a;
};
struct S1102 tmp = {1};
struct S1102* ps1102 = &tmp;


