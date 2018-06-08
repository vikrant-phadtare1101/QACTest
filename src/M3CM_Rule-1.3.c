/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-1.3.c
 *
 * Rule-1.3: There shall be no occurrence of undefined or critical unspecified
 *           behaviour
 *
 * Implemented by message(s):
 *   0160   [U] Using unsupported conversion specifier number %s.
 *
 *   0161   [U] Unknown length modifier used with 'i' or 'd' conversion
 *          specifier, number %s.
 *
 *   0162   [U] Unknown length modifier used with 'o' conversion specifier,
 *          number %s.
 *
 *   0163   [U] Unknown length modifier used with 'u' conversion specifier,
 *          number %s.
 *
 *   0164   [U] Unknown length modifier used with 'x' conversion specifier,
 *          number %s.
 *
 *   0165   [U] Unknown length modifier used with 'X' conversion specifier,
 *          number %s.
 *
 *   0166   [U] Unknown length modifier used with 'f' conversion specifier,
 *          number %s.
 *
 *   0167   [U] Unknown length modifier used with 'e' conversion specifier,
 *          number %s.
 *
 *   0168   [U] Unknown length modifier used with 'E' conversion specifier,
 *          number %s.
 *
 *   0169   [U] Unknown length modifier used with 'g' conversion specifier,
 *          number %s.
 *
 *   0170   [U] Unknown length modifier used with 'G' conversion specifier,
 *          number %s.
 *
 *   0171   [U] Unknown length modifier used with 'c' conversion specifier,
 *          number %s.
 *
 *   0172   [U] Unknown length modifier used with '%%' conversion
 *          specifier, number %s.
 *
 *   0173   [U] Unknown length modifier used with 's' conversion specifier,
 *          number %s.
 *
 *   0174   [U] Unknown length modifier used with 'n' conversion specifier,
 *          number %s.
 *
 *   0175   [U] Unknown length modifier used with 'p' conversion specifier,
 *          number %s.
 *
 *   0176   [U] Incomplete conversion specifier, number %s.
 *
 *   0177   [U] Field width of format conversion specifier exceeds 509
 *          characters.
 *
 *   0178   [U] Precision of format conversion specifier exceeds 509
 *          characters.
 *
 *   0179   [U] Argument type does not match conversion specifier number
 *          %s.
 *
 *   0184   [U] Insufficient arguments to satisfy conversion specifier,
 *          number %s.
 *
 *   0185   [U] Call contains more arguments than conversion specifiers.
 *
 *   0186   [U] A call to this function must include at least one argument.
 *
 *   0190   [U] Using unsupported conversion specifier number %s.
 *
 *   0191   [U] Unknown length modifier used with 'd/i/n' conversion
 *          specifier, number %s.
 *
 *   0192   [U] Unknown length modifier used with 'o' conversion specifier,
 *          number %s.
 *
 *   0193   [U] Unknown length modifier used with 'u' conversion specifier,
 *          number %s.
 *
 *   0194   [U] Unknown length modifier used with 'x/X' conversion
 *          specifier, number %s.
 *
 *   0195   [U] Unknown length modifier used with 'e/E/f/F/g/G' conversion
 *          specifier, number %s.
 *
 *   0196   [U] Unknown length modifier used with 's' conversion specifier,
 *          number %s.
 *
 *   0197   [U] Unknown length modifier used with 'p' conversion specifier,
 *          number %s.
 *
 *   0198   [U] Unknown length modifier used with '%%' conversion
 *          specifier, number %s.
 *
 *   0199   [U] Unknown length modifier used with '[' conversion specifier,
 *          number %s.
 *
 *   0200   [U] Unknown length modifier used with 'c' conversion specifier,
 *          number %s.
 *
 *   0201   [U] Incomplete conversion specifier, number %s.
 *
 *   0203   [U] Value of character prior to '-' in '[]' is greater than
 *          following character.
 *
 *   0204   [U] Field width of format conversion specifier exceeds 509
 *          characters.
 *
 *   0206   [U] Argument type does not match conversion specifier number
 *          %s.
 *
 *   0207   [U] 'scanf' expects address of objects being stored into.
 *
 *   0208   [U] Same character occurs in scanset more than once.
 *
 *   0235   [U] Unknown escape sequence.
 *
 *   0275   [U] Floating value is out of range for conversion to
 *          destination type.
 *
 *   0301   [u] Cast between a pointer to object and a floating type.
 *
 *   0302   [u] Cast between a pointer to function and a floating type.
 *
 *   0304   [U] The address of an array declared 'register' may not be
 *          computed.
 *
 *   0307   [u] Cast between a pointer to object and a pointer to function.
 *
 *   0309   [U] Integral type is not large enough to hold a pointer value.
 *
 *   0327   [I] Cast between a pointer to void and an floating type.
 *
 *   0337   [U] String literal has undefined value. This may be a result of
 *          using '#' on \\.
 *
 *   0400   [U] '%s' is modified more than once between sequence points -
 *          evaluation order unspecified.
 *
 *   0401   [U] '%s' may be modified more than once between sequence points
 *          - evaluation order unspecified.
 *
 *   0402   [U] '%s' is modified and accessed between sequence points -
 *          evaluation order unspecified.
 *
 *   0403   [U] '%s' may be modified and accessed between sequence points -
 *          evaluation order unspecified.
 *
 *   0404   More than one read access to volatile objects between sequence
 *          points.
 *
 *   0405   More than one modification of volatile objects between sequence
 *          points.
 *
 *   0475   [u] Operand of 'sizeof' is an expression designating a bit-
 *          field.
 *
 *   0543   [U] 'void' expressions have no value and may not be used in
 *          expressions.
 *
 *   0544   [U] The value of an incomplete 'union' may not be used.
 *
 *   0545   [U] The value of an incomplete 'struct' may not be used.
 *
 *   0602   [U] The identifier '%s' is reserved for use by the library.
 *
 *   0603   [U] The macro identifier '%s' is reserved.
 *
 *   0623   [U] '%s' has incomplete type and no linkage - this is
 *          undefined.
 *
 *   0625   [U] '%s' has been declared with both internal and external
 *          linkage - the behaviour is undefined.
 *
 *   0626   [U] '%s' has different type to previous declaration (which is
 *          no longer in scope).
 *
 *   0630   [U] More than one definition of '%s' (with external linkage).
 *
 *   0632   [U] Tentative definition of '%s' with internal linkage cannot
 *          have unknown size.
 *
 *   0636   [U] There are no named members in this 'struct' or 'union'.
 *
 *   0654   [U] Using 'const' or 'volatile' in a function return type is
 *          undefined.
 *
 *   0658   [U] Parameter cannot have 'void' type.
 *
 *   0661   [U] '%s()' may not have a storage class specifier of 'static'
 *          when declared at block scope.
 *
 *   0667   [U] '%s' is declared as a typedef and may not be redeclared as
 *          an object at an inner scope without an explicit type
 *          specifier.
 *
 *   0668   [U] '%s' is declared as a typedef and may not be redeclared as
 *          a member of a 'struct' or 'union' without an explicit type
 *          specifier.
 *
 *   0672   [U] The initializer for a 'struct', 'union' or array is not
 *          enclosed in braces.
 *
 *   0676   [u] Array element is of function type. Arrays cannot be
 *          constructed from function types.
 *
 *   0678   [u] Array element is array of unknown size. Arrays cannot be
 *          constructed from incomplete types.
 *
 *   0680   [u] Array element is 'void' or an incomplete 'struct' or
 *          'union'. Arrays cannot be constructed from incomplete
 *          types.
 *
 *   0706   [U] Label '%s' is not unique within this function.
 *
 *   0745   [U] 'return;' found in '%s()', which has been defined with a
 *          non-'void' return type.
 *
 *   0777   [U] External identifier does not differ from other
 *          identifier(s) (e.g. '%s') within the specified number of
 *          significant characters.
 *
 *   0779   [U] Identifier does not differ from other identifier(s) (e.g.
 *          '%s') within the specified number of significant
 *          characters.
 *
 *   0813   [U] Using any of the characters ' " or /* in '#include <%s>'
 *          gives undefined behaviour.
 *
 *   0814   [U] Using the characters ' or /* in '#include "%s"' gives
 *          undefined behaviour.
 *
 *   0836   [U] Definition of macro named 'defined'.
 *
 *   0837   [U] Use of '#undef' to remove the operator 'defined'.
 *
 *   0840   [E] Extra tokens at end of #include directive.
 *
 *   0848   [U] Attempting to #undef '%s', which is a predefined macro
 *          name.
 *
 *   0853   [U] Macro arguments contain a sequence of tokens that has the
 *          form of a preprocessing directive.
 *
 *   0854   [U] Attempting to #define '%s', which is a predefined macro
 *          name.
 *
 *   0864   [U] '#line' directive specifies line number which is not in the
 *          range 1 to 32767.
 *
 *   0865   [U] '#line' directive is badly formed.
 *
 *   0867   [U] '#line' has not been followed by a line number.
 *
 *   0872   [U] Result of '##' operator is not a legal preprocessing token.
 *
 *   0874   [U] Character string literal and wide character string literal
 *          are adjacent.
 *
 *   0885   [U] The token 'defined' is generated in the expansion of this
 *          macro.
 *
 *   0887   [U] Use of 'defined' must match either 'defined(identifier)' or
 *          'defined identifier'.
 *
 *   0888   [U] 'defined' requires an identifier as an argument.
 *
 *   0914   [U] Source file does not end with a newline character.
 *
 *   0915   [U] Source file ends with a backslash character followed by a
 *          newline.
 *
 *   0942   [U] A * can only be used to specify array size within function
 *          prototype scope.
 *
 *   1331   Type or number of arguments doesn't match previous use of the
 *          function.
 *
 *   1332   Type or number of arguments doesn't match prototype found
 *          later.
 *
 *   1333   Type or number of arguments doesn't match function definition
 *          found later.
 *
 *   2800   Constant: Overflow in signed arithmetic operation.
 *
 *   2810   Constant: Dereference of NULL pointer.
 *
 *   2820   Constant: Arithmetic operation on NULL pointer.
 *
 *   2830   Constant: Division by zero.
 *
 *   2840   Constant: Dereference of an invalid pointer value.
 *
 *   3113   [U] 'return' statement includes no expression but function
 *          '%s()' is implicitly of type 'int'.
 *
 *   3114   [U] Function '%s()' is implicitly of type 'int' but ends
 *          without returning a value.
 *
 *   3239   [U] inline function '%1s' has external linkage, but is not
 *          defined within this translation unit.
 *
 *   3311   [u] An earlier jump to this statement will bypass the
 *          initialization of local variables.
 *
 *   3312   [u] This goto statement will jump into a previous block and
 *          bypass the initialization of local variables.
 *
 *   3319   [U] Function called with number of arguments which differs from
 *          number of parameters in definition.
 *
 *   3320   Type of argument no. %s differs from its type in definition of
 *          function.
 *
 *   3437   [u] The assert macro has been suppressed to call a function of
 *          that name.
 *
 *   3438   [U] #undef'ing the assert macro to call a function of that name
 *          causes undefined behaviour.
 *
 *   1509   '${name}' has external linkage and has multiple definitions.
 *
 *   1510   '${name}' has external linkage and has incompatible
 *          declarations.
 *
 *
 *//* PRQA S 0160,0161,0162,0163,0164,0165,0166,0167,0168,0169,0170,0171,0172,0173,0174,0175,0176,0177,0178,0179,0184,0185,0186,0190,0191,0192,0193,0194,0195,0196,0197,0198,0199,0200,0201,0203,0204,0206,0207,0208,0235,0275,0301,0302,0304,0307,0309,0327,0337,0400,0401,0402,0403,0404,0405,0475,0543,0544,0545,0602,0603,0623,0625,0626,0630,0632,0636,0654,0658,0661,0667,0668,0672,0676,0678,0680,0706,0745,0777,0779,0813,0814,0836,0837,0840,0848,0853,0854,0864,0865,0867,0872,0874,0885,0887,0888,0914,0915,0942,1331,1332,1333,2800,2810,2820,2830,2840,3113,3114,3239,3311,3312,3319,3320,3437,3438,1509,1510 -- *//*
 * <<<------------------------------------------------------------ */


#include "m3cmex.h"
#include <stdio.h>

extern int16_t rule_0103( void )
{
   (void)printf("%e",0);                                              /* expect:  0179  */
   return 0;
}


