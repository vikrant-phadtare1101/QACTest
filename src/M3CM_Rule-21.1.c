/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.1.c
 *
 * Rule-21.1: #define and #undef shall not be used on a reserved identifier or
 *            reserved macro name
 *
 * Implemented by message(s):
 *   0603   [U] The macro identifier '%s' is reserved.
 *
 *   0836   [U] Definition of macro named 'defined'.
 *
 *   0848   [U] Attempting to #undef '%s', which is a predefined macro
 *          name.
 *
 *   0854   [U] Attempting to #define '%s', which is a predefined macro
 *          name.
 *
 *   4600   The macro '%1s' is also defined in '<%2s>'.
 *
 *   4601   The macro '%1s' is the name of an identifier in '<%2s>'.
 *
 *   4620   The macro '%1s' may also be defined as a macro in '<%2s>'.
 *
 *   4621   The macro '%1s' may also be defined as a typedef in '<%2s>'.
 *
 *
 *//* PRQA S 0603,0836,0848,0854,4600,4601,4620,4621 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"


#define _reserved                                                     /* expect: 0603 */
#define _Reserved                                                     /* expect: 0603 */

#define defined ! defined                                             /* expect: 0836 */

#undef __LINE__                                                       /* expect: 0603,0848 */
#undef __FILE__                                                       /* expect: 0603,0848 */
#undef __DATE__                                                       /* expect: 0603,0848 */
#undef __TIME__                                                       /* expect: 0603,0848 */
#undef __STDC__                                                       /* expect: 0603,0848 */

#define __LINE__ 1                                                    /* expect: 0603,0854 */
#define __FILE__ "default"                                            /* expect: 0603,0854 */
#define __DATE__ "01-01-2000"                                         /* expect: 0603,0854 */
#define __TIME__ "00:00:00"                                           /* expect: 0603,0854 */
#define __STDC__                                                      /* expect: 0603,0854 */

#define NULL (void *)0                                                /* expect: 4600 */
#define EDOM 22                                                       /* expect: 4600 */
#define tan 1                                                         /* expect: 4601 */
#define printf xprintf                                                /* expect: 4601 */

#define INT23_MAX 4194303                                             /* expect: 4620 */
#define int23_t int32_t                                               /* expect: 4621 */
#define uint23_t uint32_t                                             /* expect: 4621 */

extern int16_t rule_2101 (void)
{
  return 1;
}


