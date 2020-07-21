/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-18.6.c
 *
 * Rule-18.6: The address of an object with automatic storage shall not be copied
 *            to another object that persists after the first object has ceased
 *            to exist
 *
 * Implemented by message(s):
 *   3217   Address of automatic object exported to a pointer with linkage
 *          or wider scope.
 *
 *   3225   Address of automatic object exported using a function
 *          parameter.
 *
 *   3230   Address of automatic object assigned to local pointer with
 *          static storage duration.
 *
 *   4140   Address of automatic object exported in function return value.
 *
 *
 *//* PRQA S 3217,3225,3230,4140 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

int16_t * p16a_1806;

static void rule_1806a (void)
{
  int16_t auto1_1806a;
  p16a_1806 = &auto1_1806a;                                           /* expect: 3217 */

  int16_t * ptr_1806a;
  {
    int16_t auto2_1806a;
    ptr_1806a = &auto2_1806a;                                         /* expect: 3217 */
  }
  *ptr_1806a = 0;

  static int16_t * static1_1806a;
  {
    static int16_t * static2_1806a;
    int16_t auto3_1806a;
    static1_1806a = &auto3_1806a;                                     /* expect: 3217 */
    static2_1806a = &auto3_1806a;                                     /* expect: 3230 */
  }
}

static void rule_1806b (int16_t ** px_1806b)
{
  int16_t auto_1806b;
  *px_1806b = &auto_1806b;                                            /* expect: 3225 */
}

static int16_t * rule_1806d (void)
{
  int16_t auto_1806b;
  return &auto_1806b;                                                 /* expect: 4140 */
}

extern int16_t rule_1806 (void)
{
  int16_t * ptr_1806;

  rule_1806a ();
  rule_1806b (&ptr_1806);
  ptr_1806 = rule_1806d ();

  return 1;
}


