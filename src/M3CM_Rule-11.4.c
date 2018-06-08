/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-11.4.c
 *
 * Rule-11.4: A conversion should not be performed between a pointer to object and
 *            an integer type
 *
 * Implemented by message(s):
 *   0303   [I] Cast between a pointer to volatile object and an integral
 *          type.
 *
 *   0306   [I] Cast between a pointer to object and an integral type.
 *
 *   0360   An expression of pointer type is being converted to type _Bool
 *          on assignment.
 *
 *   0361   An expression of pointer type is being cast to type _Bool.
 *
 *   0362   An expression of essentially Boolean type is being cast to a
 *          pointer.
 *
 *
 *//* PRQA S 0303,0306,0360,0361,0362 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

BL r1104_bla;
uint32_t r1104_uia;

extern int16_t rule_1104 ( void )
{
    volatile uint16_t * pvui;
             uint16_t * puim;
    volatile uint16_t vui = r1104_uia;
    pvui = (volatile uint16_t *) 0x1234U;                             /* expect: 0303 */
    puim = (uint16_t *) 0x1234U;                                      /* expect: 0306 */
    r1104_bla = puim;                                                 /* expect: 0360 */
    r1104_bla = (_Bool)puim;                                          /* expect: 0361 */
    puim = (uint16_t *) r1104_bla;                                    /* expect: 0362 */


    return 0;
}


