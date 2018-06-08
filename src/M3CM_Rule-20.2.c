/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-20.2.c
 *
 * Rule-20.2: The ', " or \ characters and the /* or // character sequences shall
 *            not occur in a header file name
 *
 * Implemented by message(s):
 *   0813   [U] Using any of the characters ' " or /* in '#include <%s>'
 *          gives undefined behaviour.
 *
 *   0814   [U] Using the characters ' or /* in '#include "%s"' gives
 *          undefined behaviour.
 *
 *   0831   [E] Use of '\\' in this '#include' line is a PC extension -
 *          this usage is non-portable.
 *
 *
 *//* PRQA S 0813,0814,0831 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

#if 0
/* No header files exist which correspond to
   the following #include directives.
   QAC will generate Hard Errors (Level 9)
   if this code block is not excluded      */

#include <John's.h>                                                   /* expect: 0813 */
#include <Fred.h/*temporary*/>                                        /* expect: 0813 */

#include "John's.h"                                                   /* expect: 0814 */
#include "Fred.h/*temporary*/"                                        /* expect: 0814 */

#include ".\abc.h"                                                    /* expect: 0831 */

#endif

extern int16_t rule_2002 (void)
{
  return 1;
}


