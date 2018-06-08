/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Dir-4.9.c
 *
 * Dir-4.9: A function should be used in preference to a function-like macro where
 *          they are interchangeable
 *
 * Implemented by message(s):
 *   3453   A function could probably be used instead of this function-like
 *          macro.
 *
 *
 *//* PRQA S 3453 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

#define  MAX( A, B )   ( ( ( A ) > ( B ) ) ? ( A ) : ( B ) )          /* expect: 3453 */
#define  MMAX          ( 14 + 32 )
#define  HELLO         10


extern int16_t dir_0409( void )
{
   return 1;
}


