/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-12.4.c
 *
 * Rule-12.4: Evaluation of constant expressions should not lead to unsigned
 *            integer wrap-around
 *
 * Implemented by message(s):
 *   2910   Constant: Wraparound in unsigned arithmetic operation.
 *
 *
 *//* PRQA S 2910 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_1204( void )
{
   0x1U - 0x2U;                    /* 2910 */
   return 0;
}


