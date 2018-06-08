/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Dir-4.10-bad1.h
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


#include "misra.h"

typedef int16_t bad1;

#ifndef DIR_0410_BAD1_H
#define DIR_0410_BAD1_H

#include "misra.h"

#endif                                                                /* expect+1: 0883 */

