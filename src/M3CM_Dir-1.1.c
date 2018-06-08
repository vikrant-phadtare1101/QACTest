/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Dir-1.1.c
 *
 * Dir-1.1: Any implementation-defined behaviour on which the output of the program
 *          depends shall be documented and understood
 *
 * Implemented by message(s):
 *   0180   [C99] Use of ll for conversion specifier.
 *
 *   0202   [I] '-' character in '[]' conversion specification is
 *          implementation defined.
 *
 *   0284   [I] Multiple character constants have implementation defined
 *          values.
 *
 *   0285   [I] Character constant contains character which is not a member
 *          of the basic source character set.
 *
 *   0286   [I] String literal contains character which is not a member of
 *          the basic source character set.
 *
 *   0287   [I] Header name contains character which is not a member of the
 *          basic source character set.
 *
 *   0288   [I] Source file '%s' has comments containing characters which
 *          are not members of the basic source character set.
 *
 *   0289   [I] Source file '%s' has preprocessing tokens containing
 *          characters which are not members of the basic source
 *          character set.
 *
 *   0292   [I] Source file '%s' has comments containing one of the
 *          characters '$', '@' or '`'.
 *
 *   0299   [I] Source file '%s' includes #pragma directives containing
 *          characters which are not members of the basic source
 *          character set.
 *
 *   0314   [I] Cast from a pointer to object type to a pointer to void.
 *
 *   0315   [I] Implicit conversion from a pointer to object type to a
 *          pointer to void.
 *
 *   0320   [C99] Declaration within 'for' statement.
 *
 *   0371   [L] Nesting levels of blocks exceeds 127 - program does not
 *          conform strictly to ISO:C99.
 *
 *   0372   [L] More than 63 levels of nested conditional inclusion -
 *          program does not conform strictly to ISO:C99.
 *
 *   0375   [L] Nesting of parenthesized expressions exceeds 63 - program
 *          does not conform strictly to ISO:C99.
 *
 *   0380   [L] Number of macro definitions exceeds 4095 - program does not
 *          conform strictly to ISO:C99.
 *
 *   0388   [L] '#include "%s"' causes nesting to exceed 15 levels -
 *          program does not conform strictly to ISO:C99.
 *
 *   0390   [L] Number of members in 'struct' or 'union' exceeds 1023 -
 *          program does not conform strictly to ISO:C99.
 *
 *   0391   [L] Number of enumeration constants exceeds 1023 - program does
 *          not conform strictly to ISO:C99.
 *
 *   0392   [L] Nesting of 'struct' or 'union' types exceeds 63 - program
 *          does not conform strictly to ISO:C99.
 *
 *   0410   [L] Nesting of parentheses exceeds 32 - program does not
 *          conform strictly to ISO:C90.
 *
 *   0581   [I] Floating-point constant may be too small to be
 *          representable.
 *
 *   0604   [C99] Declaration appears after statements in a compound
 *          statement.
 *
 *   0609   [L] More than 12 pointer, array or function declarators
 *          modifying a declaration - program does not conform
 *          strictly to ISO:C90.
 *
 *   0611   [L] Nesting of 'struct' or 'union' types exceeds 15 - program
 *          does not conform strictly to ISO:C90.
 *
 *   0612   [L] Size of object '%s' exceeds 32767 bytes - program does not
 *          conform strictly to ISO:C90.
 *
 *   0614   [L] More than 127 block scope identifiers defined within a
 *          block - program does not conform strictly to ISO:C90.
 *
 *   0617   [C99] 'const' qualifier has been duplicated.
 *
 *   0618   [C99] 'volatile' qualifier has been duplicated.
 *
 *   0634   [I] Bit-fields in this struct/union have not been declared
 *          explicitly as unsigned or signed.
 *
 *   0639   [L] Number of members in 'struct' or 'union' exceeds 127 -
 *          program does not conform strictly to ISO:C90.
 *
 *   0647   [L] Number of enumeration constants exceeds 127 - program does
 *          not conform strictly to ISO:C90.
 *
 *   0715   [L] Nesting of control structures (statements) exceeds 15 -
 *          program does not conform strictly to ISO:C90.
 *
 *   0739   [L] Number of 'case' labels exceeds 257 - program does not
 *          conform strictly to ISO:C90.
 *
 *   0810   [L] '#include "%s"' causes nesting to exceed 8 levels - program
 *          does not conform strictly to ISO:C90.
 *
 *   0828   [L] More than 8 levels of nested conditional inclusion -
 *          program does not conform strictly to ISO:C90.
 *
 *   0850   [C99] Macro argument is empty.
 *
 *   0857   [L] Number of macro definitions exceeds 1024 - program does not
 *          conform strictly to ISO:C90.
 *
 *   0858   [L] Number of macro parameters exceeds 31 - program does not
 *          conform strictly to ISO:C90.
 *
 *   0859   [L] Number of arguments in macro call exceeds 31 - program does
 *          not conform strictly to ISO:C90.
 *
 *   0875   [L] String literal exceeds 509 characters - program does not
 *          conform strictly to ISO:C90.
 *
 *   0930   [C99] Trailing comma at the end of an enumerator-list.
 *
 *   1011   [C99] Use of '//' comment.
 *
 *   1018   [C99] Use of LL suffix.
 *
 *   1027   [C99] Use of type 'long long'.
 *
 *   1030   [C99] Macro defined with variable argument list.
 *
 *   1031   [C99] Initializer for 'struct', 'union' or array type is not a
 *          constant expression.
 *
 *   1053   [C99] Designators have been used in this initialization list.
 *
 *   1054   [C99] A compound literal has been used.
 *
 *   1055   [C99] The keyword 'inline' has been used.
 *
 *   1056   [C99] The keyword '_Bool' has been used.
 *
 *   2850   Constant: Implicit conversion to a signed integer type of
 *          insufficient size.
 *
 *   2851   Definite: Implicit conversion to a signed integer type of
 *          insufficient size.
 *
 *   2852   Apparent: Implicit conversion to a signed integer type of
 *          insufficient size.
 *
 *   2855   Constant: Casting to a signed integer type of insufficient
 *          size.
 *
 *   2856   Definite: Casting to a signed integer type of insufficient
 *          size.
 *
 *   2857   Apparent: Casting to a signed integer type of insufficient
 *          size.
 *
 *   2860   Constant: Implementation-defined value resulting from left
 *          shift operation on expression of signed type.
 *
 *   2861   Definite: Implementation-defined value resulting from left
 *          shift operation on expression of signed type.
 *
 *   2862   Apparent: Implementation-defined value resulting from left
 *          shift operation on expression of signed type.
 *
 *   2895   Constant: Negative value cast to an unsigned type.
 *
 *   2896   Definite: Negative value cast to an unsigned type.
 *
 *   2897   Apparent: Negative value cast to an unsigned type.
 *
 *   3116   Unrecognized #pragma arguments '%s' This #pragma directive has
 *          been ignored.
 *
 *
 *//* PRQA S 0180,0202,0284,0285,0286,0287,0288,0289,0292,0299,0314,0315,0320,0371,0372,0375,0380,0388,0390,0391,0392,0410,0581,0604,0609,0611,0612,0614,0617,0618,0634,0639,0647,0715,0739,0810,0828,0850,0857,0858,0859,0875,0930,1011,1018,1027,1030,1031,1053,1054,1055,1056,2850,2851,2852,2855,2856,2857,2860,2861,2862,2895,2896,2897,3116 -- *//*
 * <<<------------------------------------------------------------ */


