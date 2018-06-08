/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-5.2.c
 *
 * Rule-5.2: Identifiers declared in the same scope and name space shall be
 *           distinct
 *
 * Implemented by message(s):
 *   0779   [U] Identifier does not differ from other identifier(s) (e.g.
 *          '%s') within the specified number of significant
 *          characters.
 *
 *
 *//* PRQA S 0779 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

            /* 1234567890123456789012345678901 *****/
static int32_t b23456789012345678901234567;
static int32_t b23456789012345678901234567890;                        /* Compliant */

            /* 1234567890123456789012345678901 ******/
static int32_t a234567890123456789012345678901234;
static int32_t a234567890123456789012345678901234x;                   /* expect: 0779 */      /* Non-compliant */



