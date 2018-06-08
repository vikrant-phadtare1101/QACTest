/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-22.9.c
 *
 * Rule-22.9: The value of errno shall be tested against zero after calling an
 *            errno-setting-function
 *
 * Implemented by message(s):
 *   2501   Call to '%s' is not immediately followed by the testing of
 *          'errno'.
 *
 *
 *//* PRQA S 2501 -- *//*
 * <<<------------------------------------------------------------ */


#include <errno.h>
#include <stdlib.h>

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2209( void )
{
  int32_t r2209_sla;
  PC numbers[] = "2001 60c0c0 -1101110100110100100000 0x6fffff";
  PC *pChr;

  errno = 0;
  r2209_sla = strtol(numbers, &pChr, 10);                             /* expect: 2501 */
  r2209_sla = 1;
  if ( 0 != errno )
  {
  }

  return 1;
}


