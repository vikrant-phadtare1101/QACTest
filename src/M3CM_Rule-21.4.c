/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.4.c
 *
 * Rule-21.4: The standard header file <setjmp.h> shall not be used
 *
 * Implemented by message(s):
 *   5132   Use of standard header file <setjmp.h>.
 *
 *
 *//* PRQA S 5132 -- *//*
 * <<<------------------------------------------------------------ */


#include <setjmp.h>                                                   /* expect: 5132 */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2104( void )
{
   return 1;
}


