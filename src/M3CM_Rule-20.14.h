/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-20.14.h
 *
 * Rule-20.14: All #else, #elif and #endif preprocessor directives shall reside in
 *             the same file as the #if, #ifdef or #ifndef directive to which
 *             they are related
 *
 * Implemented by message(s):
 *   3317   '#if...' not matched by '#endif' in included file. This is
 *          probably an error.
 *
 *   3318   '#else'/'#elif'/'#endif' in included file matched '#if...' in
 *          parent file. This is probably an error.
 *
 *
 *//* PRQA S 3317,3318 -- *//*
 * <<<------------------------------------------------------------ */



/* Following #endif matches #if in parent file */

#endif                                                                /* expect:  3318 */

#if 1                                                                 /* expect: !3317 */
#endif                                                                /* expect: !3318 */

/* Following #if is not matched in this file */

#if 1                                                                 /* expect+2:  3317 */

