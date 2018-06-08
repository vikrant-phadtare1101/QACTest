/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-18.4.c
 *
 * Rule-18.4: The +, -, += and -= operators should not be applied to an expression
 *            of pointer type
 *
 * Implemented by message(s):
 *   0488   Performing pointer arithmetic.
 *
 *
 *//* PRQA S 0488 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1804( void )
{
  uint8_t arr_1804[20];
  uint8_t * ptr_1804;

  ptr_1804 = arr_1804;

  ptr_1804 ++;                                                       /* Compliant     */

  ptr_1804 = ptr_1804 + 2;                                            /* expect: 0488 */
  *(ptr_1804 + 2) = 0u;                                               /* expect: 0488 */
  ptr_1804 += 2;                                                      /* expect: 0488 */
  ptr_1804[2] = 0u;                                                   /* Compliant    */

  ptr_1804[-2] = 0u;                                                  /* Compliant    */
  ptr_1804 -= 2;                                                      /* expect: 0488 */
  *(ptr_1804 - 2) = 0u;                                               /* expect: 0488 */
  ptr_1804 = ptr_1804 - 2;                                            /* expect: 0488 */

  ptr_1804 --;                                                        /* Compliant    */

  return 1;
}


