/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-10.5.c
 *
 * Rule-10.5: The value of an expression should not be cast to an inappropriate
 *            essential type
 *
 * Implemented by message(s):
 *   4301   An expression of 'essentially Boolean' type (%1s) is being cast
 *          to character type '%2s'.
 *
 *   4302   An expression of 'essentially Boolean' type (%1s) is being cast
 *          to enum type '%2s'.
 *
 *   4303   An expression of 'essentially Boolean' type (%1s) is being cast
 *          to signed type '%2s'.
 *
 *   4304   An expression of 'essentially Boolean' type (%1s) is being cast
 *          to unsigned type '%2s'.
 *
 *   4305   An expression of 'essentially Boolean' type (%1s) is being cast
 *          to floating type '%2s'.
 *
 *   4310   An expression of 'essentially character' type (%1s) is being
 *          cast to Boolean type, '%2s'.
 *
 *   4312   An expression of 'essentially character' type (%1s) is being
 *          cast to enum type, '%2s'.
 *
 *   4315   An expression of 'essentially character' type (%1s) is being
 *          cast to floating type, '%2s'.
 *
 *   4320   An expression of 'essentially enum' type (%1s) is being cast to
 *          Boolean type, '%2s'.
 *
 *   4322   An expression of 'essentially enum' type (%1s) is being cast to
 *          a different enum type, '%2s'.
 *
 *   4330   An expression of 'essentially signed' type (%1s) is being cast
 *          to Boolean type '%2s'.
 *
 *   4332   An expression of 'essentially signed' type (%1s) is being cast
 *          to enum type, '%2s'.
 *
 *   4340   An expression of 'essentially unsigned' type (%1s) is being
 *          cast to Boolean type '%2s'.
 *
 *   4342   An expression of 'essentially unsigned' type (%1s) is being
 *          cast to enum type '%2s'.
 *
 *   4350   An expression of 'essentially floating' type (%1s) is being
 *          cast to Boolean type '%2s'.
 *
 *   4351   An expression of 'essentially floating' type (%1s) is being
 *          cast to character type '%2s'.
 *
 *   4352   An expression of 'essentially floating' type (%1s) is being
 *          cast to enum type, '%2s'.
 *
 *
 *//* PRQA S 4301,4302,4303,4304,4305,4310,4312,4315,4320,4322,4330,4332,4340,4342,4350,4351,4352 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

BL r1005_bla;
PC r1005_pca;
N1 r1005_ea;
int32_t r1005_sia;
uint32_t r1005_uia;
float32_t r1005_fta;


extern int16_t rule_1005( void )
{
    (PC)r1005_bla;                                                    /* expect: 4301 */
    (N1)r1005_bla;                                                    /* expect: 4302 */
    (SI)r1005_bla;                                                    /* expect: 4303 */
    (UI)r1005_bla;                                                    /* expect: 4304 */
    (FT)r1005_bla;                                                    /* expect: 4305 */

    (BL)r1005_pca;                                                    /* expect: 4310 */
    (N1)r1005_pca;                                                    /* expect: 4312 */
    (FT)r1005_pca;                                                    /* expect: 4315 */

    (BL)r1005_ea;                                                     /* expect: 4320 */
    (N2)r1005_ea;                                                     /* expect: 4322 */

    (BL)r1005_sia;                                                    /* expect: 4330 */
    (N1)r1005_sia;                                                    /* expect: 4332 */

    (BL)r1005_uia;                                                    /* expect: 4340 */
    (N1)r1005_uia;                                                    /* expect: 4342 */

    (BL)r1005_fta;                                                    /* expect: 4350 */
    (PC)r1005_fta;                                                    /* expect: 4351 */
    (N1)r1005_fta;                                                    /* expect: 4352 */

    return 0;
}


