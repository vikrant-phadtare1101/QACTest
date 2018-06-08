/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-10.8.c
 *
 * Rule-10.8: The value of a composite expression shall not be cast to a different
 *            essential type category or a wider essential type
 *
 * Implemented by message(s):
 *   4389   A composite expression of 'essentially char' type (%1s) is
 *          being cast to a different type category, '%2s'.
 *
 *   4390   A composite expression of 'essentially signed' type (%1s) is
 *          being cast to a wider signed type, '%2s'.
 *
 *   4391   A composite expression of 'essentially unsigned' type (%1s) is
 *          being cast to a wider unsigned type, '%2s'.
 *
 *   4392   A composite expression of 'essentially floating' type (%1s) is
 *          being cast to a wider floating type, '%2s'.
 *
 *   4393   A composite expression of 'essentially signed' type (%1s) is
 *          being cast to a different type category, '%2s'.
 *
 *   4394   A composite expression of 'essentially unsigned' type (%1s) is
 *          being cast to a different type category, '%2s'.
 *
 *   4395   A composite expression of 'essentially floating' type (%1s) is
 *          being cast to a different type category, '%2s'.
 *
 *   4398   An expression which is the result of a ~ or << operation has
 *          been cast to a different essential type category.
 *
 *   4399   An expression which is the result of a ~ or << operation has
 *          been cast to a wider type.
 *
 *
 *//* PRQA S 4389,4390,4391,4392,4393,4394,4395,4398,4399 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

PC r1008_pca;
SC r1008_sca;
SC r1008_scb;
UC r1008_uca;
UC r1008_ucb;
float32_t r1008_fta;
float32_t r1008_ftb;

extern int16_t rule_1008( void )
{
    (SI)(r1008_pca - 1);                                              /* expect: 4389 */
    (SI)(r1008_sca + r1008_scb);                                      /* expect: 4390 */
    (UI)(r1008_uca + r1008_ucb);                                      /* expect: 4391 */
    (DB)(r1008_fta + r1008_ftb);                                      /* expect: 4392 */
    (UI)(r1008_sca + r1008_scb);                                      /* expect: 4393 */
    (DB)(r1008_uca + r1008_ucb);                                      /* expect: 4394 */
    (SI)(r1008_fta + r1008_ftb);                                      /* expect: 4395 */
    (DB)(~r1008_uca);                                                 /* expect: 4398 */
    (UI)(~r1008_uca);                                                 /* expect: 4399 */

    return 0;
}


