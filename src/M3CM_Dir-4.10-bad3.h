/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Dir-4.10-bad3.h
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


#ifndef DIR_0410_BAD3_H                                               /* expect: 0883 */
#define DIR_0410_BAD_H

typedef int16_t bad4;

#include "misra.h"

#endif

