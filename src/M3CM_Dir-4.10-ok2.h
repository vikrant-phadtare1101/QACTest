/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Dir-4.10-ok2.h
 *
 * Dir-4.10: Precautions shall be taken in order to prevent the contents of a
 *           header file being included more then once
 *
 * Implemented by message(s):
 *   0883   Include file code is not protected against repeated inclusion
 *
 *
 *//* PRQA S 0883 -- *//*
 * <<<------------------------------------------------------------ */


#if !defined (DIR_0410_OK2_H)                                         /* expect: !0883 */

       /* Comments and whitespace */

#define DIR_0410_OK2_H

#include "misra.h"

typedef int16_t ok2;

#endif

