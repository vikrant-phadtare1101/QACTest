/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-21.3.c
 *
 * Rule-21.3: The memory allocation and deallocation functions of <stdlib.h> shall
 *            not be used
 *
 * Implemented by message(s):
 *   5118   Use of memory allocation or deallocation function: calloc,
 *          malloc, realloc or free.
 *
 *
 *//* PRQA S 5118 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdlib.h>
#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_2103( void )
{
   int8_t * ptr_2103;
   uint32_t size_2103 = 4u;

   ptr_2103 = malloc(size_2103);                                      /* expect:  5118 */
   free(ptr_2103);                                                    /* expect:  5118 */

   ptr_2103 = calloc(10U, size_2103);                                 /* expect:  5118 */
   ptr_2103 = realloc(ptr_2103, size_2103);                           /* expect:  5118 */

   if (!ptr_2103)
   {
     exit(1);                                                         /* expect: !5118 */
   }

   return 1;
}


