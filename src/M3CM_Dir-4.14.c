/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Dir-4.14.c
 *
 * Dir-4.14: The validity of values received from external sources shall be checked
 *
 * Implemented by message(s):
 *   2956   Definite: Using object '%s' with tainted value.
 *
 *
 *//* PRQA S 2956 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdio.h>

#include "misra.h"
#include "m3cmex.h"

extern int16_t dir_0414( void )
{
   char input[128];
   (void) scanf( "%128c", input );                                    /* expect: 1586 */
   (void) printf( "%s", input );                                      /* expect: 2956 */
   return 1;
}


