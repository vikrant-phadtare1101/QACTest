/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Dir-4.1.c
 *
 * Dir-4.1: Run-time failures shall be minimized
 *
 * Implemented by message(s):
 *   2791   Definite: Right hand operand of shift operator is negative or
 *          too large.
 *
 *   2792   Apparent: Right hand operand of shift operator is negative or
 *          too large.
 *
 *   2801   Definite: Overflow in signed arithmetic operation.
 *
 *   2802   Apparent: Overflow in signed arithmetic operation.
 *
 *   2811   Definite: Dereference of NULL pointer.
 *
 *   2812   Apparent: Dereference of NULL pointer.
 *
 *   2821   Definite: Arithmetic operation on NULL pointer.
 *
 *   2822   Apparent: Arithmetic operation on NULL pointer.
 *
 *   2831   Definite: Division by zero.
 *
 *   2832   Apparent: Division by zero.
 *
 *   2841   Definite: Dereference of an invalid pointer value.
 *
 *   2842   Apparent: Dereference of an invalid pointer value.
 *
 *   2845   Constant: Maximum number of characters to be written is larger
 *          than the target buffer size.
 *
 *   2846   Definite: Maximum number of characters to be written is larger
 *          than the target buffer size.
 *
 *   2847   Apparent: Maximum number of characters to be written is larger
 *          than the target buffer size.
 *
 *   2871   Infinite loop identified.
 *
 *   2872   This loop, if entered, will never terminate.
 *
 *   2877   This loop will never be executed more than once.
 *
 *
 *//* PRQA S 2791,2792,2801,2802,2811,2812,2821,2822,2831,2832,2841,2842,2845,2846,2847,2871,2872,2877 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "misra.h"
#include "m3cmex.h"

int16_t s16a_d0401;                                                   /* expect: 1594,1594,1594,1594,1594 */
int16_t s16b_d0401;
uint16_t u16a_d0401;
uint16_t u16b_d0401;
int16_t * p16a_d0401;                                                 /* expect: 1594,1594 */
int16_t * p16b_d0401;
int16_t a16a_d0401[5];                                                /* expect: 1594,1594,1594,1594,1594,1594,1594,1594,1594 */
int16_t a16b_d0401[5];
bool_t ba_d0401;
bool_t bb_d0401;

static int16_t dir_0401a (int16_t val_d0401a)                         /* expect: 1594,1594,1594 */
{
  int16_t ret_d0401a;

  if (s16a_d0401 < 0)                                                 /* expect: 1575,1575 */
  {
    ret_d0401a = val_d0401a << s16a_d0401;                            /* expect: 2791 */
  }
  if (s16a_d0401 > 17)                                                /* expect: 1575 */
  {
    ret_d0401a = val_d0401a << s16a_d0401;                            /* expect: 2791 */
  }

  if (s16b_d0401 > 17)                                                /* expect: 1575 */
  {
  }
  ret_d0401a = val_d0401a << s16b_d0401;                              /* expect: 2792,    1574 */

  return ret_d0401a;
}

static int16_t dir_0401b (int16_t val_d0401b)                         /* expect: 1594,1594 */
{
  int16_t ret_d0401b;

  if (s16a_d0401 > 0xFF && val_d0401b > 0xFF)                         /* expect: 1575,1575,1575,1575 */
  {
    ret_d0401b = val_d0401b * s16a_d0401;                             /* expect: 2801 */
  }
  if (s16a_d0401 > 30000 && val_d0401b > 30000)                       /* expect: 1575,1575 */
  {
    ret_d0401b = val_d0401b + s16a_d0401;                             /* expect: 2801 */
  }

  if (s16b_d0401 > 0xFF && val_d0401b > 0xFF)                         /* expect: 1575,1575,1575,1575 */
  {
  }
  ret_d0401b = val_d0401b * s16b_d0401;                               /* expect: 2802,    1574 */
  if (s16a_d0401 > 10000 && val_d0401b > 10000)
  {
  }
  ret_d0401b = val_d0401b * s16b_d0401;                               /* expect: 2802,    1574 */

  return ret_d0401b;
}

static int16_t dir_0401c (void)
{
  int16_t ret_d0401c;

  if (p16a_d0401 == NULL)                                             /* expect: 1582 */
  {
    ret_d0401c = *p16a_d0401;                                         /* expect: 2811 */
  }

  if (p16b_d0401 == NULL)                                             /* expect: 1582 */
  {
  }
  ret_d0401c = *p16b_d0401;                                           /* expect: 2812,    1574 */

  return ret_d0401c;
}

