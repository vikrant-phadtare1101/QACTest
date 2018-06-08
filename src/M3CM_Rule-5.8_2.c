/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-5.8_2.c
 *
 * Rule-5.8: Identifiers that define objects or functions with external linkage
 *           shall be unique
 *
 * Implemented by message(s):
 *   1525   Object/function with external linkage has same identifier as
 *          another object/function with internal linkage.
 *
 *   1526   Object with no linkage has same identifier as another
 *          object/function with external linkage.
 *
 *   1756   External identifier '${name}' shall be unique.
 *
 *
 *//* PRQA S 1525,1526,1756 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

static int16_t obj_0508a;                                             /* expect: 1525 1594 1594 1594*/


