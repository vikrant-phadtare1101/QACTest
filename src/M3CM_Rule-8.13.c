/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-8.13.c
 *
 * Rule-8.13: A pointer should point to a const-qualified type whenever possible
 *
 * Implemented by message(s):
 *   3673   The object addressed by the pointer parameter '%s' is not
 *          modified and so the pointer could be of type 'pointer to
 *          const'.
 *
 *
 *//* PRQA S 3673 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

static int16_t rule_0813a( int16_t pba[],
                       int16_t pbb[],
                       int16_t pbc[],
                       int16_t pbd[],
                       int16_t pbe[],
                       const int16_t * const p );

static void rule_0813b( int16_t *x );
static int16_t  rule_0813c( const int16_t *x );
static void rule_0813d( void );


extern int16_t rule_0813( void )
{
   const int16_t ci = 99;
   int16_t r0803_ba[3] = { 1, 2, 3 };
   int16_t r0803_bb[3] = { 1, 2, 3 };
   int16_t r0803_bc[3] = { 1, 2, 3 };
   int16_t r0803_bd[3] = { 1, 2, 3 };
   int16_t r0803_be[3] = { 1, 2, 3 };

   int16_t r;

   r = rule_0813a( r0803_ba, r0803_bb, r0803_bc, r0803_bd, r0803_be, &ci );

   return r;
}

static int16_t rule_0813a(
   int16_t pba[],
   int16_t pbb[],                                                     /* expect: 3673 */
   int16_t pbc[],                                                     /* expect: 3673 */
   int16_t pbd[],
   int16_t pbe[],                                                     /* expect: 3673 */
   const int16_t * const p )
{
   int16_t        r;
   int16_t       *pnc;
   const int16_t *pc;

   r = pba[ 1 ] + pbb[ 1 ] + pbc[ 1 ];

   rule_0813b( pba );                                                 /* Prototype indicates pba is an output parameter */
   r = rule_0813c( pbb );

   pnc = pbd;                                                         /* pbd is addressed by a pointer to non-const */
   *pnc = 1;

   pc = pbe;                                                          /* pbe is addressed by a pointer to const */

   rule_0813d();

   r = *p;

   return r;
}

static void rule_0813d( void )
{
   int16_t buf[300] = {0};

   int16_t * pa = buf;
   int16_t * pb = buf;
   int16_t * pc = buf;
   int16_t * pd = buf;
   int16_t * pe = buf;
   const int16_t * const r0813_p = buf;
   int16_t r;
   int16_t *pnc;
   const int16_t *pci;

   r = *pa + *pb + *pc;

   rule_0813b( pa );                                                  /* Prototype indicates pa is an output parameter */
   r = rule_0813c( pb );

   pnc = pd;                                                          /* pd is addressed by a pointer to non-const */
   *pnc = 1;

   pci = pe;                                                          /* pe is addressed by a pointer to const */

   r = *r0813_p;

   return;
}

static void rule_0813b( int16_t *x )
{
   *x = 0;
   return;
}

static int16_t rule_0813c( const int16_t *x )
{
   return *x;
}


