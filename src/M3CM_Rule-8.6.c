/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-8.6.c
 *
 * Rule-8.6: An identifier with external linkage shall have exactly one external
 *           definition
 *
 * Implemented by message(s):
 *   0630   [U] More than one definition of '%s' (with external linkage).
 *
 *   3406   Object/function '%s', with external linkage, has been defined
 *          in a header file.
 *
 *   1509   '${name}' has external linkage and has multiple definitions.
 *
 *   1752   The object '${name}' with external linkage is declared but not
 *          defined within this project.
 *
 *   1753   The function '${name}' with external linkage is declared but
 *          not defined within this project.
 *
 *
 *//* PRQA S 0630,3406,1509,1752,1753 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"
#include "M3CM_Rule-8.6.h"

int16_t obj_0806a = 3;                                                /* expect: 1509 1593 1593 */
int16_t obj_0806a = 4;                                                /* expect: 1509 0630 1593 1593 */

extern int16_t r0806_x;                                               /* expect: 1752 1594 */

extern int16_t rule_0806c(void);                                      /* expect: 1753 1594 */

extern int16_t rule_0806(void)                                        /* expect: 1509 1593 1593*/ /*Defined in M3CM_amain.c*/
{
    return 1;
}


