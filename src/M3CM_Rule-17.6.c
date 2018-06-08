/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-17.6.c
 *
 * Rule-17.6: The declaration of an array parameter shall not contain the static
 *            keyword between the [ ]
 *
 * Implemented by message(s):
 *   1058   [C99] The keyword 'static' is used in the declaration of a
 *          function parameter of array type.
 *
 *
 *//* PRQA S 1058 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

static void rule_1706a (uint16_t arr_1706a[static 10])                /* expect: 1058 */
{
  for (uint16_t i_1706a = 0; i_1706a < 10; ++ i_1706a)
  {
    arr_1706a[i_1706a] = 10 - i_1706a;
  }
}

static void rule_1706b (uint16_t size_1706b, uint16_t arr_1706b[static size_1706b]) /* expect: 1058 */
{
  for (uint16_t i_1706b = 0; i_1706b < size_1706b; ++ i_1706b)
  {
    arr_1706b[i_1706b] = size_1706b - i_1706b;
  }
}

extern int16_t rule_1706 (void)
{
    uint16_t arr10_1706[10] = { 0 };
    uint16_t arr20_1706[20] = { 0 };

    rule_1706a (arr10_1706);
    rule_1706b (20, arr20_1706);

    return 1;
}


