/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-5.1.c
 *
 * Rule-5.1: External identifiers shall be distinct
 *
 * Implemented by message(s):
 *   0777   [U] External identifier does not differ from other
 *          identifier(s) (e.g. '%s') within the specified number of
 *          significant characters.
 *
 *
 *//* PRQA S 0777 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

     /* 1234567890123456789012345678901********* Characters */
int32_t engine_exhaust_gas_temperature_raw;
int32_t engine_exhaust_gas_temperature_scaled;                        /* expect: 0777 */      /* Non-compliant */

     /* 1234567890123456789012345678901********* Characters */
int32_t engine_exhaust_gas_temp_raw;
int32_t engine_exhaust_gas_temp_scaled;                               /* Compliant */


