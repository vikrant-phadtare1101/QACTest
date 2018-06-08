/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.20.c
 *
 * Rule-21.20: The pointer returned by the Standard Library functions asctime,
 *             ctime, gmtime, localtime, localeconv, getenv, setlocale, or
 *             strerror shall not be used following a subsequent call to the
 *             same function
 *
 * Implemented by message(s):
 *   2681   Definite: Using an invalidated value '%s' returned from a
 *          Standard Library function.
 *
 *   2682   Apparent: Using an invalidated value '%s' returned from a
 *          Standard Library function.
 *
 *
 *//* PRQA S 2681,2682 -- *//*
 * <<<------------------------------------------------------------ */


#include <locale.h>
#include <stdio.h>
#include <string.h>
#include "misra.h"
#include "m3cmex.h"

bool_t ba_2120;

extern int16_t rule_2120 (void)
{
  const char * str1_2120;                                             /* expect: 1594 */
  const char * str2_2120;
  const char * str3_2120 = NULL;                                      /* expect: 1594 */
  char copy_2120[128];

  str1_2120 = setlocale (LC_ALL, NULL);                               /* expect: 1586,1586 */

  if (ba_2120)
  {
    str3_2120 = str1_2120;                                            /* expect: 1586 */
  }

  strcpy(copy_2120, str1_2120);
  str2_2120 = setlocale(LC_MONETARY, "French");                       /* expect: 1586,1586 */

  printf("%s\n", str1_2120);                                          /* expect: 2681 */
  printf("%s\n", copy_2120);                                          /* Compliant    */
  printf("%s\n", str2_2120);                                          /* Compliant    */
  printf("%s\n", str3_2120);                                          /* expect: 2682 */

  return 1;
}


