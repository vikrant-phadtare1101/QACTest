/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-5.4.c
 *
 * Rule-5.4: Macro identifiers shall be distinct
 *
 * Implemented by message(s):
 *   0788   This identifier, '%s', is used as both a macro name and a
 *          function-like macro parameter name.
 *
 *   0791   [U] Macro identifier does not differ from other macro
 *          identifier(s) (e.g. '%s') within the specified number of
 *          significant characters.
 *
 *
 *//* PRQA S 0788,0791 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

     /* 1234567890123456789012345678901********* Characters */
#define engine_exhaust_gas_temperature_raw egt_r
#define engine_exhaust_gas_temperature_scaled egt_s                     /* expect: 0791  */

     /* 123456789012345678901234567890123456789012345678901234567890123********* Characters */
#define new_model_car_engine_electronic_exhaust_control_exhaust_gas_temp new_egt_r
#define new_model_car_engine_electronic_exhaust_control_exhaust_gas_temp_gradient new_egt_grd_r    /* expect: 0791  */

#define engine_exhaust_gas_temp_raw egt_r
#define engine_exhaust_gas_temp_scaled egt_s

#define engine_macro_power 1000
#define engine_macro_func(engine_macro_power)   engine_macro_power * engine_macro_power          /* expect: 0788 */


