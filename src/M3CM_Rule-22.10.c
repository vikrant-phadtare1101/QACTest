/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-22.10.c
 *
 * Rule-22.10: The value of errno shall only be tested when the last function to be
 *             called was an errno-setting-function
 *
 * Implemented by message(s):
 *   2503   Testing of 'errno' is not immediately preceded by a call to an
 *          'errno' setting function.
 *
 *
 *//* PRQA S 2503 -- *//*
 * <<<------------------------------------------------------------ */


#include <errno.h>
#include <stdlib.h>

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2210( void )
{
  int16_t r2210_f64a;
  errno = 0;
  r2210_f64a = atof( "A.12" );
  r2210_f64a = 1;
  if ( 0 == errno )                                                   /* expect: 2503 */
  {
  }

  errno = 0;
  r2210_f64a = strtod( "A.12", NULL );
  r2210_f64a = 1;
  if ( 0 == errno )                                                   /* expect: 2503 */
  {
  }

  return 1;
}


