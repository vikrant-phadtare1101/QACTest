/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-5.5.c
 *
 * Rule-5.5: Identifiers shall be distinct from macro names
 *
 * Implemented by message(s):
 *   0784   Identifier '%s' is also used as a macro name.
 *
 *   0785   Identifier matches other macro name(s) (e.g. '%s') in first 31
 *          characters.
 *
 *   0786   Identifier matches other macro name(s) (e.g. '%s') in first 63
 *          characters.
 *
 *   0787   Identifier does not differ from other macro name(s) (e.g. '%s')
 *          within the specified number of significant characters.
 *
 *
 *//* PRQA S 0784,0785,0786,0787 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdio.h>
#include "misra.h"
#include "m3cmex.h"

            /* 1234567890123456789012345678901********* Characters */
#define        low_pressure_turbine_temperature_1 lp_tb_temp_1
static int32_t low_pressure_turbine_temperature_2;                    /* expect: 0785 0787 */      /* Not compliant */

            /* 1234567890123456789012345678901234567890123456789012345678901234567890123********* Characters */
#define        new_turbine_model_improved_bypass_stage_low_pressure_turbine_temperature_1 lp_tb_temp_1
static int32_t new_turbine_model_improved_bypass_stage_low_pressure_turbine_temperature_2;     /* expect: 0785 0786 0787 */      /* Not compliant */



int32_t Mix (int32_t r0505_x, int32_t r0505_y)                        /* expect: 0784  */      /* Not compliant */
{
return r0505_x + r0505_y;
}

#define Mix(r0505_x, r0505_y) ((r0505_x) * (r0505_y))

int32_t r0505_foo (void)
{
return Mix (2, 3); 														/* here Mix (2, 3) is 6 */
}

/* Case 2 (non-compliant) ==> macro overrides preceding identifier */

int32_t r0505_foo2 (void)
{
int32_t r0505_z = 1;                                                  /* expect: 0784  */      /* Not compliant */
int32_t r0505_t = 2;
#define r0505_z r0505_t
return r0505_z; 				         								/* here r0505_x is 2 */
}

/* Case 3 (non-compliant) ==> function like macro does not replace following identifier */

#define r0505_p(r0505_q) (r0505_q)

int32_t r0505_p = 2;                                                  /* expect: 0784  */      /* Not compliant */

int32_t foo3 (void)
{
return r0505_p + r0505_p(3); 											/* here r0505_y is 2 and r0505_y(3) is 3 */
}


