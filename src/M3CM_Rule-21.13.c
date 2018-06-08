/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.13.c
 *
 * Rule-21.13: Any value passed to a function in <ctype.h> shall be representable
 *             as an unsigned char or be the value EOF
 *
 * Implemented by message(s):
 *   2796   Definite: Calling a standard library character handling
 *          function with an invalid character value.
 *
 *   2797   Apparent: Calling a standard library character handling
 *          function with an invalid character value.
 *
 *
 *//* PRQA S 2796,2797 -- *//*
 * <<<------------------------------------------------------------ */


#include <ctype.h>
#include <stdio.h>

#include "misra.h"
#include "m3cmex.h"

uint8_t u8a_2113;

extern int16_t rule_2113 (void)
{
  bool_t ret_2113 =    isdigit((int16_t)u8a_2113)
                    && isalpha((int16_t)'b')
                    && islower(EOF)
                    && isalpha(256);                                  /* expect: 2796 */

  int16_t ch_2113 = 256;                                              /* expect: 1575,1575,1575,1575 */
  isalpha (ch_2113);                                                  /* expect: 2796 */
  ispunct (ch_2113);                                                  /* expect: 2796 */

  if (u8a_2113 == (uint8_t)0)
  {
    ch_2113 = (int16_t)'9';
  }
  isalpha (ch_2113);                                                  /* expect: 2797,    1574 */
  ispunct (ch_2113);                                                  /* expect: 2797,    1574 */

  return ret_2113;
}


