/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-9.2.c
 *
 * Rule-9.2: The initializer for an aggregate or union shall be enclosed in braces
 *
 * Implemented by message(s):
 *   0693   Struct initializer is missing the optional {.
 *
 *   0694   Array initializer is missing the optional {.
 *
 *
 *//* PRQA S 0693,0694 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

struct base1
{
   int16_t i;
   int16_t j;
};

extern int16_t rule_0902( void )
{
   struct base1 s1    = {  1, 2 };
   struct base1 s3[2] = {  1, 2,   3, 4  };                           /* expect: 0693 */

   int16_t bufb[2][3] = {  1, 2, 3 ,  4, 5, 6  };                     /* expect: 0694 */

   return s3[0].i;
}


