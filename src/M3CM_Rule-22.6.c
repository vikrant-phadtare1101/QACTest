/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-22.6.c
 *
 * Rule-22.6: The value of a pointer to a FILE shall not be used after the
 *            associated stream has been closed
 *
 * Implemented by message(s):
 *   2696   Definite: Attempt to access a file which has been closed.
 *
 *   2697   Apparent: Attempt to access a file which has been closed.
 *
 *
 *//* PRQA S 2696,2697 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdio.h>
#include "misra.h"
#include "m3cmex.h"

int16_t s16a_2204;                                                    /* expect: 1509,1593,1593 */
int16_t s16b_2204;                                                    /* expect: 1509,1593,1593 */

extern int16_t rule_2206 (void)
{
  FILE * fp1_2206 = fopen ("path", "r");                              /* expect: 1581,1581 */
  FILE * fp2_2206 = fopen ("path", "r");                              /* expect: 1581,1581 */

  fclose (fp1_2206);                                                  /* expect: 1581,1581 */
  fgetc (fp1_2206);                                                   /* expect: 2696 */

  if (s16a_2204 > 10)
  {
    fclose (fp2_2206);                                                /* expect: 1581,1581 */
  }
  fgetc (fp2_2206);                                                   /* expect: 2697 */

  fclose (fp1_2206);                                                  /* expect: 2696 */
  fclose (fp2_2206);                                                  /* expect: 2697 */

  return 1;
}


