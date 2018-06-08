/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-1.1.c
 *
 * Rule-1.1: The program shall contain no violations of the standard C syntax and
 *           constraints, and shall not exceed the implementation's translation
 *           limits
 *
 * Implemented by message(s):
 *   0232   [C] Value of hex escape sequence is not representable in type
 *          'unsigned char'.
 *
 *   0233   [C] Value of octal escape sequence is not representable in type
 *          'unsigned char'.
 *
 *   0244   [C] Value of character constant is not representable in type
 *          'int'.
 *
 *   0268   [S] Comment open at end of translation unit.
 *
 *   0321   [C] Declaration within 'for' statement defines an identifier
 *          '%s' which is not an object.
 *
 *   0322   [C] Illegal storage class specifier used in 'for' statement
 *          declaration.
 *
 *   0338   [C] Octal or hex escape sequence value is too large for
 *          'unsigned char' or 'wchar_t' type.
 *
 *   0422   [C] Function call contains fewer arguments than prototype
 *          specifies.
 *
 *   0423   [C] Function call contains more arguments than prototype
 *          specifies.
 *
 *   0426   [C] Called function has incomplete return type.
 *
 *   0427   [C] Object identifier used as if it were a function or a
 *          function pointer identifier.
 *
 *   0429   [C] Function argument is not of arithmetic type.
 *
 *   0430   [C] Function argument is not of compatible 'struct'/'union'
 *          type.
 *
 *   0431   [C] Function argument points to a more heavily qualified type.
 *
 *   0432   [C] Function argument is not of compatible pointer type.
 *
 *   0435   [C] The 'struct'/'union' member '%s' does not exist.
 *
 *   0436   [C] Left operand of '.' must be a 'struct' or 'union' object.
 *
 *   0437   [C] Left operand of '->' must be a pointer to a 'struct' or
 *          'union' object.
 *
 *   0446   [C] Operand of ++/-- must have scalar (arithmetic or pointer)
 *          type.
 *
 *   0447   [C] Operand of ++/-- must be a modifiable object.
 *
 *   0448   [C] Operand of ++/-- must not be a pointer to an object of
 *          unknown size.
 *
 *   0449   [C] Operand of ++/-- must not be a pointer to a function.
 *
 *   0450   [C] An expression of array type cannot be cast.
 *
 *   0451   [C] Subscripting requires a pointer (or array lvalue).
 *
 *   0452   [C] Cannot subscript a pointer to an object of unknown size.
 *
 *   0453   [C] An array subscript must have integral type.
 *
 *   0454   [C] The address-of operator '&' cannot be applied to an object
 *          declared with 'register'.
 *
 *   0456   [C] This expression does not have an address - '&' may only be
 *          applied to an lvalue or a function designator.
 *
 *   0457   [C] The address-of operator '&' cannot be applied to a bit-
 *          field.
 *
 *   0458   [C] Indirection operator '*' requires operand of pointer type.
 *
 *   0460   [C] The keyword static is used in the declaration of the index
 *          of an array which is not a function parameter.
 *
 *   0461   [C] The keyword static is used in the declaration of an inner
 *          index of a multi-dimensional array.
 *
 *   0462   [C] A type qualifier (const, volatile or restrict) is used in
 *          the declaration of the index of an array which is not a
 *          function parameter.
 *
 *   0463   [C] A type qualifier (const, volatile or restrict) is used in
 *          the declaration of an inner index of a multi-dimensional
 *          array.
 *
 *   0466   [C] Unary '+' requires arithmetic operand.
 *
 *   0467   [C] Operand of '!' must have scalar (arithmetic or pointer)
 *          type.
 *
 *   0468   [C] Unary '-' requires arithmetic operand.
 *
 *   0469   [C] Bitwise not '~' requires integral operand.
 *
 *   0476   [C] 'sizeof' cannot be applied to a bit-field.
 *
 *   0477   [C] 'sizeof' cannot be applied to a function.
 *
 *   0478   [C] 'sizeof' cannot be applied to an object of unknown size.
 *
 *   0481   [C] Only scalar expressions may be cast to other types.
 *
 *   0482   [C] Expressions may only be cast to 'void' or scalar types.
 *
 *   0483   [C] A pointer to an object of unknown size cannot be the
 *          operand of an addition operator.
 *
 *   0484   [C] A pointer to an object of unknown size cannot be the
 *          operand of a subtraction operator.
 *
 *   0485   [C] Only integral expressions may be added to pointers.
 *
 *   0486   [C] Only integral expressions and compatible pointers may be
 *          subtracted from pointers.
 *
 *   0487   [C] If two pointers are subtracted, they must be pointers that
 *          address compatible types.
 *
 *   0493   [C] Type of left operand is not compatible with this operator.
 *
 *   0494   [C] Type of right operand is not compatible with this operator.
 *
 *   0495   [C] Left operand of '%', '<<', '>>', '&', '^' or '|' must have
 *          integral type.
 *
 *   0496   [C] Right operand of '%', '<<', '>>', '&', '^' or '|' must have
 *          integral type.
 *
 *   0513   [C] Relational operator used to compare pointers to
 *          incompatible types.
 *
 *   0514   [C] Relational operator used to compare a pointer with an
 *          incompatible operand.
 *
 *   0515   [C] Equality operator used to compare a pointer with an
 *          incompatible operand.
 *
 *   0536   [C] First operand of '&&', '||' or '?' must have scalar
 *          (arithmetic or pointer) type.
 *
 *   0537   [C] Second operand of '&&' or '||' must have scalar (arithmetic
 *          or pointer) type.
 *
 *   0540   [C] 2nd and 3rd operands of conditional operator '?' must have
 *          compatible types.
 *
 *   0541   [C] Argument no. %s does not have object type.
 *
 *   0542   [C] Controlling expression must have scalar (arithmetic or
 *          pointer) type.
 *
 *   0546   [C] 'enum %s' has unknown content. Use of an enum tag with
 *          undefined content is not permitted.
 *
 *   0547   [C] This declaration of tag '%s' conflicts with a previous
 *          declaration.
 *
 *   0550   [C] Left operand of '+=' or '-=' is a pointer to an object of
 *          unknown size.
 *
 *   0554   [C] 'static %s()' has been declared and called but no
 *          definition has been given.
 *
 *   0555   [C] Invalid assignment to object of void type or array type.
 *
 *   0556   [C] Left operand of assignment must be a modifiable object.
 *
 *   0557   [C] Right operand of assignment is not of arithmetic type.
 *
 *   0558   [C] Right operand of '+=' or '-=' must have integral type when
 *          left operand is a pointer.
 *
 *   0559   [C] Right operand of '<<=', '>>=', '&=', '|=', '^=' or '%='
 *          must have integral type.
 *
 *   0560   [C] Left operand of '<<=', '>>=', '&=', '|=', '^=' or '%=' must
 *          have integral type.
 *
 *   0561   [C] Right operand of assignment is not of compatible
 *          'struct'/'union' type.
 *
 *   0562   [C] Right operand of assignment points to a more heavily
 *          qualified type.
 *
 *   0563   [C] Right operand of assignment is not of compatible pointer
 *          type.
 *
 *   0564   [C] Left operand of assignment must be an lvalue (it must
 *          designate an object).
 *
 *   0565   [C] Left operand of '+=' or '-=' must be of arithmetic or
 *          pointer to object type.
 *
 *   0580   [C] Constant is too large to be representable.
 *
 *   0588   [C] Width of bit-field must be an integral constant expression.
 *
 *   0589   [C] Enumeration constant must be an integral constant
 *          expression.
 *
 *   0590   [C] Array bound must be an integral constant expression.
 *
 *   0591   [C] A 'case' label must be an integral constant expression.
 *
 *   0605   [C] A declaration must declare a tag or an identifier.
 *
 *   0616   [C] Illegal combination of type specifiers or storage class
 *          specifiers.
 *
 *   0619   [C] The identifier '%s' has already been defined in the current
 *          scope within the ordinary identifier namespace.
 *
 *   0620   [C] Cannot initialize '%s' because it has unknown size.
 *
 *   0621   [C] The struct/union '%s' cannot be initialized because it has
 *          unknown size.
 *
 *   0622   [C] The identifier '%s' has been declared both with and without
 *          linkage in the same scope.
 *
 *   0627   [C] '%s' has different type to previous declaration in the same
 *          scope.
 *
 *   0628   [C] '%s' has different type to previous declaration at wider
 *          scope.
 *
 *   0629   [C] More than one definition of '%s' (with internal linkage).
 *
 *   0631   [C] More than one declaration of '%s' (with no linkage).
 *
 *   0638   [C] Duplicate member name '%s' in 'struct' or 'union'.
 *
 *   0640   [C] '%s' in 'struct' or 'union' type may not have 'void' type.
 *
 *   0641   [C] '%s' in 'struct' or 'union' type may not have function
 *          type.
 *
 *   0642   [C] '%s' in 'struct' or 'union' type may not be an array of
 *          unknown size.
 *
 *   0643   [C] '%s' in 'struct' or 'union' type may not be a 'struct' or
 *          'union' with unknown content.
 *
 *   0644   [C] Width of bit-field must be no bigger than the width of an
 *          'int'.
 *
 *   0645   [C] A zero width bit-field cannot be given a name.
 *
 *   0646   [C] Enumeration constants must have values representable as
 *          'int's.
 *
 *   0649   [C] K&R style declaration of parameters is not legal after a
 *          function header that includes a parameter list.
 *
 *   0650   [C] Illegal storage class specifier on named function
 *          parameter.
 *
 *   0651   [C] Missing type specifiers in function declaration.
 *
 *   0653   [C] Duplicate definition of 'struct', 'union' or 'enum' tag
 *          '%s'.
 *
 *   0655   [C] Illegal storage class specifier on unnamed function
 *          parameter.
 *
 *   0656   [C] Function return type cannot be function or array type, or
 *          an incomplete struct/union (for function definition).
 *
 *   0657   [C] Unnamed parameter specified in function definition.
 *
 *   0659   [C] The identifier '%s' was not given in the parameter list.
 *
 *   0664   [C] Parameter specified with type 'void'.
 *
 *   0665   [C] Two parameters have been declared with the same name '%s'.
 *
 *   0669   [C] The restrict qualifier can only be applied to pointer types
 *          derived from object or incomplete types.
 *
 *   0671   [C] Initializer for object of arithmetic type is not of
 *          arithmetic type.
 *
 *   0673   [C] Initializer points to a more heavily qualified type.
 *
 *   0674   [C] Initializer for pointer is of incompatible type.
 *
 *   0675   [C] Initializer is not of compatible 'struct'/'union' type.
 *
 *   0677   [C] Array size is negative, or unrepresentable.
 *
 *   0682   [C] Initializer for object of a character type is a string
 *          literal.
 *
 *   0683   [C] Initializer for object of a character type is a wide string
 *          literal.
 *
 *   0684   [C] Too many initializers.
 *
 *   0685   [C] Initializer for any object with static storage duration
 *          must be a constant expression.
 *
 *   0690   [C] String literal contains too many characters to initialize
 *          object.
 *
 *   0698   [C] String literal used to initialize an object of incompatible
 *          type.
 *
 *   0699   [C] String literal used to initialize a pointer of incompatible
 *          type.
 *
 *   0708   [C] No definition found for the label '%s' in this function.
 *
 *   0709   [C] Initialization of locally declared 'extern %s' is illegal.
 *
 *   0736   [C] 'case' label does not have unique value within this
 *          'switch' statement.
 *
 *   0737   [C] More than one 'default' label found in 'switch' statement.
 *
 *   0738   [C] Controlling expression in a 'switch' statement must have
 *          integral type.
 *
 *   0746   [C] 'return exp;' found in '%s()' whose return type is 'void'.
 *
 *   0747   [C] 'return exp;' found in '%s()' whose return type is
 *          qualified 'void'.
 *
 *   0755   [C] 'return' expression is not of arithmetic type.
 *
 *   0756   [C] 'return' expression is not of compatible 'struct'/'union'
 *          type.
 *
 *   0757   [C] 'return' expression points to a more heavily qualified
 *          type.
 *
 *   0758   [C] 'return' expression is not of compatible pointer type.
 *
 *   0766   [C] 'continue' statement found outside an iteration statement.
 *
 *   0767   [C] 'break' statement found outside a 'switch' or iteration
 *          statement.
 *
 *   0768   [C] 'case' or 'default' found outside a 'switch' statement.
 *
 *   0774   [C] 'auto' may not be specified on global declaration of '%s'.
 *
 *   0775   [C] 'register' may not be specified on global declaration of
 *          '%s'.
 *
 *   0801   [C] The '##' operator may not be the first token in a macro
 *          replacement list.
 *
 *   0802   [C] The '##' operator may not be the last token in a macro
 *          replacement list.
 *
 *   0803   [C] The '#' operator may only appear before a macro parameter.
 *
 *   0804   [C] Macro parameter '%s' is not unique.
 *
 *   0811   [C] The glue operator '##' may only appear in a '#define'
 *          preprocessing directive.
 *
 *   0812   [C] Header name token '<text>' found outside '#include'
 *          preprocessing directive.
 *
 *   0817   [S] Closing quote or bracket '>' missing from include filename.
 *
 *   0818   [Q] Cannot find '%s' - Perhaps the appropriate search path was
 *          not given ?
 *
 *   0821   [C] '#include' does not identify a header or source file that
 *          can be processed.
 *
 *   0834   [C] Function-like macro '%s()' is being redefined as an object-
 *          like macro.
 *
 *   0835   [C] Macro '%s' is being redefined with different parameter
 *          names.
 *
 *   0844   [C] Macro '%s' is being redefined with a different replacement
 *          list.
 *
 *   0845   [C] Object-like macro '%s' is being redefined as a function-
 *          like macro.
 *
 *   0851   [C] More arguments in macro call than specified in definition.
 *
 *   0852   [S] Unable to find the ')' that marks the end of the macro
 *          call.
 *
 *   0866   [C] The string literal in a '#line' directive cannot be a 'wide
 *          string literal'.
 *
 *   0873   [C] Preprocessing token cannot be converted to an actual token.
 *
 *   0877   [C] '#if' and '#elif' expressions may contain only integral
 *          constants.
 *
 *   0940   [C] Illegal usage of a variably modified type.
 *
 *   0941   [C] A variable length array may not be initialized.
 *
 *   0943   [C] Jump to label '%s' is a jump into the scope of an
 *          identifier with variably modified type.
 *
 *   0944   [C] The label '%s' is inside the scope of an identifier with
 *          variably modified type.
 *
 *   1023   [C] Using '__alignof__' on function types is illegal.
 *
 *   1024   [C] Using '__alignof__' on incomplete types is illegal.
 *
 *   1025   [C] Using '__alignof__' on bit-fields is illegal.
 *
 *   1033   [C] The identifier __VA_ARGS__ may only be used in the
 *          replacement list of a variadic macro.
 *
 *   1047   [C] Function is being declared with default argument syntax
 *          after a previous call to the function. This is not
 *          allowed.
 *
 *   1048   [C] Default argument values are missing for some parameters in
 *          this function declaration. This is not allowed.
 *
 *   1050   [C] Nested functions cannot be 'extern' or 'static'.
 *
 *   1061   [C] Structure '%1s' with flexible array member '%2s' cannot be
 *          used in the declaration of structure member '%3s'.
 *
 *   1062   [C] Structure '%1s' with flexible array member '%2s' cannot be
 *          used in the declaration of array elements.
 *
 *   3236   [C] 'inline' may not be applied to function 'main'.
 *
 *   3237   [C] inline function '%1s' has external linkage and is defining
 *          an object, '%2s', with static storage duration.
 *
 *   3238   [C] inline function '%1s' has external linkage and is referring
 *          to an object, '%2s', with internal linkage.
 *
 *   3244   [C] 'inline' may only be used in the declaration of a function
 *          identifier.
 *
 *
 *//* PRQA S 0232,0233,0244,0268,0321,0322,0338,0422,0423,0426,0427,0429,0430,0431,0432,0435,0436,0437,0446,0447,0448,0449,0450,0451,0452,0453,0454,0456,0457,0458,0460,0461,0462,0463,0466,0467,0468,0469,0476,0477,0478,0481,0482,0483,0484,0485,0486,0487,0493,0494,0495,0496,0513,0514,0515,0536,0537,0540,0541,0542,0546,0547,0550,0554,0555,0556,0557,0558,0559,0560,0561,0562,0563,0564,0565,0580,0588,0589,0590,0591,0605,0616,0619,0620,0621,0622,0627,0628,0629,0631,0638,0640,0641,0642,0643,0644,0645,0646,0649,0650,0651,0653,0655,0656,0657,0659,0664,0665,0669,0671,0673,0674,0675,0677,0682,0683,0684,0685,0690,0698,0699,0708,0709,0736,0737,0738,0746,0747,0755,0756,0757,0758,0766,0767,0768,0774,0775,0801,0802,0803,0804,0811,0812,0817,0818,0821,0834,0835,0844,0845,0851,0852,0866,0873,0877,0940,0941,0943,0944,1023,1024,1025,1033,1047,1048,1050,1061,1062,3236,3237,3238,3244 -- *//*
 * <<<------------------------------------------------------------ */


#include "misra.h"
#include "m3cmex.h"

struct rule_0101_struct
{
  int32_t a;
} ;

extern int16_t rule_0101( void )
{
   struct rule_0101_struct r;
   +r;                                                                /* expect: 0466  */
   return 0;
}


