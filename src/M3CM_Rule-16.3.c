/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-16.3.c
 *
 * Rule-16.3: An unconditional break statement shall terminate every switch-clause
 *
 * Implemented by message(s):
 *   2003   The preceding 'switch' clause is not empty and does not end
 *          with a 'jump' statement. Execution will fall through.
 *
 *   2020   Final 'switch' clause does not end with an explicit 'jump'
 *          statement.
 *
 *
 *//* PRQA S 2003,2020 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

int16_t s16a_1603;
int16_t s16b_1603;

extern int16_t rule_1603( void )
{
   int16_t ret_1603;

   switch ( s16a_1603 )
   {
   case 0:  /* Compliant */
      ret_1603 = 2;
      break;

   case 1:  /* Compliant - break without content */
      break;

   case 2:  /* Compliant - grouped labels for one clause */
   case 3:
      ret_1603 = 3;
      break;

   case 4:  /* Non compliant: no break */
      ret_1603 = 5;

   case 5:  /* Non compliant: conditional break */                    /* expect: 2003 */
      if ( s16b_1603 )
      {
         ret_1603 = 7;
         break;
      }

   default:  /* Non compliant */                                      /* expect: 2003 */
      ret_1603 = 11;
   }                                                                  /* expect: 2020 */

   return ret_1603;
}