static int16_t dir_0401d (int16_t val_d0401d)
{
  int16_t ret_d0401d;

  if (p16a_d0401 == NULL)                                             /* expect: 1582 */
  {
    ret_d0401d = p16a_d0401[val_d0401d];                              /* expect: 2821 */
  }

  if (p16b_d0401 == NULL)                                             /* expect: 1582 */
  {
  }
  ret_d0401d = p16b_d0401[val_d0401d];                                /* expect: 2822,    1574 */

  return ret_d0401d;
}

static int16_t dir_0401e (int16_t val_d0401e)
{
  int16_t ret_d0401e;

  if (s16a_d0401 == 0)                                                /* expect: 1575 */
  {
    ret_d0401e = val_d0401e / s16a_d0401;                             /* expect: 2831 */
  }

  if (s16b_d0401 == 0)                                                /* expect: 1575 */
  {
  }
  ret_d0401e = val_d0401e / s16b_d0401;                               /* expect: 2832,    1574 */

  return ret_d0401e;
}

static int16_t dir_0401f (int16_t val_d0401f)                         /* expect: 1594,1594 */
{
  int16_t ret_d0401f;

  if (val_d0401f >= 5)                                                /* expect: 1575,1575,1575,1575 */
  {
    ret_d0401f = a16a_d0401[val_d0401f];                              /* expect: 2841 */
  }
  if (val_d0401f < 0)                                                 /* expect: 1575,1575,1575 */
  {
    ret_d0401f = a16a_d0401[val_d0401f];                              /* expect: 2841 */
  }

  if (val_d0401f >= 5)                                                /* expect: 1575,1575 */
  {
  }
  ret_d0401f = a16a_d0401[val_d0401f];                                /* expect: 2842,    1574,1574,1574 */
  if (val_d0401f < 0)                                                 /* expect: 1575 */
  {
  }
  ret_d0401f = a16a_d0401[val_d0401f];                                /* expect: 2842,    1574,1574,1574,1574 */

  return ret_d0401f;
}

static int16_t dir_0401g (void)
{
  int16_t ret_d0401g;

  char dst_d0401g[5];                                                 /* expect: 1594,1594,1594,1594,1594,1594 */
  char src_d0401g[6] = "hello";

  dst_d0401g[0] = '\0';
  strncpy (dst_d0401g, src_d0401g, sizeof(src_d0401g));               /* expect: 2845 */
  dst_d0401g[0] = '\0';
  strncat (dst_d0401g, src_d0401g, sizeof(src_d0401g));               /* expect: 2845 */

  if (s16a_d0401 > sizeof(dst_d0401g))                                /* expect: 1575 */
  {
    dst_d0401g[0] = '\0';
    strncpy (dst_d0401g, src_d0401g, s16a_d0401);                     /* expect: 2846,    1575 */
  }
  if (s16a_d0401 > sizeof(dst_d0401g))                                /* expect: 1575 */
  {
    dst_d0401g[0] = '\0';
    strncat (dst_d0401g, src_d0401g, s16a_d0401);                     /* expect: 2846 */
  }

  if (s16b_d0401 > sizeof(dst_d0401g))                                /* expect: 1575 */
  {
  }
  dst_d0401g[0] = '\0';
  strncpy (dst_d0401g, src_d0401g, s16b_d0401);                       /* expect: 2847,    1574 */
  if (s16b_d0401 > sizeof(dst_d0401g))                                /* expect: 1575 */
  {
  }
  dst_d0401g[0] = '\0';
  strncat (dst_d0401g, src_d0401g, s16b_d0401);                       /* expect: 2847,    1574 */

  return ret_d0401g;
}

static int16_t dir_0401h (int16_t val_d0401h)
{
  int16_t ret_d0401h;

  if (ba_d0401)
  {
    for (val_d0401h = 1; val_d0401h != 0; -- u16a_d0401)              /* expect: 2871 */
    {
    }
  }

  if (bb_d0401)
  {
    while (u16b_d0401 < 10)                                           /* expect: 2872 */
    {
    }
  }

  ret_d0401h = 1;
  while (ret_d0401h > 0)                                              /* expect: 2877 */
  {
    -- ret_d0401h;                                                    /* expect: 1575 */
  }

  for (val_d0401h = 1; val_d0401h != 0; -- val_d0401h)                /* expect: 2877,    1575 */
  {
  }

  return ret_d0401h;
}

extern int16_t dir_0401 (void)
{
  int16_t ret_d0401 = s16a_d0401;

  ret_d0401 += dir_0401a (s16b_d0401);
  ret_d0401 += dir_0401b (s16b_d0401);                                /* expect: 1575 */
  ret_d0401 += dir_0401c ();
  ret_d0401 += dir_0401d (s16b_d0401);
  ret_d0401 += dir_0401e (s16b_d0401);
  ret_d0401 += dir_0401f (s16b_d0401);
  ret_d0401 += dir_0401g ();
  ret_d0401 += dir_0401h (s16b_d0401);

  return ret_d0401;
}


