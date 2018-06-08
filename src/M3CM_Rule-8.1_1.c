/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-8.1_1.c
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
#include "m3cmex.h"

static int32_t r0801_a;                                               /* expect: 1525, 1594, 1594 */

typedef (*pfi)(void);                                                 /* expect: 2050 */

static       rule_0801a( void );                                      /* expect: 2050 */
static void  rule_0801b (const k, int16_t p);                         /* expect: 2051 */
static const sc = 5;                                                  /* expect: 2051 */
const        ec;                                                      /* expect: 2051 */
volatile *   pvi;                                                     /* expect: 2051 */
extern       obj0801 = 1;                                             /* expect: 2051 */

extern int16_t rule_0801( void )
{
   int16_t r;
   r = sc + rule_0801a();
   rule_0801b(1, 2);

   return r;
}

static rule_0801a( void )
{                                                                     /* expect: 2050 */
   return sc + 1;
}

static void rule_0801b (const k, int16_t p)
{                                                                     /* expect: 2051 */
}


