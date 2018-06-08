/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-6.1.c
 *
 * Rule-6.1: Bit-fields shall only be declared with an appropriate type
 *
 * Implemented by message(s):
 *   0634   [I] Bit-fields in this struct/union have not been declared
 *          explicitly as unsigned or signed.
 *
 *   0635   [E] Bit-fields in this struct/union have been declared with
 *          types other than int, signed int, unsigned int or _Bool.
 *
 *
 *//* PRQA S 0634,0635 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

typedef enum { A, B, C } e_t;


struct T01 { char                bpc: 3; };                           /* expect: 0634 0635 */
struct T02 { signed char         bsc: 3; };                           /* expect:      0635 */
struct T03 { unsigned char       buc: 3; };                           /* expect:      0635 */

extern int16_t rule_0601(void)
{
    struct T01 r0601_t1;
    struct T02 r0601_t2;
    struct T03 r0601_t3;

    return 0;
}


