/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-20.3.c
 *
 * Rule-20.3: The #include directive shall be followed by either a <filename> or
 *            "filename" sequence
 *
 * Implemented by message(s):
 *   0817   [S] Closing quote or bracket '>' missing from include filename.
 *
 *   0821   [C] '#include' does not identify a header or source file that
 *          can be processed.
 *
 *   0840   [E] Extra tokens at end of #include directive.
 *
 *
 *//* PRQA S 0817,0821,0840 -- *//*
 * <<<------------------------------------------------------------ */


#define A "misra.h"
#define B "m3cmex.h"

#include A                                      /* OK */
#include B                                      /* OK */
#include "misra.h"                              /* OK */

#if 0
/* QAC will generate Hard Errors (Level 9)
   if this code block is not excluded      */

                                                                      /* expect+1: 0817 */
#include <misra.h
                                                                      /* expect+1: 0817 */
#include "misra.h

#include misra.h                                        /* would-expect: 0821 */
#include ?                                              /* would-expect: 0821 */

#include "misra.h" extra                                              /* expect: 0840 */
#include "misra" ".h"                                                 /* expect: 0840 */
#endif


extern int16_t rule_2003 (void)
{
  return 1;
}


