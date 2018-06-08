/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.5.c
 *
 * Rule-21.5: The standard header file <signal.h> shall not be used
 *
 * Implemented by message(s):
 *   5123   Use of standard header file <signal.h>.
 *
 *
 *//* PRQA S 5123 -- *//*
 * <<<------------------------------------------------------------ */


#include <signal.h>                                                   /* expect: 5123 */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2105( void )
{
   return 1;
}


