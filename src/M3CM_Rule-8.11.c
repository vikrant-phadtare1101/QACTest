/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-8.11.c
 *
 * Rule-8.11: When an array with external linkage is declared, its size should be
 *            explicitly specified
 *
 * Implemented by message(s):
 *   3684   Array declared with unknown size.
 *
 *
 *//* PRQA S 3684 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

       int16_t r0811_arr1[12];
       int16_t r0811_arr2[  ] = { 1, 2, 3 };

extern int16_t r0811_arr3[12];
extern int16_t r0811_arr4[  ];                                        /* expect: 3684 */

int16_t r0811_arr3[12] = {1,2,3};
int16_t r0811_arr4[  ] = {1,2,3};

extern int16_t rule_0811( void )
{

   return 0;
}


