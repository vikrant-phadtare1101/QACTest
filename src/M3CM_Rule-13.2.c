/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-13.2.c
 *
 * Rule-13.2: The value of an expression and its persistent side-effects shall be
 *            the same under all permitted evaluation orders
 *
 * Implemented by message(s):
 *   0400   [U] '%s' is modified more than once between sequence points -
 *          evaluation order unspecified.
 *
 *   0401   [U] '%s' may be modified more than once between sequence points
 *          - evaluation order unspecified.
 *
 *   0402   [U] '%s' is modified and accessed between sequence points -
 *          evaluation order unspecified.
 *
 *   0403   [U] '%s' may be modified and accessed between sequence points -
 *          evaluation order unspecified.
 *
 *   0404   More than one read access to volatile objects between sequence
 *          points.
 *
 *   0405   More than one modification of volatile objects between sequence
 *          points.
 *
 *
 *//* PRQA S 0400,0401,0402,0403,0404,0405 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"


static int16_t rule_1302a( int16_t *p );
static int16_t rule_1302b( int16_t *p );
static int16_t rule_1302c( const int16_t *p );

extern int16_t rule_1302( void )
{
   int16_t       x = 5;
   int16_t       y = 10;
   volatile int16_t vx = 5;
   volatile int16_t vy = 5;

   x = y + ( x++ );                                                   /* expect: 0400 */
   y = rule_1302a( &x ) + ( x++ );                                    /* expect: 0401 */
   y = ( x + 6 ) / ( x++ );                                           /* expect: 0402 */
   y = rule_1302a( &x ) + x;                                          /* expect: 0403 */
   y = vx + vy;                                                       /* expect: 0404 */
   y = (vx++) + (vy++);                                               /* expect: 0404 0405*/

   return 1;
}

static int16_t rule_1302a( int16_t *p )
{
   *p = 1;

   return 1;
}


