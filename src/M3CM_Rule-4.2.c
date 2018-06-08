/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-4.2.c
 *
 * Rule-4.2: Trigraphs should not be used
 *
 * Implemented by message(s):
 *   3601   Trigraphs (??x) are an ISO feature.
 *
 *
 *//* PRQA S 3601 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"


extern int16_t rule_0402( void )
{
   const char *pa =    { "??=" };                                     /* expect: 3601      */
   const char *pb =    { "??(" };                                     /* expect: 3601      */
   const char *pc =    { "??/a" };                                    /* expect: 3601      */
   const char *pd =    { "??/??/a" };                                 /* expect: 3601 3601 */
   const char *pe =    { "??)" };                                     /* expect: 3601      */
   const char *pf =    { "??'" };                                     /* expect: 3601      */
   const char *pg =    { "??<" };                                     /* expect: 3601      */
   const char *ph =    { "??!" };                                     /* expect: 3601      */
   const char *pi =    { "??>" };                                     /* expect: 3601      */
   const char *pj =    { "??-" };                                     /* expect: 3601      */
   const char *pk =    { "Date should be in the form ??-??-??" };     /* expect: 3601 3601 */

   return 1;
}


