/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.8.c
 *
 * Rule-21.8: The library functions abort, exit and system of <stdlib.h> shall not
 *            be used
 *
 * Implemented by message(s):
 *   5126   Use of function: abort, exit or system.
 *
 *   5128   Use of function: getenv.
 *
 *
 *//* PRQA S 5126,5128 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdlib.h>

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2108 (void)
{
  int16_t ret_2108;
  ret_2108 = system( "test" );                                        /* expect:  5126 */

  if ( ret_2108 < -99 )
  {
    abort();                                                          /* expect:  5126 */
  }

  if ( ret_2108 == 40 )
  {
    exit( 1 );                                                        /* expect:  5126 */
  }

  char * env_2108 = getenv("ENV_2108");                               /* expect: !5128 */

  return ret_2108;
}