#include <stdio.h>

#include "misra.h"
#include "m3cmex.h"

#include "M3CM_Dir-1.1.h"
#include "M3CM_Dir-1.1-0380.h"                                        /* expect:  0380  0857       */


extern inline int16_t dir_0101( void )                                /* expect:  1055             */
{
  int16_t obj;
  void * v;

  printf("Lets output the values! %lld", 0);                          /* expect:  0180             */
  fscanf(stdin, "%[() - 0123456789]", 0);                             /* expect:  0202             */
  'AB';                                                               /* expect:  0284             */
  '@';                                                                /* expect:  0285             */
  "@";                                                                /* expect:  0286             */

  /* Message 0287 could be operating system specific so has been
   * excluded from testing. */

  /* ¬ */                                                             /* expect:  0288             */
#define M1 @                                                          /* expect:  0289             */

  /* Message 292 is generated once per file on the first occurence of
   * one of these characters.  For this test, the message will be
   * generated for the message text in the test header and will be
   * suppressed. */
  /* @ */

#pragma PRAGMA @                                                      /* expect:  0299  3116       */
  (void*)&obj;                                                        /* expect:  0314             */
  v = &obj;                                                           /* expect:  0315             */
  for (int16_t i; i<10; ++i);                                         /* expect:  0320             */
  {{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{                  /* expect:  0715             */
  {{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{
  {{{{{{{{{{{{{{{{{{{{{{{{{{{{{                                       /* expect:  0371             */
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

  ((((((((((((((((((((((((((((((((                                    /* expect:  0375  0410       */
  ((((((((((((((((((((((((((((((((
  0
  ))))))))))))))))))))))))))))))))
  ))))))))))))))))))))))))))))))));

  struct S0 { struct S1 { struct S2 { struct S3 {                     /* expect:  0604             */
  struct S4 { struct S5 { struct S6 { struct S7 {
  struct S8 { struct S9 { struct S10 { struct S11 {
  struct S12 { struct S13 { struct S14 { struct S15 {                 /* expect:  0611             */
  struct S16 { struct S17 { struct S18 { struct S19 {
  struct S20 { struct S21 { struct S22 { struct S23 {
  struct S24 { struct S25 { struct S26 { struct S27 {
  struct S28 { struct S29 { struct S30 { struct S31 {
  struct S32 { struct S33 { struct S34 { struct S35 {
  struct S36 { struct S37 { struct S38 { struct S39 {
  struct S40 { struct S41 { struct S42 { struct S43 {
  struct S44 { struct S45 { struct S46 { struct S47 {
  struct S48 { struct S49 { struct S50 { struct S51 {
  struct S52 { struct S53 { struct S54 { struct S55 {
  struct S56 { struct S57 { struct S58 { struct S59 {
  struct S60 { struct S61 { struct S62 { struct S63 {                 /* expect:  0392             */
  }s63;}s62;}s61;}s60;}s59;}s58;}s57;}s56;}s55;}s54;}s53;}s52;
  }s51;}s50;}s49;}s48;}s47;}s46;}s45;}s44;}s43;}s42;}s41;}s40;
  }s39;}s38;}s37;}s36;}s35;}s34;}s33;}s32;}s31;}s30;}s29;}s28;
  }s27;}s26;}s25;}s24;}s23;}s22;}s21;}s20;}s19;}s18;}s17;}s16;
  }s16;}s14;}s13;}s12;}s11;}s10;}s09;}s08;}s07;}s06;}s05;}s04;
  }s03;}s02;}s01;} ************* s00[40000];                          /* expect:  0609  0612       */

  1.17549434E-38F;                                                    /* expect:  0581             */

  {
    int32_t const const t1;                                           /* expect:  0617             */
    int32_t volatile volatile t2;                                     /* expect:  0618             */

    struct S64 {                                                      /* expect:  0634             */
      int bf : 10;
#include "M3CM_Dir-1.1-mbrs.h"
    } s64;                                                            /* expect:  0390  0639       */

    enum E {
#include "M3CM_Dir-1.1-etor.h"
      E1023,                                                          /* expect:  0930             */
    } e;                                                              /* expect:  0391  0647       */
  }

  switch (0)
  {
  case 0:case 1:case 2:case 3:case 4:case 5:case 6:
  case 7:case 8:case 9:case 10:case 11:case 12:case 13:
  case 14:case 15:case 16:case 17:case 18:case 19:case 20:
  case 21:case 22:case 23:case 24:case 25:case 26:case 27:
  case 28:case 29:case 30:case 31:case 32:case 33:case 34:
  case 35:case 36:case 37:case 38:case 39:case 40:case 41:
  case 42:case 43:case 44:case 45:case 46:case 47:case 48:
  case 49:case 50:case 51:case 52:case 53:case 54:case 55:
  case 56:case 57:case 58:case 59:case 60:case 61:case 62:
  case 63:case 64:case 65:case 66:case 67:case 68:case 69:
  case 70:case 71:case 72:case 73:case 74:case 75:case 76:
  case 77:case 78:case 79:case 80:case 81:case 82:case 83:
  case 84:case 85:case 86:case 87:case 88:case 89:case 90:
  case 91:case 92:case 93:case 94:case 95:case 96:case 97:
  case 98:case 99:case 100:case 101:case 102:case 103:case 104:
  case 105:case 106:case 107:case 108:case 109:case 110:case 111:
  case 112:case 113:case 114:case 115:case 116:case 117:case 118:
  case 119:case 120:case 121:case 122:case 123:case 124:case 125:
  case 126:case 127:case 128:case 129:case 130:case 131:case 132:
  case 133:case 134:case 135:case 136:case 137:case 138:case 139:
  case 140:case 141:case 142:case 143:case 144:case 145:case 146:
  case 147:case 148:case 149:case 150:case 151:case 152:case 153:
  case 154:case 155:case 156:case 157:case 158:case 159:case 160:
  case 161:case 162:case 163:case 164:case 165:case 166:case 167:
  case 168:case 169:case 170:case 171:case 172:case 173:case 174:
  case 175:case 176:case 177:case 178:case 179:case 180:case 181:
  case 182:case 183:case 184:case 185:case 186:case 187:case 188:
  case 189:case 190:case 191:case 192:case 193:case 194:case 195:
  case 196:case 197:case 198:case 199:case 200:case 201:case 202:
  case 203:case 204:case 205:case 206:case 207:case 208:case 209:
  case 210:case 211:case 212:case 213:case 214:case 215:case 216:
  case 217:case 218:case 219:case 220:case 221:case 222:case 223:
  case 224:case 225:case 226:case 227:case 228:case 229:case 230:
  case 231:case 232:case 233:case 234:case 235:case 236:case 237:
  case 238:case 239:case 240:case 241:case 242:case 243:case 244:
  case 245:case 246:case 247:case 248:case 249:case 250:case 251:
  case 252:case 253:case 254:case 255:case 256:case 257:              /* expect:  0739             */
    break;
  }

#define M2(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,  \
           X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,\
           X24,X25,X26,X27,X28,X29,X30,X31)                           /* expect:  0858             */
  M2();                                                               /* expect:  0850  0859       */

  {
    char str[] =                                                      /* expect:  0875 */         "\
01234567890123456789012345678901234567890123456789\
01234567890123456789012345678901234567890123456789\
01234567890123456789012345678901234567890123456789\
01234567890123456789012345678901234567890123456789\
01234567890123456789012345678901234567890123456789\
01234567890123456789012345678901234567890123456789\
01234567890123456789012345678901234567890123456789\
01234567890123456789012345678901234567890123456789\
01234567890123456789012345678901234567890123456789\
01234567890123456789012345678901234567890123456789\
012345678" ;
  }

                                                                      /* expect:  1011 */ // [C99] Use of '//' comment.

  0LL;                                                                /* expect:  1018             */

  (long long)0;                                                       /* expect:  1027             */

#define M3(V, ...)                                                    /* expect:  1030             */

  {
    struct S3
    {
      int i[10];
    } s3 = { .i=(int[]){ s3.i[0] } };                                 /* expect:  1031  1053  1054 */

    _Bool b;                                                          /* expect:  1056             */

    int8_t sc1, sc2;
    uint32_t ui1, ui2;
    int32_t i1, i2;
    ui1 = 0x80;                                                       /* expect:  1575  1575       */
    sc1 = 0x80;                                                       /* expect:  2850             */
    sc1 = ui1;                                                        /* expect:  2851             */
    if (b)
    {
      ui2 = 0x80;                                                     /* expect:  1575  1575       */
    }
    sc2 = ui2;                                                        /* expect:  2852  1574       */

    (int8_t)0x80;                                                     /* expect:  2855             */
    (int8_t)ui1;                                                      /* expect:  2856             */
    if (b)
    {
      ui2 = 0x80;                                                     /* expect:  1575             */
      i2 = -1;                                                        /* expect:  1575  1575       */
    }
    (int8_t)ui2;                                                      /* expect:  2857  1574  1574 */

    -1 << 0;                                                          /* expect:  2860             */
    i1 = -1;                                                          /* expect:  1575  1575       */
    i1 << 0;                                                          /* expect:  2861             */
    i2 << 0;                                                          /* expect:  2862  1574       */

    (uint32_t)-1;                                                     /* expect:  2895             */
    (uint32_t)i1;                                                     /* expect:  2896             */
    (uint32_t)i2;                                                     /* expect:  2897  1574       */

  }


   return 1;
}

