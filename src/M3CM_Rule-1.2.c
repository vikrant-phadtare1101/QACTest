/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-1.2.c
 *
 * Rule-1.2: Language extensions should not be used
 *
 * Implemented by message(s):
 *   0240   [E] This file contains the control-M character at the end of a
 *          line.
 *
 *   0241   [E] This file contains the control-Z character - was this
 *          transferred from a PC?
 *
 *   0246   [E] Binary integer constants are a language extension.
 *
 *   0551   [E] Cast may not operate on the left operand of the assignment
 *          operator.
 *
 *   0601   [E] Function 'main()' is not of type 'int (void)' or 'int (int,
 *          char *[])'.
 *
 *   0633   [E] Empty structures and unions are a language extension.
 *
 *   0635   [E] Bit-fields in this struct/union have been declared with
 *          types other than int, signed int, unsigned int or _Bool.
 *
 *   0660   [E] Defining an unnamed member in a struct or union. This is a
 *          language extension.
 *
 *   0662   [E] Accessing a member of an unnamed struct or union member in
 *          this way is a language extension.
 *
 *   0830   [E] Unrecognized text encountered after a preprocessing
 *          directive.
 *
 *   0831   [E] Use of '\\' in this '#include' line is a PC extension -
 *          this usage is non-portable.
 *
 *   0840   [E] Extra tokens at end of #include directive.
 *
 *   0883   The include guard is not self-contained.
 *
 *   0899   [E] Unrecognized preprocessing directive has been ignored -
 *          assumed to be a language extension.
 *
 *   0981   [E] Redundant semicolon in 'struct' or 'union' member
 *          declaration list is a language extension.
 *
 *   1001   [E] '#include %s' is a VMS extension.
 *
 *   1002   [E] '%s' is not a legal identifier in ISO C.
 *
 *   1003   [E] '#%s' is a language extension for in-line assembler. All
 *          statements located between #asm and #endasm will be
 *          ignored.
 *
 *   1006   [E] This in-line assembler construct is a language extension.
 *          The code has been ignored.
 *
 *   1008   [E] '#%s' is not a legal ISO C preprocessing directive.
 *
 *   1012   [E] Use of a C++ reference type ('type &') will be treated as a
 *          language extension.
 *
 *   1014   [E] Non-standard type specifier - this will be treated as a
 *          language extension.
 *
 *   1015   [E] '%s' is not a legal keyword in ISO C - this will be treated
 *          as a language extension.
 *
 *   1019   [E] '@ address' is not supported in ISO C - this will be
 *          treated as a language extension.
 *
 *   1020   [E] '__typeof__' is not supported in ISO C, and is treated as a
 *          language extension.
 *
 *   1021   [E] A statement expression is not supported in ISO C, and is
 *          treated as a language extension.
 *
 *   1022   [E] '__alignof__' is not supported in ISO C, and is treated as
 *          a language extension.
 *
 *   1026   [E] The indicated @word construct has been ignored.
 *
 *   1028   [E] Use of the sizeof operator in a preprocessing directive is
 *          a language extension.
 *
 *   1029   [E] Whitespace encountered between backslash and new-line has
 *          been ignored.
 *
 *   1034   [E] Macro defined with named variable argument list. This is a
 *          language extension.
 *
 *   1035   [E] No macro arguments supplied for variable argument list.
 *          This is a language extension.
 *
 *   1036   [E] Comma before ## ignored in expansion of variadic macro.
 *          This is a language extension.
 *
 *   1037   [E] Arrays of length zero are a language extension.
 *
 *   1038   [E] The sequence ", ##__VA_ARGS__" is a language extension.
 *
 *   1039   [E] Treating array of length one as potentially flexible
 *          member.
 *
 *   1041   [E] Empty aggregate initializers are a language extension.
 *
 *   1042   [E] Using I64 or UI64 as an integer constant suffix. This is a
 *          language extension.
 *
 *   1043   [E] Defining an anonymous union object. This is a language
 *          extension.
 *
 *   1044   [E] Defining an anonymous struct object. This is a language
 *          extension.
 *
 *   1045   [E] Use of the #include_next preprocessing directive is a
 *          language extension.
 *
 *   1046   [E] Function is being declared with default argument syntax.
 *          This is a language extension.
 *
 *   1049   [E] Nested functions are a language extension.
 *
 *   3445   [E] Conditional expression with middle operand omitted is a
 *          language extension.
 *
 *   3664   [E] Using a dot operator to access an individual bit is a
 *          language extension.
 *
 *
 *//* PRQA S 0240,0241,0246,0551,0601,0633,0635,0660,0662,0830,0831,0840,0883,0899,0981,1001,1002,1003,1006,1008,1012,1014,1015,1019,1020,1021,1022,1026,1028,1029,1034,1035,1036,1037,1038,1039,1041,1042,1043,1044,1045,1046,1049,3445,3664 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

struct rule_0102_struct { } ;                                         /* expect:  0633  */

extern int16_t rule_0102( void )
{
   int16_t a[10] = { } ;                                              /* expect:  1041 */
   struct rule_0102_struct * volatile b;
   b;
   return a[0];
}


