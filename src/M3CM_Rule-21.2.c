/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.2.c
 *
 * Rule-21.2: A reserved identifier or macro name shall not be declared
 *
 * Implemented by message(s):
 *   0602   [U] The identifier '%s' is reserved for use by the library.
 *
 *   4602   The identifier '%1s' is declared as a macro in '<%2s>'.
 *
 *   4603   The object/function '%1s'is being defined with the same name as
 *          an ordinary identifier defined in '<%2s>'.
 *
 *   4604   The object/function '%1s' is being declared with the same name
 *          as an ordinary identifier defined in '<%2s>'.
 *
 *   4605   The typedef '%1s' is also defined in '<%2s>'.
 *
 *   4606   The typedef '%1s' has the same name as another ordinary
 *          identifier in '<%2s>'.
 *
 *   4607   The enum constant '%1s' has the same name as another ordinary
 *          identifier in '<%2s>'.
 *
 *   4608   The tag '%1s' is also defined in '<%2s>'.
 *
 *
 *//* PRQA S 0602,4602,4603,4604,4605,4606,4607,4608 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"


int16_t _reserved_2102;                                               /* expect:  0602 */
int16_t _Reserved_2102;                                               /* expect:  0602 */

enum { EOF = -1 };                                                    /* expect:  4602 */
uint32_t NULL = 1;                                                    /* expect:  4602 */
uint32_t Nil = 0;                                                     /* expect: !4602 */

static float32_t sqrt( float32_t d )                                  /* expect:  4603 */
{
  return (d);
}
int16_t memmove = 6;                                                  /* expect:  4603 */
int32_t memmove_2102;                                                 /* expect: !4603 */

static float32_t sqrt (float32_t d);                                  /* expect:  4604 */
extern int16_t memmove;                                               /* expect:  4604 */
static int16_t   rule_2102(void);                                     /* expect: !4604 */

enum { cos = 55 };                                                    /* expect:  4607 */
enum { Cosine = 55 };                                                 /* expect: !4607 */

typedef int32_t FILE;                                                 /* expect:  4605 */
typedef int32_t FilePtr;                                              /* expect: !4605 */

typedef uint16_t sin;                                                 /* expect:  4606 */
typedef uint16_t sintered;                                            /* expect: !4606 */

enum tm { t1, t2, t3 };                                               /* expect:  4608 */
enum Time { t4, t5, t6 };                                             /* expect: !4608 */

extern int16_t rule_2102 (void)
{
  enum tm r2102_a;
  enum Time r2102_b;
  return 1;
}


