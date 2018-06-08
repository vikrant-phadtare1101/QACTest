/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-11.9.c
 *
 * Rule-11.9: The macro NULL shall be the only permitted form of integer null
 *            pointer constant
 *
 * Implemented by message(s):
 *   3003   This character constant is being interpreted as a NULL pointer
 *          constant.
 *
 *   3004   This integral constant expression is being interpreted as a
 *          NULL pointer constant.
 *
 *
 *//* PRQA S 3003,3004 -- *//*
 * <<<------------------------------------------------------------ */


#include <stddef.h>
#include "misra.h"
#include "m3cmex.h"

#define NIL '\0'

extern int16_t rule_xxxx( void )
{
   PC  *gcb;
   SC  *lpsc = NIL;                                                   /* expect: 3003 */
   if (gcb != 0) {                                                    /* expect: 3004 */
   }

   return 1;
}


