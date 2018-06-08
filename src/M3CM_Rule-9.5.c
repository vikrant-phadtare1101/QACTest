/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-9.5.c
 *
 * Rule-9.5: Where designated initializers are used to initialize an array object
 *           the size of the array shall be specified explicitly
 *
 * Implemented by message(s):
 *   3676   Designators are used to initialize an array of unspecified
 *          size.
 *
 *
 *//* PRQA S 3676 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0905( void )
{
  int r0905_a1[ ] = { [ 0 ] = 1 };	                                  /* expect: 3676 */

  int r0905_a2[ 10 ] = { [ 0 ] = 1 };

  return 0;
}


