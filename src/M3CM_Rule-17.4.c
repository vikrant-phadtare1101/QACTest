/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-17.4.c
 *
 * Rule-17.4: All exit paths from a function with non-void return type shall have
 *            an explicit return statement with an expression
 *
 * Implemented by message(s):
 *   0745   [U] 'return;' found in '%s()', which has been defined with a
 *          non-'void' return type.
 *
 *   2887   Function 'main' ends with an implicit 'return' statement.
 *
 *   2888   This function has been declared with a non-void 'return' type
 *          but ends with an implicit 'return ;' statement.
 *
 *   3113   [U] 'return' statement includes no expression but function
 *          '%s()' is implicitly of type 'int'.
 *
 *   3114   [U] Function '%s()' is implicitly of type 'int' but ends
 *          without returning a value.
 *
 *
 *//* PRQA S 0745,2887,2888,3113,3114 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

static int16_t rule_1704a (void)
{
  return;                                                             /* expect: 0745 */
}

static int16_t rule_1704b (void)                                      /* expect: 2888 */
{
}                                                                     /* expect: 1572 */

extern         rule_1704c (void)
{
  return;                                                             /* expect: 3113 */
}

extern         rule_1704d (void)                                      /* expect: 2888 */
{
}                                                                     /* expect: 3114,    1572 */


extern int16_t rule_1704( void )
{
  int16_t ret_1704;

  ret_1704 = rule_1704a () +
             rule_1704b () +
             rule_1704c () +
             rule_1704d ();

  return ret_1704;
}

int main (void)                                                       /* expect: 2887 */
{
  //
}                                                                     /* expect: 1572 */


