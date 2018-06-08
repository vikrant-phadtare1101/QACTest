/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-5.9_1.c
 *
 * Rule-5.9: Identifiers that define objects or functions with internal linkage
 *           should be unique
 *
 * Implemented by message(s):
 *   1525   Object/function with external linkage has same identifier as
 *          another object/function with internal linkage.
 *
 *   1527   Object/function with internal linkage has same identifier as
 *          another object/function with internal linkage.
 *
 *   1528   Object with no linkage has same identifier as another
 *          object/function with internal linkage.
 *
 *
 *//* PRQA S 1525,1527,1528 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t obj_0509a = 0;                                         /* expect: 1525 1594 1594 */
static int16_t obj_0509c = 0;                                         /* expect: 1527 1594 1594 */

extern int16_t rule_0509( void )
{
    int16_t obj_0509b = 0;                                            /* expect: 1528 1594 1594*/
    return 1;
}


