/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-8.1_2.c
 *
 * Rule-8.1: Types shall be explicitly specified
 *
 * Implemented by message(s):
 *   2050   The 'int' type specifier has been omitted from a function
 *          declaration.
 *
 *   2051   The 'int' type specifier has been omitted from an object
 *          declaration.
 *
 *   1525   Object/function with external linkage has same identifier as
 *          another object/function with internal linkage.
 *
 *
 *//* PRQA S 2050,2051,1525 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
extern int32_t r0801_a = 1;                                           /* expect: 1525, 1594, 1594 */


