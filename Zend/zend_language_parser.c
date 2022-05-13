/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 22 "U:/dev/php-7-os2/Zend/zend_language_parser.y"

#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"
#include "zend_language_scanner.h"
#include "zend_exceptions.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#ifdef _MSC_VER
#define YYMALLOC malloc
#define YYFREE free
#endif

#line 86 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
/* Substitute the type names.  */
#define YYSTYPE         ZENDSTYPE
/* Substitute the variable and function names.  */
#define yyparse         zendparse
#define yylex           zendlex
#define yyerror         zenderror
#define yydebug         zenddebug
#define yynerrs         zendnerrs



# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_ZEND_U_DEV_PHP_7_OS2_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_U_DEV_PHP_7_OS2_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef ZENDDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define ZENDDEBUG 1
#  else
#   define ZENDDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define ZENDDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined ZENDDEBUG */
#if ZENDDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
#line 41 "U:/dev/php-7-os2/Zend/zend_language_parser.y"

#include "zend_compile.h"

#line 142 "U:/dev/php-7-os2/Zend/zend_language_parser.c"

/* Token type.  */
#ifndef ZENDTOKENTYPE
# define ZENDTOKENTYPE
  enum zendtokentype
  {
    END = 0,
    T_THROW = 258,
    PREC_ARROW_FUNCTION = 259,
    T_INCLUDE = 260,
    T_INCLUDE_ONCE = 261,
    T_REQUIRE = 262,
    T_REQUIRE_ONCE = 263,
    T_LOGICAL_OR = 264,
    T_LOGICAL_XOR = 265,
    T_LOGICAL_AND = 266,
    T_PRINT = 267,
    T_YIELD = 268,
    T_DOUBLE_ARROW = 269,
    T_YIELD_FROM = 270,
    T_PLUS_EQUAL = 271,
    T_MINUS_EQUAL = 272,
    T_MUL_EQUAL = 273,
    T_DIV_EQUAL = 274,
    T_CONCAT_EQUAL = 275,
    T_MOD_EQUAL = 276,
    T_AND_EQUAL = 277,
    T_OR_EQUAL = 278,
    T_XOR_EQUAL = 279,
    T_SL_EQUAL = 280,
    T_SR_EQUAL = 281,
    T_POW_EQUAL = 282,
    T_COALESCE_EQUAL = 283,
    T_COALESCE = 284,
    T_BOOLEAN_OR = 285,
    T_BOOLEAN_AND = 286,
    T_AMPERSAND_NOT_FOLLOWED_BY_VAR_OR_VARARG = 287,
    T_AMPERSAND_FOLLOWED_BY_VAR_OR_VARARG = 288,
    T_IS_EQUAL = 289,
    T_IS_NOT_EQUAL = 290,
    T_IS_IDENTICAL = 291,
    T_IS_NOT_IDENTICAL = 292,
    T_SPACESHIP = 293,
    T_IS_SMALLER_OR_EQUAL = 294,
    T_IS_GREATER_OR_EQUAL = 295,
    T_SL = 296,
    T_SR = 297,
    T_INSTANCEOF = 298,
    T_INT_CAST = 299,
    T_DOUBLE_CAST = 300,
    T_STRING_CAST = 301,
    T_ARRAY_CAST = 302,
    T_OBJECT_CAST = 303,
    T_BOOL_CAST = 304,
    T_UNSET_CAST = 305,
    T_POW = 306,
    T_CLONE = 307,
    T_NOELSE = 308,
    T_ELSEIF = 309,
    T_ELSE = 310,
    T_LNUMBER = 311,
    T_DNUMBER = 312,
    T_STRING = 313,
    T_NAME_FULLY_QUALIFIED = 314,
    T_NAME_RELATIVE = 315,
    T_NAME_QUALIFIED = 316,
    T_VARIABLE = 317,
    T_INLINE_HTML = 318,
    T_ENCAPSED_AND_WHITESPACE = 319,
    T_CONSTANT_ENCAPSED_STRING = 320,
    T_STRING_VARNAME = 321,
    T_NUM_STRING = 322,
    T_EVAL = 323,
    T_NEW = 324,
    T_EXIT = 325,
    T_IF = 326,
    T_ENDIF = 327,
    T_ECHO = 328,
    T_DO = 329,
    T_WHILE = 330,
    T_ENDWHILE = 331,
    T_FOR = 332,
    T_ENDFOR = 333,
    T_FOREACH = 334,
    T_ENDFOREACH = 335,
    T_DECLARE = 336,
    T_ENDDECLARE = 337,
    T_AS = 338,
    T_SWITCH = 339,
    T_ENDSWITCH = 340,
    T_CASE = 341,
    T_DEFAULT = 342,
    T_MATCH = 343,
    T_BREAK = 344,
    T_CONTINUE = 345,
    T_GOTO = 346,
    T_FUNCTION = 347,
    T_FN = 348,
    T_CONST = 349,
    T_RETURN = 350,
    T_TRY = 351,
    T_CATCH = 352,
    T_FINALLY = 353,
    T_USE = 354,
    T_INSTEADOF = 355,
    T_GLOBAL = 356,
    T_STATIC = 357,
    T_ABSTRACT = 358,
    T_FINAL = 359,
    T_PRIVATE = 360,
    T_PROTECTED = 361,
    T_PUBLIC = 362,
    T_READONLY = 363,
    T_VAR = 364,
    T_UNSET = 365,
    T_ISSET = 366,
    T_EMPTY = 367,
    T_HALT_COMPILER = 368,
    T_CLASS = 369,
    T_TRAIT = 370,
    T_INTERFACE = 371,
    T_ENUM = 372,
    T_EXTENDS = 373,
    T_IMPLEMENTS = 374,
    T_NAMESPACE = 375,
    T_LIST = 376,
    T_ARRAY = 377,
    T_CALLABLE = 378,
    T_LINE = 379,
    T_FILE = 380,
    T_DIR = 381,
    T_CLASS_C = 382,
    T_TRAIT_C = 383,
    T_METHOD_C = 384,
    T_FUNC_C = 385,
    T_NS_C = 386,
    T_ATTRIBUTE = 387,
    T_INC = 388,
    T_DEC = 389,
    T_OBJECT_OPERATOR = 390,
    T_NULLSAFE_OBJECT_OPERATOR = 391,
    T_COMMENT = 392,
    T_DOC_COMMENT = 393,
    T_OPEN_TAG = 394,
    T_OPEN_TAG_WITH_ECHO = 395,
    T_CLOSE_TAG = 396,
    T_WHITESPACE = 397,
    T_START_HEREDOC = 398,
    T_END_HEREDOC = 399,
    T_DOLLAR_OPEN_CURLY_BRACES = 400,
    T_CURLY_OPEN = 401,
    T_PAAMAYIM_NEKUDOTAYIM = 402,
    T_NS_SEPARATOR = 403,
    T_ELLIPSIS = 404,
    T_BAD_CHARACTER = 405,
    T_ERROR = 406
  };
#endif
/* Tokens.  */
#define END 0
#define T_THROW 258
#define PREC_ARROW_FUNCTION 259
#define T_INCLUDE 260
#define T_INCLUDE_ONCE 261
#define T_REQUIRE 262
#define T_REQUIRE_ONCE 263
#define T_LOGICAL_OR 264
#define T_LOGICAL_XOR 265
#define T_LOGICAL_AND 266
#define T_PRINT 267
#define T_YIELD 268
#define T_DOUBLE_ARROW 269
#define T_YIELD_FROM 270
#define T_PLUS_EQUAL 271
#define T_MINUS_EQUAL 272
#define T_MUL_EQUAL 273
#define T_DIV_EQUAL 274
#define T_CONCAT_EQUAL 275
#define T_MOD_EQUAL 276
#define T_AND_EQUAL 277
#define T_OR_EQUAL 278
#define T_XOR_EQUAL 279
#define T_SL_EQUAL 280
#define T_SR_EQUAL 281
#define T_POW_EQUAL 282
#define T_COALESCE_EQUAL 283
#define T_COALESCE 284
#define T_BOOLEAN_OR 285
#define T_BOOLEAN_AND 286
#define T_AMPERSAND_NOT_FOLLOWED_BY_VAR_OR_VARARG 287
#define T_AMPERSAND_FOLLOWED_BY_VAR_OR_VARARG 288
#define T_IS_EQUAL 289
#define T_IS_NOT_EQUAL 290
#define T_IS_IDENTICAL 291
#define T_IS_NOT_IDENTICAL 292
#define T_SPACESHIP 293
#define T_IS_SMALLER_OR_EQUAL 294
#define T_IS_GREATER_OR_EQUAL 295
#define T_SL 296
#define T_SR 297
#define T_INSTANCEOF 298
#define T_INT_CAST 299
#define T_DOUBLE_CAST 300
#define T_STRING_CAST 301
#define T_ARRAY_CAST 302
#define T_OBJECT_CAST 303
#define T_BOOL_CAST 304
#define T_UNSET_CAST 305
#define T_POW 306
#define T_CLONE 307
#define T_NOELSE 308
#define T_ELSEIF 309
#define T_ELSE 310
#define T_LNUMBER 311
#define T_DNUMBER 312
#define T_STRING 313
#define T_NAME_FULLY_QUALIFIED 314
#define T_NAME_RELATIVE 315
#define T_NAME_QUALIFIED 316
#define T_VARIABLE 317
#define T_INLINE_HTML 318
#define T_ENCAPSED_AND_WHITESPACE 319
#define T_CONSTANT_ENCAPSED_STRING 320
#define T_STRING_VARNAME 321
#define T_NUM_STRING 322
#define T_EVAL 323
#define T_NEW 324
#define T_EXIT 325
#define T_IF 326
#define T_ENDIF 327
#define T_ECHO 328
#define T_DO 329
#define T_WHILE 330
#define T_ENDWHILE 331
#define T_FOR 332
#define T_ENDFOR 333
#define T_FOREACH 334
#define T_ENDFOREACH 335
#define T_DECLARE 336
#define T_ENDDECLARE 337
#define T_AS 338
#define T_SWITCH 339
#define T_ENDSWITCH 340
#define T_CASE 341
#define T_DEFAULT 342
#define T_MATCH 343
#define T_BREAK 344
#define T_CONTINUE 345
#define T_GOTO 346
#define T_FUNCTION 347
#define T_FN 348
#define T_CONST 349
#define T_RETURN 350
#define T_TRY 351
#define T_CATCH 352
#define T_FINALLY 353
#define T_USE 354
#define T_INSTEADOF 355
#define T_GLOBAL 356
#define T_STATIC 357
#define T_ABSTRACT 358
#define T_FINAL 359
#define T_PRIVATE 360
#define T_PROTECTED 361
#define T_PUBLIC 362
#define T_READONLY 363
#define T_VAR 364
#define T_UNSET 365
#define T_ISSET 366
#define T_EMPTY 367
#define T_HALT_COMPILER 368
#define T_CLASS 369
#define T_TRAIT 370
#define T_INTERFACE 371
#define T_ENUM 372
#define T_EXTENDS 373
#define T_IMPLEMENTS 374
#define T_NAMESPACE 375
#define T_LIST 376
#define T_ARRAY 377
#define T_CALLABLE 378
#define T_LINE 379
#define T_FILE 380
#define T_DIR 381
#define T_CLASS_C 382
#define T_TRAIT_C 383
#define T_METHOD_C 384
#define T_FUNC_C 385
#define T_NS_C 386
#define T_ATTRIBUTE 387
#define T_INC 388
#define T_DEC 389
#define T_OBJECT_OPERATOR 390
#define T_NULLSAFE_OBJECT_OPERATOR 391
#define T_COMMENT 392
#define T_DOC_COMMENT 393
#define T_OPEN_TAG 394
#define T_OPEN_TAG_WITH_ECHO 395
#define T_CLOSE_TAG 396
#define T_WHITESPACE 397
#define T_START_HEREDOC 398
#define T_END_HEREDOC 399
#define T_DOLLAR_OPEN_CURLY_BRACES 400
#define T_CURLY_OPEN 401
#define T_PAAMAYIM_NEKUDOTAYIM 402
#define T_NS_SEPARATOR 403
#define T_ELLIPSIS 404
#define T_BAD_CHARACTER 405
#define T_ERROR 406

/* Value type.  */
#if ! defined ZENDSTYPE && ! defined ZENDSTYPE_IS_DECLARED
typedef zend_parser_stack_elem ZENDSTYPE;
# define ZENDSTYPE_IS_TRIVIAL 1
# define ZENDSTYPE_IS_DECLARED 1
#endif



ZEND_API int zendparse (void);

#endif /* !YY_ZEND_U_DEV_PHP_7_OS2_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined ZENDSTYPE_IS_TRIVIAL && ZENDSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8303

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  179
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  171
/* YYNRULES -- Number of rules.  */
#define YYNRULES  581
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1096

#define YYUNDEFTOK  2
#define YYMAXUTOK   406

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,   177,     2,   178,    55,     2,     2,
     170,   171,    53,    51,   168,    52,    48,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    31,   172,
      44,    16,    46,    30,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   175,     2,   169,    36,     2,   176,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   173,    35,   174,    58,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    32,    33,    34,    37,    38,    39,
      40,    41,    42,    43,    45,    47,    49,    50,    57,    59,
      60,    61,    62,    63,    64,    65,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167
};

#if ZENDDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   295,   295,   299,   299,   299,   299,   299,   299,   299,
     299,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   304,   304,   304,   304,   304,   304,
     304,   304,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   309,   310,   310,   310,   310,   310,   310,
     310,   314,   315,   319,   320,   328,   329,   334,   335,   340,
     341,   346,   347,   351,   352,   353,   354,   358,   360,   365,
     367,   372,   376,   377,   381,   382,   383,   384,   385,   389,
     390,   391,   392,   396,   399,   399,   402,   402,   405,   406,
     407,   408,   409,   413,   414,   418,   423,   428,   429,   433,
     435,   440,   442,   447,   449,   454,   455,   459,   461,   466,
     468,   473,   474,   478,   480,   486,   487,   488,   489,   496,
     497,   498,   499,   501,   503,   505,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   518,   522,   521,   525,
     526,   528,   529,   533,   535,   540,   541,   545,   546,   550,
     551,   555,   556,   560,   564,   571,   572,   576,   577,   581,
     581,   584,   584,   590,   591,   596,   597,   601,   601,   607,
     607,   613,   613,   619,   620,   624,   629,   630,   634,   635,
     639,   640,   644,   645,   649,   650,   651,   652,   656,   657,
     661,   662,   666,   667,   671,   672,   673,   674,   678,   679,
     681,   686,   687,   692,   697,   698,   702,   703,   707,   709,
     714,   715,   720,   721,   726,   729,   735,   736,   741,   744,
     750,   751,   757,   758,   763,   765,   770,   771,   775,   776,
     780,   781,   782,   783,   787,   791,   799,   800,   804,   805,
     806,   807,   811,   812,   816,   817,   821,   822,   829,   830,
     831,   832,   836,   837,   838,   842,   844,   849,   851,   856,
     857,   861,   862,   863,   867,   869,   874,   875,   877,   881,
     882,   886,   892,   893,   897,   898,   902,   904,   910,   913,
     916,   920,   924,   925,   926,   931,   932,   936,   937,   938,
     942,   944,   949,   950,   954,   959,   961,   965,   967,   972,
     974,   978,   983,   984,   988,   989,   993,   994,   999,  1000,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1015,  1016,  1020,
    1022,  1027,  1028,  1032,  1036,  1040,  1041,  1044,  1048,  1049,
    1053,  1054,  1058,  1058,  1068,  1070,  1072,  1077,  1079,  1081,
    1083,  1085,  1087,  1088,  1090,  1092,  1094,  1096,  1098,  1100,
    1102,  1104,  1106,  1108,  1110,  1112,  1114,  1115,  1116,  1117,
    1118,  1120,  1122,  1124,  1126,  1128,  1129,  1130,  1131,  1132,
    1133,  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,
    1143,  1144,  1145,  1147,  1149,  1151,  1153,  1155,  1157,  1159,
    1161,  1163,  1165,  1169,  1170,  1172,  1174,  1176,  1177,  1178,
    1179,  1180,  1181,  1182,  1183,  1184,  1185,  1186,  1187,  1188,
    1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1199,
    1204,  1209,  1219,  1223,  1227,  1231,  1235,  1239,  1240,  1244,
    1245,  1249,  1250,  1254,  1255,  1259,  1261,  1263,  1265,  1270,
    1273,  1277,  1278,  1279,  1283,  1284,  1288,  1290,  1291,  1296,
    1297,  1302,  1303,  1304,  1305,  1309,  1310,  1311,  1312,  1314,
    1315,  1316,  1317,  1321,  1322,  1323,  1324,  1325,  1326,  1327,
    1328,  1329,  1333,  1335,  1340,  1341,  1345,  1349,  1350,  1351,
    1352,  1356,  1357,  1361,  1362,  1363,  1367,  1369,  1371,  1373,
    1375,  1377,  1381,  1383,  1385,  1387,  1392,  1393,  1394,  1398,
    1400,  1405,  1407,  1409,  1411,  1413,  1415,  1417,  1422,  1423,
    1424,  1428,  1429,  1430,  1434,  1439,  1440,  1444,  1446,  1451,
    1453,  1455,  1457,  1459,  1461,  1464,  1470,  1472,  1474,  1476,
    1481,  1483,  1486,  1489,  1492,  1494,  1496,  1499,  1503,  1504,
    1505,  1506,  1511,  1512,  1513,  1515,  1517,  1519,  1521,  1526,
    1527,  1532
};
#endif

#if ZENDDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"'throw'\"",
  "PREC_ARROW_FUNCTION", "\"'include'\"", "\"'include_once'\"",
  "\"'require'\"", "\"'require_once'\"", "\"'or'\"", "\"'xor'\"",
  "\"'and'\"", "\"'print'\"", "\"'yield'\"", "\"'=>'\"",
  "\"'yield from'\"", "'='", "\"'+='\"", "\"'-='\"", "\"'*='\"",
  "\"'/='\"", "\"'.='\"", "\"'%='\"", "\"'&='\"", "\"'|='\"", "\"'^='\"",
  "\"'<<='\"", "\"'>>='\"", "\"'**='\"", "\"'?""?='\"", "'?'", "':'",
  "\"'?""?'\"", "\"'||'\"", "\"'&&'\"", "'|'", "'^'", "\"amp\"", "\"'&'\"",
  "\"'=='\"", "\"'!='\"", "\"'==='\"", "\"'!=='\"", "\"'<=>'\"", "'<'",
  "\"'<='\"", "'>'", "\"'>='\"", "'.'", "\"'<<'\"", "\"'>>'\"", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'!'", "\"'instanceof'\"", "'~'",
  "\"'(int)'\"", "\"'(double)'\"", "\"'(string)'\"", "\"'(array)'\"",
  "\"'(object)'\"", "\"'(bool)'\"", "\"'(unset)'\"", "'@'", "\"'**'\"",
  "\"'clone'\"", "T_NOELSE", "\"'elseif'\"", "\"'else'\"", "\"integer\"",
  "\"floating-point number\"", "\"identifier\"",
  "\"fully qualified name\"", "\"namespace-relative name\"",
  "\"namespaced name\"", "\"variable\"", "T_INLINE_HTML",
  "\"string content\"", "\"quoted string\"", "\"variable name\"",
  "\"number\"", "\"'eval'\"", "\"'new'\"", "\"'exit'\"", "\"'if'\"",
  "\"'endif'\"", "\"'echo'\"", "\"'do'\"", "\"'while'\"", "\"'endwhile'\"",
  "\"'for'\"", "\"'endfor'\"", "\"'foreach'\"", "\"'endforeach'\"",
  "\"'declare'\"", "\"'enddeclare'\"", "\"'as'\"", "\"'switch'\"",
  "\"'endswitch'\"", "\"'case'\"", "\"'default'\"", "\"'match'\"",
  "\"'break'\"", "\"'continue'\"", "\"'goto'\"", "\"'function'\"",
  "\"'fn'\"", "\"'const'\"", "\"'return'\"", "\"'try'\"", "\"'catch'\"",
  "\"'finally'\"", "\"'use'\"", "\"'insteadof'\"", "\"'global'\"",
  "\"'static'\"", "\"'abstract'\"", "\"'final'\"", "\"'private'\"",
  "\"'protected'\"", "\"'public'\"", "\"'readonly'\"", "\"'var'\"",
  "\"'unset'\"", "\"'isset'\"", "\"'empty'\"", "\"'__halt_compiler'\"",
  "\"'class'\"", "\"'trait'\"", "\"'interface'\"", "\"'enum'\"",
  "\"'extends'\"", "\"'implements'\"", "\"'namespace'\"", "\"'list'\"",
  "\"'array'\"", "\"'callable'\"", "\"'__LINE__'\"", "\"'__FILE__'\"",
  "\"'__DIR__'\"", "\"'__CLASS__'\"", "\"'__TRAIT__'\"",
  "\"'__METHOD__'\"", "\"'__FUNCTION__'\"", "\"'__NAMESPACE__'\"",
  "\"'#['\"", "\"'++'\"", "\"'--'\"", "\"'->'\"", "\"'?->'\"",
  "\"comment\"", "\"doc comment\"", "\"open tag\"", "\"'<?='\"",
  "\"'?>'\"", "\"whitespace\"", "\"heredoc start\"", "\"heredoc end\"",
  "\"'${'\"", "\"'{$'\"", "\"'::'\"", "\"'\\\\'\"", "\"'...'\"",
  "\"invalid character\"", "T_ERROR", "','", "']'", "'('", "')'", "';'",
  "'{'", "'}'", "'['", "'`'", "'\"'", "'$'", "$accept", "start",
  "reserved_non_modifiers", "semi_reserved", "ampersand", "identifier",
  "top_statement_list", "namespace_declaration_name", "namespace_name",
  "legacy_namespace_name", "name", "attribute_decl", "attribute_group",
  "attribute", "attributes", "attributed_statement", "top_statement",
  "$@1", "$@2", "use_type", "group_use_declaration",
  "mixed_group_use_declaration", "possible_comma",
  "inline_use_declarations", "unprefixed_use_declarations",
  "use_declarations", "inline_use_declaration",
  "unprefixed_use_declaration", "use_declaration", "const_list",
  "inner_statement_list", "inner_statement", "statement", "$@3",
  "catch_list", "catch_name_list", "optional_variable",
  "finally_statement", "unset_variables", "unset_variable",
  "function_declaration_statement", "is_reference", "is_variadic",
  "class_declaration_statement", "@4", "@5", "class_modifiers",
  "class_modifier", "trait_declaration_statement", "@6",
  "interface_declaration_statement", "@7", "enum_declaration_statement",
  "@8", "enum_backing_type", "enum_case", "enum_case_expr", "extends_from",
  "interface_extends_list", "implements_list", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "switch_case_list", "case_list", "case_separator", "match",
  "match_arm_list", "non_empty_match_arm_list", "match_arm",
  "match_arm_cond_list", "while_statement", "if_stmt_without_else",
  "if_stmt", "alt_if_stmt_without_else", "alt_if_stmt", "parameter_list",
  "non_empty_parameter_list", "attributed_parameter",
  "optional_property_modifiers", "property_modifier", "parameter",
  "optional_type_without_static", "type_expr", "type", "union_type",
  "intersection_type", "type_expr_without_static", "type_without_static",
  "union_type_without_static", "intersection_type_without_static",
  "return_type", "argument_list", "non_empty_argument_list", "argument",
  "global_var_list", "global_var", "static_var_list", "static_var",
  "class_statement_list", "attributed_class_statement", "class_statement",
  "class_name_list", "trait_adaptations", "trait_adaptation_list",
  "trait_adaptation", "trait_precedence", "trait_alias",
  "trait_method_reference", "absolute_trait_method_reference",
  "method_body", "variable_modifiers", "method_modifiers",
  "non_empty_member_modifiers", "member_modifier", "property_list",
  "property", "class_const_list", "class_const_decl", "const_decl",
  "echo_expr_list", "echo_expr", "for_exprs", "non_empty_for_exprs",
  "anonymous_class", "@9", "new_expr", "expr", "inline_function", "fn",
  "function", "backup_doc_comment", "backup_fn_flags", "backup_lex_pos",
  "returns_ref", "lexical_vars", "lexical_var_list", "lexical_var",
  "function_call", "class_name", "class_name_reference", "exit_expr",
  "backticks_expr", "ctor_arguments", "dereferenceable_scalar", "scalar",
  "constant", "class_constant", "optional_expr", "variable_class_name",
  "fully_dereferenceable", "array_object_dereferenceable", "callable_expr",
  "callable_variable", "variable", "simple_variable", "static_member",
  "new_variable", "member_name", "property_name", "array_pair_list",
  "possible_array_pair", "non_empty_array_pair_list", "array_pair",
  "encaps_list", "encaps_var", "encaps_var_offset",
  "internal_functions_in_yacc", "isset_variables", "isset_variable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    61,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
      63,    58,   284,   285,   286,   124,    94,   287,   288,   289,
     290,   291,   292,   293,    60,   294,    62,   295,    46,   296,
     297,    43,    45,    42,    47,    37,    33,   298,   126,   299,
     300,   301,   302,   303,   304,   305,    64,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,    44,    93,
      40,    41,    59,   123,   125,    91,    96,    34,    36
};
# endif

#define YYPACT_NINF -904

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-904)))

#define YYTABLE_NINF -553

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-553)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -904,    52,  1711,  -904,  6007,  6007,  6007,  6007,  6007,  6007,
    6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,
    6007,  6007,  6007,  6007,  6007,  -904,  -904,    67,  -904,  -904,
    -904,  -904,  -904,  -904,   -57,   790,   -47,    47,  6007,  4675,
      94,   110,   141,   151,   165,   190,  6007,  6007,    86,  -904,
    -904,   116,  6007,   156,   268,   -24,   159,  -904,  -904,   226,
     265,   288,   316,  -904,  -904,  -904,  -904,  7467,   324,   348,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,   231,   683,
     683,   201,  6007,  -904,  -904,  4823,    60,   109,   -36,   125,
    -904,   858,  -904,  -904,  -904,  -904,  -904,   343,  -904,  -904,
    -904,  -904,  -904,   398,  -904,   287,  -904,  -904,  6793,  -904,
      49,    49,  -904,   207,   309,  -904,   173,   363,   370,   377,
     346,   365,   367,   147,  -904,  -904,  -904,  -904,   185,   223,
    8115,    49,  8115,  8115,  8115,  8115,  3784,  8205,  3784,   322,
     322,    48,   322,   322,   322,   322,   322,   322,   322,   322,
     322,  -904,  -904,  6007,  -904,  -904,  6007,  -904,   -27,  -904,
     387,   365,  -904,   401,  6007,  -904,  6007,   -61,  -904,  8115,
     475,  6007,  6007,  6007,   116,  6007,  6007,  8115,   400,   403,
     405,   562,    84,  -904,   415,  -904,  -904,  -904,  -904,  -904,
    -904,  -904,    42,   529,   417,   172,  -904,   200,  -904,  -904,
     579,   227,  -904,  -904,   683,  6007,  6007,   426,   526,   528,
     535,   544,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,  -904,
    -904,  -904,  -904,  -904,   449,   456,  4823,  4823,  -904,   455,
     365,  6007,  4823,   461,  -904,  -904,   419,   419,   281,   -34,
    -904,  5267,   683,   222,  -904,  1254,  1859,  -904,  -904,   464,
    6007,   683,  8017,   470,  -904,   473,  -904,    17,   472,   166,
      17,    32,  6007,  -904,  1091,  -904,   185,  -904,  -904,  -904,
    -904,  -904,   480,  4675,   483,   623,   484,  6007,  6007,  6007,
    5415,  6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,
    6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,
    6007,  6007,  6007,  6007,  6007,   199,  6007,  -904,  -904,  -904,
     587,  3790,  3790,   -21,   -21,  6007,  6007,  -904,  4971,  6007,
    6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,  6007,
    6007,  6007,  -904,  -904,  -904,  6007,  6842,   365,  6891,  -904,
     -24,  -904,  -904,   -21,   -21,   -24,  6007,  6007,   492,  6940,
    6007,  -904,   494,  6989,   493,   498,  8115,  7918,    68,  7038,
    7087,  -904,  -904,  -904,  6007,   116,  -904,  -904,  2007,   596,
     505,    44,   516,   317,  -904,   529,  -904,   -24,  -904,  6007,
     614,  -904,   525,  -904,   148,  8115,   530,  -904,  7136,   524,
     563,  -904,   566,   671,  -904,   532,  -904,   536,   537,   231,
     534,  -904,  7185,   541,   632,   637,   307,  -904,  -904,   205,
    6450,   539,  -904,  -904,  -904,   329,   546,  -904,   858,  -904,
    -904,  -904,  4823,  8115,   439,  5119,   698,  4823,  -904,  -904,
    6499,  6007,  6007,  6007,  6007,  6007,  6007,  5563,  6007,    18,
     -57,   790,   -14,   190,   686,   688,   146,   265,   288,   324,
     348,   689,   690,   692,   694,   695,   696,   699,   701,  5711,
    -904,   703,   567,  -904,  8115,  -904,   655,  6007,  -904,  6007,
    -904,  -904,  8163,  7605,  3784,  6007,  8066,  6154,  6303,  7447,
    7735,  8236,  5167,  5167,  5315,  5315,  5315,  5315,  5315,  1550,
    1550,  1550,  1550,  1069,  1191,  1191,   531,   531,    48,    48,
      48,  -904,   322,   569,  -904,   570,  6007,   572,   575,   365,
     572,   575,   365,  -904,  6007,  -904,   365,   365,  6548,   577,
     683,  3784,  3784,  3784,  3784,  3784,  3784,  3784,  3784,  3784,
    3784,  3784,  3784,  3784,  3784,  3784,  -904,   563,  -904,  -904,
    -904,  -904,  -904,  6597,   578,  -904,  3935,  -904,  6007,  4083,
    6007,  6007,  7868,  -904,   -15,   581,  8115,  -904,  -904,  -904,
     290,   582,  -904,  -904,   649,  -904,  -904,  8115,  -904,   683,
     580,  6007,   591,  -904,  -904,   231,   630,   593,   231,  -904,
      74,   630,  -904,  1415,   751,  -904,  -904,  -904,   598,  -904,
    -904,  -904,   687,  -904,  -904,  -904,   602,  -904,  6007,  -904,
    -904,   601,  -904,   604,   603,   683,  8115,  6007,  -904,  -904,
    -904,  8115,  6007,  1267,   605,   563,  7234,  7283,  2155,  6154,
    6007,   -46,   610,   -46,  6646,  -904,  -904,  6695,  -904,  -904,
    -904,  -904,   419,   630,  -904,  -904,  -904,  -904,  7332,  -904,
    -904,  -904,   609,  8115,   612,  4823,   683,    20,    24,  4231,
     615,   617,  -904,  5859,  -904,   409,   691,   450,   626,  -904,
    -904,   450,  -904,   619,  -904,  -904,  -904,   231,  -904,  -904,
     631,  -904,   627,   390,  -904,  -904,  -904,  -904,  -904,    87,
     769,   768,  -904,  -904,  1563,  -904,  6007,  -904,  -904,  7381,
     634,   751,  4823,   478,  3784,  8115,  6007,  -904,  -904,   630,
    4675,   776,   639,  6154,   661,   641,   646,  -904,   215,  -904,
     -46,   647,  -904,  -904,  -904,  3635,   650,  2303,  6007,  4823,
     662,    25,  7868,  4379,  -904,  -904,  -904,  -904,   374,  -904,
     113,   651,   658,   665,  -904,   667,  8115,   666,   668,  -904,
     764,  -904,   290,   670,   672,  -904,  -904,   631,   673,   916,
     231,  -904,  -904,   390,   390,   390,   390,   675,  -904,  3784,
     677,  -904,   674,  -904,  -904,  -904,  -904,  -904,   808,    63,
    -904,     8,  -904,  -904,  -904,  -904,  -904,   814,  -904,   266,
     819,   818,   700,   742,   702,  -904,   697,   706,   708,    26,
     710,  -904,  -904,  -904,  2451,   557,   712,  6007,    16,   130,
    -904,  -904,   868,  -904,  5859,  -904,  6007,   871,   231,  -904,
    -904,  -904,  -904,   450,   713,  -904,  -904,   231,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  1010,  -904,  -904,
    -904,   174,   402,   561,  -904,  -904,  1337,  -904,  -904,  -904,
    -904,  -904,  -904,   751,   716,  3635,    74,   872,  -904,  -904,
    -904,   707,     8,     8,     8,     8,   808,   720,   808,  -904,
    -904,  4527,  -904,  4379,  2599,   719,   721,  -904,  6744,  -904,
    -904,  -904,  -904,  6007,  -904,  8115,  6007,    21,  -904,  2747,
    -904,  -904,  3857,  7612,   219,  -904,   820,  7612,    49,  -904,
    -904,  4744,  -904,  -904,  -904,  -904,   821,  -904,  -904,  -904,
    -904,  -904,   245,  -904,  4801,  -904,  -904,  -904,  -904,   728,
    -904,  -904,  -904,  3635,  8115,  8115,   231,  -904,   731,  -904,
    -904,   876,  -904,  6162,  -904,   887,   323,  -904,   890,   345,
    -904,  7612,  -904,  4892,  -904,  -904,   734,  -904,   832,   743,
    -904,   739,  -904,  2895,  -904,  3635,  -904,   744,  6007,   746,
     752,  -904,  -904,  6307,  -904,   747,   750,   817,   807,   762,
    6007,  -904,   820,  -904,  6007,  7612,  -904,  -904,  -904,  6007,
     910,  -904,  -904,   245,   756,  -904,   757,  -904,  8115,  -904,
    -904,  -904,  -904,  -904,  7757,   231,  7612,  8115,  -904,  8115,
    -904,   761,  8115,  6007,  3043,  -904,  -904,  3191,  -904,  3339,
    -904,  -904,  7612,   631,  -904,  -904,  -904,   -46,  -904,  8115,
    -904,  -904,  -904,  -904,   766,  -904,  -904,   808,  -904,   372,
    -904,  -904,  -904,  3487,  -904,  -904
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      86,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     440,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   485,   486,    93,    95,    96,
      94,   526,   162,   483,     0,     0,   474,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   504,   504,     0,   453,
     452,     0,   504,     0,     0,     0,   469,   195,   196,     0,
       0,     0,     0,   191,   197,   199,   201,   116,     0,     0,
     494,   495,   496,   501,   497,   498,   499,   500,     0,     0,
       0,     0,     0,   169,   144,   545,   476,     0,     0,   493,
     102,     0,   110,    85,   109,   104,   105,     0,   193,   106,
     107,   108,   449,   246,   150,     0,   151,   423,     0,   445,
     457,   457,   521,     0,   490,   437,   491,   492,     0,   511,
       0,     0,   522,   367,   516,   523,   427,    93,   469,     0,
     444,   457,   574,   575,   577,   578,   439,   441,   443,   408,
     409,   410,   411,   428,   429,   430,   431,   432,   433,   434,
     436,   372,   172,     0,   469,   362,     0,   470,     0,   365,
     471,   479,   531,   472,   504,   435,     0,     0,   356,   357,
       0,     0,   358,     0,     0,     0,     0,   505,     0,     0,
       0,     0,     0,   142,     0,   144,    89,    92,    90,   123,
     124,    91,   139,     0,     0,     0,   134,     0,   300,   301,
     304,     0,   303,   447,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     3,     4,     6,     7,     8,     9,    10,
      46,    47,    11,    13,    16,    17,    83,    88,     5,    12,
      14,    15,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    49,    50,    51,    52,    71,    53,
      41,    42,    43,    70,    44,    45,    30,    31,    32,    34,
      35,    36,    74,    75,    76,    77,    78,    79,    80,    37,
      38,    39,    40,    61,    59,    60,    72,    56,    57,    58,
      48,    54,    55,    66,    67,    68,    62,    63,    65,    64,
      69,    73,    84,    87,   114,     0,   545,   545,    99,   127,
      97,     0,   545,   509,   512,   510,   387,   389,   560,     0,
     488,     0,     0,     0,   558,     0,     0,    82,    81,     0,
       0,     0,   550,     0,   548,   544,   546,   477,     0,   478,
       0,     0,     0,   528,     0,   465,     0,   103,   111,   446,
     189,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   458,   454,
     454,     0,     0,     0,     0,     0,   504,   468,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   386,   388,   454,     0,     0,   479,     0,   366,
       0,   480,   364,     0,     0,     0,     0,   504,     0,     0,
       0,   161,     0,     0,     0,   359,   361,     0,     0,     0,
       0,   156,   157,   171,     0,     0,   122,   158,     0,     0,
       0,   139,     0,     0,   118,     0,   120,     0,   159,     0,
       0,   160,   127,   181,   507,   581,   127,   579,     0,     0,
     208,   454,   210,   203,   113,     0,    86,     0,     0,   128,
       0,    98,     0,     0,     0,     0,     0,   487,   559,     0,
       0,   507,   557,   489,   556,   422,     0,   149,     0,   146,
     143,   145,   545,   553,   507,     0,   482,   545,   438,   484,
       0,    33,     3,     4,     6,     7,    46,   440,    13,    93,
       5,    12,   474,    71,   453,   452,    74,    39,    40,    48,
      54,   494,   495,   496,   501,   497,   498,   499,   500,     0,
     291,     0,   127,   294,   296,   448,     0,     0,   247,     0,
     144,   250,   392,   394,   393,     0,     0,   426,   390,   391,
     395,   398,   396,   397,   414,   415,   412,   413,   420,   416,
     417,   418,   419,   399,   406,   407,   400,   401,   402,   404,
     405,   421,   403,     0,   454,     0,     0,   502,   529,     0,
     503,   530,     0,   541,     0,   543,   524,   525,     0,     0,
       0,   370,   373,   374,   375,   377,   378,   379,   380,   381,
     382,   383,   384,   376,   385,   442,   576,   208,   473,   536,
     534,   535,   537,     0,     0,   475,     0,   355,     0,     0,
     358,     0,     0,   167,     0,     0,   454,   141,   173,   140,
       0,     0,   119,   121,   139,   133,   299,   305,   302,   128,
       0,   128,     0,   573,   112,     0,   212,     0,     0,   454,
       0,   212,    86,     0,     0,   481,   100,   101,   508,   482,
     562,   563,     0,   568,   571,   569,     0,   565,     0,   564,
     567,     0,   147,     0,     0,     0,   549,     0,   547,   527,
     293,   298,     0,   128,     0,   208,     0,     0,     0,   425,
       0,   258,     0,   258,     0,   466,   467,     0,   519,   520,
     518,   517,   371,   212,   533,   532,   144,   244,     0,   144,
     242,   152,     0,   360,     0,   545,     0,     0,   507,     0,
     228,   228,   155,   234,   354,   179,   137,     0,   127,   130,
     135,     0,   182,     0,   580,   572,   209,     0,   454,   307,
     211,   315,     0,     0,   273,   282,   283,   284,   204,   268,
     270,   271,   272,   454,     0,   117,     0,   570,   561,     0,
       0,   555,   545,   507,   369,   297,     0,   295,   292,   212,
       0,     0,     0,   424,   258,     0,   127,   254,   266,   257,
     258,     0,   539,   542,   454,   248,     0,     0,   358,   545,
       0,   507,     0,     0,   144,   222,   168,   228,     0,   228,
       0,   127,     0,   127,   236,   127,   240,     0,     0,   170,
       0,   136,   128,     0,   127,   132,   164,   213,     0,   336,
       0,   307,   269,     0,     0,     0,     0,     0,   115,   368,
       0,   148,     0,   454,   245,   144,   251,   256,   289,   258,
     252,     0,   262,   261,   260,   263,   259,   185,   267,   278,
     280,   281,     0,   459,     0,   153,     0,     0,     0,   482,
       0,   144,   220,   165,     0,     0,     0,     0,     0,     0,
     224,   128,     0,   233,   128,   235,   128,     0,     0,   144,
     138,   129,   126,   128,     0,   307,   454,     0,   343,   344,
     345,   342,   341,   340,   346,   335,   198,   336,   311,   312,
     306,   266,     0,   334,   338,   316,   336,   274,   276,   275,
     277,   307,   566,   554,     0,   249,     0,     0,   255,   279,
     186,   187,     0,     0,     0,     0,   289,     0,   289,   307,
     243,     0,   216,     0,     0,     0,     0,   226,     0,   231,
     232,   144,   225,     0,   237,   241,     0,   177,   175,     0,
     131,   125,   336,     0,     0,   313,     0,     0,   457,   339,
     200,   336,   307,   290,   455,   188,     0,   285,   287,   286,
     288,   455,     0,   455,   336,   144,   218,   154,   166,     0,
     223,   227,   144,   230,   239,   238,     0,   178,     0,   180,
     192,   206,   317,     0,   314,   454,     0,   348,     0,     0,
     352,     0,   202,   336,   456,   454,     0,   463,     0,   127,
     462,     0,   363,     0,   221,   229,   176,     0,     0,     0,
      74,   318,   329,     0,   320,     0,     0,     0,   330,     0,
       0,   349,     0,   308,     0,     0,   309,   454,   190,     0,
     264,   144,   464,   128,     0,   144,     0,   144,   207,   205,
     319,   321,   322,   323,     0,     0,     0,   454,   347,   454,
     351,     0,   455,     0,     0,   461,   460,     0,   219,     0,
     325,   326,   328,   324,   331,   350,   353,   258,   451,   265,
     455,   455,   174,   327,     0,   184,   450,   289,   455,     0,
     332,   144,   455,     0,   310,   333
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -904,  -904,  -119,  -904,  -102,   -48,  -453,  -904,   -11,  -179,
     -28,   477,  -904,   -50,    -2,     2,  -904,  -904,  -904,   885,
    -904,  -904,  -271,  -904,  -904,   758,   132,  -703,   504,   778,
    -167,  -904,     9,  -904,  -904,  -904,  -904,  -904,  -904,   315,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,   859,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -904,  -904,  -556,  -904,  -571,
     163,  -904,    28,  -904,  -904,  -666,    19,  -904,  -904,  -904,
      88,  -904,  -904,  -904,  -904,  -904,  -904,  -683,  -904,   124,
    -904,  -904,   195,    69,    55,  -623,  -904,  -904,  -904,  -682,
    -904,  -904,  -903,   -86,  -904,   291,  -904,   517,  -904,   523,
    -776,    82,  -904,  -725,  -904,  -904,   -40,  -904,  -904,  -904,
    -904,  -904,  -904,  -904,  -904,  -877,  -904,   -52,  -904,   -51,
     550,  -904,   573,  -605,  -904,   828,  -904,  -904,    54,   -10,
    -904,    -1,    50,  -857,  -904,  -109,  -904,  -904,   -45,  -904,
      56,   621,  -904,  -904,   585,   -74,  -904,   -59,   -49,   -20,
    -904,  -904,  -904,  -904,  -904,   -43,   230,  -904,  -904,   620,
    -156,  -208,   497,  -904,  -904,   482,   306,  -904,  -904,  -904,
     358
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   291,   292,   321,   531,     2,   294,   726,   192,
      89,   298,   299,    90,   129,   489,    93,   465,   295,   727,
     442,   194,   470,   728,   814,   195,   729,   730,   196,   182,
     316,   490,   491,   719,   725,   947,   988,   809,   452,   453,
      95,   921,   966,    96,   536,   208,    97,    98,    99,   209,
     100,   210,   101,   211,   651,   898,  1019,   646,   649,   738,
     717,   977,   863,   796,   722,   798,   941,   102,   802,   803,
     804,   805,   711,   103,   104,   105,   106,   775,   776,   777,
     778,   846,   779,   847,   748,   749,   750,   751,   848,   752,
     850,   851,   917,   411,   532,   533,   197,   198,   201,   202,
     819,   899,   900,   740,   994,  1023,  1024,  1025,  1026,  1027,
    1028,  1092,   901,   902,   903,   904,   996,   997,   999,  1000,
     183,   167,   168,   424,   425,   159,   407,   107,   108,   109,
     110,   131,   575,  1004,  1039,   379,   928,  1009,  1010,   112,
     113,   161,   165,   328,   412,   114,   115,   116,   117,   178,
     118,   119,   120,   121,   122,   123,   124,   125,   163,   579,
     586,   323,   324,   325,   326,   313,   314,   666,   126,   456,
     457
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,   111,   380,   335,    92,   303,   303,   157,   378,   378,
     781,    94,   817,   653,   441,   712,   720,   -14,   438,   293,
     304,   304,   404,   971,   811,   973,   959,   179,   815,   378,
     305,   305,   184,   158,   792,   387,   306,   307,  -214,  -215,
    -217,   337,    31,   191,   308,   906,   203,   939,   170,   -83,
     157,   703,     3,   583,    31,   800,   986,    31,   130,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   337,
     753,   339,   127,    28,    29,    30,   317,   318,   467,   468,
     111,   160,   169,   338,   473,   308,   849,   852,   152,   987,
     177,   177,    78,   155,   743,   375,   177,   420,   337,   952,
     308,   421,   482,   153,  1006,   376,  1011,   -83,   203,   339,
     822,    78,   823,   164,   824,  -253,   477,   311,   312,   769,
     303,   865,   784,   869,   300,   961,   315,   332,   308,   322,
     327,   439,    88,   439,   418,   304,   745,   746,   127,    28,
      29,    30,   584,   974,    88,   305,   164,    88,   721,   919,
     180,   454,   954,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,  1072,   311,   312,
     950,   640,   191,   857,  1088,   642,  1003,   308,   940,   330,
     181,   793,   744,   311,   312,  -214,  -215,  -217,   833,   754,
     907,   908,   909,   910,   841,  1078,   440,   406,   631,   499,
     408,    78,   745,   746,   471,   867,   868,   166,   177,   849,
     419,   311,   312,  1085,  1086,   423,   426,   427,   587,   429,
     430,  1089,   867,   868,  -128,  1094,   435,   200,   303,   623,
     967,   968,   969,   970,   308,   841,   482,   303,   127,    28,
      29,    30,   435,   304,    49,    50,   436,   610,   611,   455,
     458,   684,   304,   305,   171,   162,   634,    49,    50,   481,
     311,   312,   305,   127,    28,    29,    30,    31,   494,   308,
     172,   309,   317,   318,   673,   199,   590,   870,  -470,   127,
      28,    29,    30,    49,    50,   334,   402,   403,  -507,  -507,
     308,   922,   482,   923,   942,   127,    28,    29,    30,  -469,
    -507,   173,   745,   746,   488,   111,  -183,   154,   333,  -183,
    -507,   174,  -507,  1007,  -512,  -512,   535,   311,   312,   185,
    1073,    49,    50,   577,   580,   175,   842,   843,   844,   845,
     445,   336,   186,   187,   446,   188,  -512,   157,  -512,   154,
     322,   322,   538,   745,   746,   472,   322,   344,   345,   662,
     176,   310,   311,   312,   186,   480,   589,   188,   447,   156,
     381,    78,   448,   688,   493,   346,   189,    88,   190,   667,
     668,   663,   483,   311,   312,   664,   500,   820,   534,   376,
     665,   992,   993,   675,  1084,   450,   204,   614,   189,   451,
     190,   542,   543,   544,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   573,
     572,   160,   474,   475,   191,   205,   488,   111,   337,   588,
     177,   157,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   604,   476,   813,   206,   605,
    -509,  -509,    57,    58,   127,    28,    29,    30,   342,   343,
     613,   177,  -509,   340,   169,   866,   867,   868,   339,  -515,
    -508,  -508,  -509,   157,  -509,   445,   207,   111,   626,   633,
     672,  1032,  -508,   695,   296,  1033,   696,   383,   384,  -514,
     698,   699,  -508,   637,  -508,   840,   203,   790,   744,   158,
      49,   647,   957,  1035,  -510,  -510,   303,  1036,   297,   385,
     716,   386,   807,   808,   186,   300,  -510,   188,   745,   746,
     872,   304,   875,   382,   877,   334,  -510,  -513,  -510,   785,
    -506,   305,   787,   884,  1090,  1091,   322,   702,   303,   676,
     410,   322,   413,   414,   832,   130,   132,   133,   134,   135,
     136,   137,   151,   304,   415,   303,   422,   160,   329,   331,
    -507,  -507,   431,   305,   416,   432,   417,   433,   434,   718,
     304,   858,  -507,   681,   372,   373,   374,   437,   375,   444,
     305,   686,  -507,   687,  -507,   449,   454,   459,   376,   689,
     460,   303,   461,   186,   187,   162,   188,  -552,  -552,   462,
    -552,   578,   581,   585,   585,   478,   304,   157,   463,   484,
     157,   464,   747,   469,   692,   707,   305,   864,   710,   466,
     694,  -515,   763,   478,   492,   484,   478,   484,   697,   496,
     609,   497,   303,   585,   585,   612,  -551,  -551,   498,  -551,
     537,    91,   111,   539,   540,    92,   541,   304,   936,   867,
     868,   574,    94,   615,   618,   620,   621,   305,   915,  -337,
     629,  -337,   708,   791,   426,   713,   724,   199,   630,   888,
     889,   890,   891,   892,   893,   894,   488,   111,   632,   774,
     716,   774,   200,   639,   934,   455,   644,   645,   641,   742,
     648,   736,   650,   657,   741,   652,   660,   654,   655,   157,
     659,   661,   949,   670,   677,   747,   671,   -43,   303,   -70,
     -66,   -67,   759,   -68,   337,   -62,   -63,   -65,   795,   685,
     -64,   764,   -69,   304,   682,   683,   765,   534,  1044,   691,
     693,   162,  -538,   305,   773,  -540,   701,   705,   439,   718,
     747,   733,    91,   111,   723,   731,    92,   127,    28,    29,
      30,    31,   735,    94,    33,   737,   739,   756,  -514,   322,
     757,   758,   760,   762,   983,   761,   768,   806,   774,   834,
     780,   788,   789,   488,   111,   488,   111,   797,   818,   799,
     810,   816,   157,   741,   812,   747,   747,   747,   747,   820,
     821,   154,   862,   827,   825,   826,   831,   835,  1013,    78,
     829,   836,   838,   747,   839,  1015,   322,   897,   853,   871,
     681,    69,   855,    70,    71,    72,    73,    74,    75,    76,
      77,   859,   873,   874,   854,   876,   878,   774,   880,   916,
     883,   879,   426,   322,   882,   913,   885,   337,   911,  1001,
     157,   912,   920,   301,   924,   925,   378,   927,   302,   157,
      87,    88,   488,   111,   127,    28,    29,    30,    31,   930,
    1008,   926,   965,   747,  1064,   929,   905,   931,  1067,   932,
    1069,   933,   943,   914,   937,   946,   964,   951,   747,   962,
     972,   980,  1018,   981,   747,   747,   747,   747,   995,  1005,
    1014,   958,  1017,  1030,   897,   991,  1034,  1041,   154,   998,
    1042,  1043,  1045,   488,   111,  -469,  1054,  1047,  1049,  1052,
     155,   938,  1053,  1055,  1093,  1056,  1063,  1066,   806,  1068,
     945,  1077,   488,   111,   948,  1071,   953,  1087,    78,   193,
     976,  1008,   862,   741,   881,  1022,   656,   488,   111,   635,
     897,   443,   428,  1037,   732,   860,   341,   982,   157,   897,
     156,   978,   944,   918,   636,   157,    49,    50,    88,   837,
     956,   963,   897,   638,   767,  1022,   336,    57,    58,   955,
    1058,   488,   111,  1051,  1060,   627,   409,   998,    63,    64,
      65,    66,   607,   617,   678,   157,   571,   984,  1065,   734,
     985,   897,   582,     0,     0,     0,    78,     0,  1074,     0,
       0,   488,   111,   488,   111,     0,     0,     0,   886,     0,
       0,     0,     0,     0,  1083,     0,     0,   157,     0,     0,
       0,   887,     0,     0,   888,   889,   890,   891,   892,   893,
     894,   895,  1016,     0,     0,  1031,     0,     0,     0,  1029,
       0,     0,     0,     0,     0,  1040,     0,     0,     0,     0,
       0,     0,   488,   111,    78,   488,   111,   488,   111,     0,
       0,     0,  1048,     0,     0,   774,     0,     0,     0,  1029,
       0,     0,     0,     0,  1057,     0,     0,  1061,  1059,     0,
     896,   488,   111,  1062,   501,     0,   502,   503,   504,   505,
     217,   218,   219,   506,   507,     0,    11,  1075,     0,  1076,
       0,   741,   886,     0,     0,     0,     0,  1079,   368,   369,
     370,   371,   372,   373,   374,     0,   375,     0,   888,   889,
     890,   891,   892,   893,   894,   895,   376,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,   222,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    78,   508,
       0,   224,   225,    25,    26,   509,    28,    29,    30,    31,
       0,     0,    33,     0,     0,   510,   511,   512,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   513,   249,   250,   251,   514,
     515,   254,   255,   256,   257,   258,   259,   260,   261,   516,
     263,   264,   265,   266,   267,   268,   269,   270,   517,   518,
       0,   273,   274,   275,   276,   277,   278,   279,   519,   520,
     282,   521,   522,   523,   524,   525,   526,   527,   528,    78,
      79,    80,   370,   371,   372,   373,   374,     0,   375,     0,
      81,     0,     0,     0,     0,     0,   529,     0,   376,     0,
       0,    82,   530,   347,   348,   349,    85,    86,    87,    88,
     501,     0,   502,   503,   504,   505,   217,   218,   219,   506,
     507,     0,    11,     0,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
       0,   375,     0,     0,     0,     0,     0,     0,    12,    13,
       0,   376,     0,    14,   222,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,   508,     0,   224,   225,    25,
      26,   509,    28,    29,    30,    31,     0,     0,    33,     0,
       0,   510,   511,   512,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   513,   249,   250,   251,   514,   515,   254,   255,   256,
     257,   258,   259,   260,   261,   516,   263,   264,   265,   266,
     267,   268,   269,   270,   517,   518,     0,   273,   274,   275,
     276,   277,   278,   279,   519,   520,   282,   521,   522,   523,
     524,   525,   526,   527,   528,    78,    79,    80,     4,     0,
       5,     6,     7,     8,     0,   485,    81,     9,    10,     0,
      11,     0,   766,     0,     0,     0,     0,    82,     0,   886,
       0,     0,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,   887,     0,     0,   888,   889,   890,   891,   892,
     893,   894,   895,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,    78,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,   960,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      54,     0,    55,    56,    57,    58,     0,     0,     0,     0,
       0,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,    67,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     4,     0,     5,     6,
       7,     8,     0,     0,    81,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    82,     0,    83,    84,   755,
      85,    86,    87,    88,  -553,  -553,  -553,  -553,   367,   368,
     369,   370,   371,   372,   373,   374,     0,   375,     0,     0,
       0,     0,     0,     0,    12,    13,     0,   376,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,     0,     0,    34,    35,    36,
      37,     0,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    54,     0,
      55,    56,    57,    58,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,    64,    65,    66,     0,     0,    67,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     4,     0,     5,     6,     7,     8,
       0,     0,    81,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    82,     0,    83,    84,   828,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,     0,    33,     0,     0,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,    54,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,    59,    60,    61,
      62,    63,    64,    65,    66,     0,     0,    67,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     4,     0,     5,     6,     7,     8,     0,     0,
      81,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    82,     0,    83,    84,     0,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      33,     0,     0,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,     0,
      52,    53,     0,     0,     0,     0,    55,    56,    57,    58,
       0,     0,     0,     0,     0,    59,    60,    61,   486,    63,
      64,    65,    66,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       4,     0,     5,     6,     7,     8,     0,     0,    81,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    82,
       0,    83,    84,   487,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,    52,    53,
       0,     0,     0,     0,    55,    56,    57,    58,     0,     0,
       0,     0,     0,    59,    60,    61,   486,    63,    64,    65,
      66,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     4,     0,
       5,     6,     7,     8,     0,     0,    81,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    82,     0,    83,
      84,   628,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,   772,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
       0,    59,    60,    61,   486,    63,    64,    65,    66,     0,
       0,     0,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     4,     0,     5,     6,
       7,     8,     0,     0,    81,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    82,     0,    83,    84,     0,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,     0,     0,    34,    35,    36,
      37,     0,    38,    39,    40,   856,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,     0,    52,    53,     0,     0,     0,     0,
      55,    56,    57,    58,     0,     0,     0,     0,     0,    59,
      60,    61,   486,    63,    64,    65,    66,     0,     0,     0,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     4,     0,     5,     6,     7,     8,
       0,     0,    81,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    82,     0,    83,    84,     0,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,     0,    33,     0,     0,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,     0,    42,     0,    43,   935,
       0,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,    52,    53,     0,     0,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,    59,    60,    61,
     486,    63,    64,    65,    66,     0,     0,     0,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     4,     0,     5,     6,     7,     8,     0,     0,
      81,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    82,     0,    83,    84,     0,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      33,     0,     0,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,   979,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,     0,
      52,    53,     0,     0,     0,     0,    55,    56,    57,    58,
       0,     0,     0,     0,     0,    59,    60,    61,   486,    63,
      64,    65,    66,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       4,     0,     5,     6,     7,     8,     0,     0,    81,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    82,
       0,    83,    84,     0,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,    52,    53,
       0,     0,     0,     0,    55,    56,    57,    58,     0,     0,
       0,     0,     0,    59,    60,    61,   486,    63,    64,    65,
      66,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     4,     0,
       5,     6,     7,     8,     0,     0,    81,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    82,     0,    83,
      84,   989,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,  1046,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
       0,    59,    60,    61,   486,    63,    64,    65,    66,     0,
       0,     0,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     4,     0,     5,     6,
       7,     8,     0,     0,    81,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    82,     0,    83,    84,     0,
      85,    86,    87,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,     0,     0,    34,    35,    36,
      37,     0,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,     0,    52,    53,     0,     0,     0,     0,
      55,    56,    57,    58,     0,     0,     0,     0,     0,    59,
      60,    61,   486,    63,    64,    65,    66,     0,     0,     0,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     4,     0,     5,     6,     7,     8,
       0,     0,    81,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    82,     0,    83,    84,  1080,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,     0,    33,     0,     0,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,    52,    53,     0,     0,     0,     0,    55,    56,
      57,    58,     0,     0,     0,     0,     0,    59,    60,    61,
     486,    63,    64,    65,    66,     0,     0,     0,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     4,     0,     5,     6,     7,     8,     0,     0,
      81,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    82,     0,    83,    84,  1081,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      33,     0,     0,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,     0,
      52,    53,     0,     0,     0,     0,    55,    56,    57,    58,
       0,     0,     0,     0,     0,    59,    60,    61,   486,    63,
      64,    65,    66,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       4,     0,     5,     6,     7,     8,     0,     0,    81,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    82,
       0,    83,    84,  1082,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,    52,    53,
       0,     0,     0,     0,    55,    56,    57,    58,     0,     0,
       0,     0,     0,    59,    60,    61,   486,    63,    64,    65,
      66,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     4,     0,
       5,     6,     7,     8,     0,     0,    81,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    82,     0,    83,
      84,  1095,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,    57,    58,     0,     0,     0,     0,
       0,    59,    60,    61,   486,    63,    64,    65,    66,     0,
       0,     0,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,     0,     0,
       0,     0,     0,   212,    81,   213,   214,   215,   216,   217,
     218,   219,   220,   221,     0,    82,     0,    83,    84,     0,
      85,    86,    87,    88,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
       0,   375,     0,     0,     0,     0,     0,   222,     0,     0,
       0,   376,     0,     0,     0,     0,     0,     0,   223,     0,
     224,   225,     0,     0,   226,     0,     0,     0,    31,     0,
       0,     0,     0,     0,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     0,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,     4,     0,
       5,     6,     7,     8,     0,     0,     0,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,   886,
       0,     0,     0,   576,     0,     0,   706,     0,    88,     0,
       0,     0,   887,     0,     0,   888,   889,   890,   891,   892,
     893,   894,   895,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,    78,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,   990,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     4,     0,     5,     6,
       7,     8,     0,     0,    81,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    82,     0,    83,    84,     0,
      85,    86,    87,    88,   709,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,     0,     0,    34,    35,    36,
      37,     0,    38,    39,    40,     0,    41,     0,    42,     0,
      43,     0,     0,    44,     0,     0,     0,    45,    46,    47,
      48,    49,    50,     0,    52,    53,     0,     0,     0,     0,
      55,    56,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     4,     0,     5,     6,     7,     8,
       0,     0,    81,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    82,     0,    83,    84,     0,    85,    86,
      87,    88,   794,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,     0,    33,     0,     0,    34,    35,    36,    37,     0,
      38,    39,    40,     0,    41,     0,    42,     0,    43,     0,
       0,    44,     0,     0,     0,    45,    46,    47,    48,    49,
      50,     0,    52,    53,     0,     0,     0,     0,    55,    56,
       0,     0,     0,     0,     0,     0,     0,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     4,     0,     5,     6,     7,     8,     0,     0,
      81,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    82,     0,    83,    84,     0,    85,    86,    87,    88,
     861,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      33,     0,     0,    34,    35,    36,    37,     0,    38,    39,
      40,     0,    41,     0,    42,     0,    43,     0,     0,    44,
       0,     0,     0,    45,    46,    47,    48,    49,    50,     0,
      52,    53,     0,     0,     0,     0,    55,    56,     0,     0,
       0,     0,     0,     0,     0,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       4,     0,     5,     6,     7,     8,     0,     0,    81,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    82,
       0,    83,    84,     0,    85,    86,    87,    88,   975,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,     0,    38,    39,    40,     0,
      41,     0,    42,     0,    43,     0,     0,    44,     0,     0,
       0,    45,    46,    47,    48,    49,    50,     0,    52,    53,
       0,     0,     0,     0,    55,    56,     0,     0,     0,     0,
       0,     0,     0,    59,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     4,     0,
       5,     6,     7,     8,     0,     0,    81,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    82,     0,    83,
      84,     0,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,    33,     0,     0,    34,
      35,    36,    37,     0,    38,    39,    40,     0,    41,     0,
      42,     0,    43,     0,     0,    44,     0,     0,     0,    45,
      46,    47,    48,    49,    50,     0,    52,    53,     0,     0,
       0,     0,    55,    56,     0,     0,     0,     0,     0,     0,
       0,    59,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     4,     0,     5,     6,
       7,     8,     0,     0,    81,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    82,   886,    83,    84,     0,
      85,    86,    87,    88,     0,     0,     0,     0,     0,   887,
     317,   318,   888,   889,   890,   891,   892,   893,   894,   895,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    78,     0,     0,    25,    26,   127,    28,    29,
      30,    31,     0,   886,    33,     0,     0,    34,    35,    36,
       0,     0,     0,     0,     0,     0,   887,     0,  1002,   888,
     889,   890,   891,   892,   893,   894,   895,    45,     0,     0,
       0,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,   128,     0,     0,     0,     0,     0,     0,     0,    78,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
     319,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     4,  1012,     5,     6,     7,     8,
       0,     0,    81,     9,    10,     0,    11,     0,   320,     0,
       0,     0,     0,    82,   886,     0,     0,     0,    85,    86,
      87,    88,     0,     0,     0,     0,     0,   887,   317,   318,
     888,   889,   890,   891,   892,   893,   894,   895,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      78,     0,     0,    25,    26,   127,    28,    29,    30,    31,
       0,     0,    33,     0,     0,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,  1038,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     4,     0,     5,     6,     7,     8,     0,     0,
      81,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     0,   317,   318,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,   127,    28,    29,    30,    31,     0,     0,
      33,     0,     0,    34,    35,    36,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,    45,   375,     0,     0,    49,    50,     0,
       0,     0,     0,     0,   376,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,   674,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       4,     0,     5,     6,     7,     8,     0,     0,    81,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,   127,    28,    29,    30,    31,     0,     0,    33,   479,
       0,    34,    35,    36,  -553,  -553,  -553,  -553,  -553,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,    45,   375,     0,     0,    49,    50,     0,     0,     0,
       0,     0,   376,     0,     0,   128,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     4,     0,
       5,     6,     7,     8,     0,     0,    81,     9,    10,     0,
      11,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    85,    86,    87,    88,   545,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,     0,    25,    26,   127,
      28,    29,    30,    31,     0,     0,    33,     0,     0,    34,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,     0,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     4,     0,     5,     6,
       7,     8,     0,     0,    81,     9,    10,     0,    11,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      85,    86,    87,    88,   -47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,     0,     0,     0,    25,    26,   127,    28,    29,
      30,    31,     0,     0,    33,     0,     0,    34,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,   128,     0,     0,     0,     0,     0,     0,     0,     0,
      60,    61,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    69,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     4,     0,     5,     6,     7,     8,
       0,     0,    81,     9,    10,     0,    11,     0,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
       0,     0,     0,    25,    26,   127,    28,    29,    30,    31,
       0,     0,    33,     0,     0,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,    60,    61,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     4,     0,     5,     6,     7,     8,     0,     0,
      81,     9,    10,     0,    11,     0,     0,     0,     0,     0,
       0,    82,   680,     0,     0,     0,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,     0,     0,
       0,    25,    26,   127,    28,    29,    30,    31,     0,     0,
      33,     0,     0,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   801,    45,     0,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,    60,    61,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       4,     0,     5,     6,     7,     8,     0,     0,    81,     9,
      10,     0,    11,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,    85,    86,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
       0,     0,     0,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,     0,    25,
      26,   127,    28,    29,    30,    31,     0,     0,    33,     0,
       0,    34,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,   128,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     0,     0,
       0,     0,     0,     0,     0,   212,    81,   213,   214,   215,
     216,   217,   218,   219,   220,   221,     0,    82,     0,     0,
       0,     0,    85,    86,    87,    88,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
       0,   375,     0,     0,     0,     0,     0,     0,     0,   222,
       0,   376,     0,     0,     0,     0,     0,     0,     0,     0,
     223,     0,   224,   225,     0,     0,   509,    28,    29,    30,
       0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
    1020,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     212,     0,   213,   214,   215,   216,   217,   218,   219,   220,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1021,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,     0,
     375,     0,     0,     0,   222,     0,     0,     0,     0,     0,
     376,     0,     0,     0,     0,   223,     0,   224,   225,     0,
       0,   509,    28,    29,    30,     0,     0,     0,     0,     0,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,  1020,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,     0,     0,     0,     0,   347,
     348,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     350,  1050,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,     0,   375,   347,   348,
     349,     0,     0,     0,     0,     0,     0,   376,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   350,
       0,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   347,   348,   349,
       0,     0,     0,     0,     0,     0,   376,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   350,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,     0,   375,   347,   348,   349,     0,
       0,     0,     0,     0,     0,   376,     0,     0,     0,     0,
       0,     0,     0,     0,   669,     0,     0,   350,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   347,   348,   349,     0,     0,
       0,     0,     0,     0,   376,     0,     0,     0,     0,     0,
       0,     0,     0,   679,     0,     0,   350,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,     0,   375,   347,   348,   349,     0,     0,     0,
       0,     0,     0,   376,     0,     0,     0,     0,     0,     0,
       0,     0,   700,     0,     0,   350,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,     0,   375,   347,   348,   349,     0,     0,     0,     0,
       0,     0,   376,     0,     0,     0,     0,     0,     0,     0,
       0,   704,     0,     0,   350,   939,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
       0,   375,   347,   348,   349,     0,     0,     0,     0,     0,
       0,   376,     0,     0,     0,     0,     0,     0,     0,     0,
     782,     0,     0,   350,     0,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,     0,
     375,   347,   348,   349,     0,     0,     0,     0,     0,     0,
     376,     0,     0,     0,     0,     0,     0,     0,     0,   783,
       0,     0,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,     0,   375,
     347,   348,   349,     0,     0,     0,     0,     0,     0,   376,
       0,     0,     0,     0,     0,     0,   940,     0,     0,     0,
       0,   350,     0,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,     0,   375,   347,
     348,   349,     0,     0,     0,     0,     0,     0,   376,     0,
       0,     0,     0,     0,     0,   377,     0,     0,     0,     0,
     350,     0,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,     0,   375,   347,   348,
     349,     0,     0,     0,     0,     0,     0,   376,     0,     0,
       0,     0,     0,   606,     0,     0,     0,     0,     0,   350,
       0,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,     0,   375,   347,   348,   349,
       0,     0,     0,     0,     0,     0,   376,     0,     0,     0,
       0,     0,   608,     0,     0,     0,     0,     0,   350,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,     0,   375,   347,   348,   349,     0,
       0,     0,     0,     0,     0,   376,     0,     0,     0,     0,
       0,   616,     0,     0,     0,     0,     0,   350,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   347,   348,   349,     0,     0,
       0,     0,     0,     0,   376,     0,     0,     0,     0,     0,
     619,     0,     0,     0,     0,     0,   350,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,     0,   375,   347,   348,   349,     0,     0,     0,
       0,     0,     0,   376,     0,     0,     0,     0,     0,   624,
       0,     0,     0,     0,     0,   350,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,     0,   375,   347,   348,   349,     0,     0,     0,     0,
       0,     0,   376,     0,     0,     0,     0,     0,   625,     0,
       0,     0,     0,     0,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
       0,   375,   347,   348,   349,     0,     0,     0,     0,     0,
       0,   376,     0,     0,     0,     0,     0,   643,     0,     0,
       0,     0,     0,   350,     0,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,     0,
     375,   347,   348,   349,     0,     0,     0,     0,     0,     0,
     376,     0,     0,     0,     0,     0,   658,     0,     0,     0,
       0,     0,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,     0,   375,
     347,   348,   349,     0,     0,     0,     0,     0,     0,   376,
       0,     0,     0,     0,     0,   770,     0,     0,     0,     0,
       0,   350,     0,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,     0,   375,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   376,     0,
       0,     0,     0,     0,   771,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     212,     0,   213,   214,   215,   216,   217,   218,   219,   220,
     221,     0,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   786,   375,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,     0,   224,   225,     0,
       0,   226,     0,     0,   227,     0,     0,     0,     0,     0,
     830,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,     0,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   212,   349,   213,   214,   215,
     216,   217,   218,   219,   220,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,     0,   375,     0,     0,     0,     0,     0,     0,   222,
       0,     0,   376,     0,     0,     0,     0,     0,     0,     0,
     223,     0,   224,   225,     0,     0,   226,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     212,     0,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,     0,   375,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   376,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,     0,   224,   225,     0,
       0,  1070,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   888,   889,   890,   891,   892,
     893,   894,   269,   270,   271,   272,     0,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   317,   318,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   347,   348,   349,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   127,    28,    29,    30,    31,     0,   350,    33,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,     0,   375,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   376,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   714,    69,     0,    70,    71,
      72,    73,    74,    75,    76,    77,     0,   622,     0,     0,
       0,     0,     0,     0,     0,     0,   347,   348,   349,     0,
       0,   495,     0,     0,     0,     0,     0,     0,   301,     0,
       0,     0,     0,   715,     0,    87,    88,   350,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,     0,   375,   347,   348,   349,     0,     0,
       0,     0,     0,     0,   376,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   350,   690,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,     0,   375,   347,   348,   349,     0,     0,     0,
       0,     0,     0,   376,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,     0,   375,   348,   349,     0,     0,     0,     0,     0,
       0,     0,   376,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   350,     0,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   405,
     375,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     376,     0,     0,     0,     0,   350,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,     0,   375,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   376,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,     0,   375,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   376
};

static const yytype_int16 yycheck[] =
{
       2,     2,   111,    89,     2,    79,    80,    35,   110,   111,
     693,     2,   737,   466,   193,   620,    31,    31,   185,    67,
      79,    80,   131,   926,   727,   928,   903,    47,   731,   131,
      79,    80,    52,    35,    14,   121,    79,    80,    14,    14,
      14,    91,    78,    54,    78,   821,    56,    31,    39,    31,
      78,   607,     0,    74,    78,   721,    35,    78,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   129,
     651,    91,    74,    75,    76,    77,    37,    38,   296,   297,
      91,    35,    38,    91,   302,    78,   778,   780,    31,    78,
      46,    47,   148,   130,    30,    57,    52,   168,   158,   885,
      78,   172,    80,   170,   971,    67,   973,    99,   128,   129,
     743,   148,    35,   170,    37,   171,   160,   161,   162,   685,
     204,   797,   703,   799,    78,   911,    82,   173,    78,    85,
      80,    99,   178,    99,   164,   204,   138,   139,    74,    75,
      76,    77,   173,   929,   178,   204,   170,   178,   173,   841,
      74,   204,   887,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,  1054,   161,   162,
     883,   452,   193,   788,  1087,   456,   962,    78,   172,    80,
      74,   171,   118,   161,   162,   171,   171,   171,   769,   652,
     823,   824,   825,   826,    30,  1062,   164,   153,   164,   177,
     156,   148,   138,   139,   300,   102,   103,   170,   164,   901,
     166,   161,   162,  1080,  1081,   171,   172,   173,   384,   175,
     176,  1088,   102,   103,   171,  1092,   168,    78,   312,   171,
     922,   923,   924,   925,    78,    30,    80,   321,    74,    75,
      76,    77,   168,   312,   108,   109,   172,   413,   414,   205,
     206,   532,   321,   312,   170,    35,   445,   108,   109,   312,
     161,   162,   321,    74,    75,    76,    77,    78,   321,    78,
     170,    80,    37,    38,   492,    55,   388,   174,   163,    74,
      75,    76,    77,   108,   109,   170,   149,   150,   151,   152,
      78,    35,    80,    37,   174,    74,    75,    76,    77,   163,
     163,   170,   138,   139,   316,   316,   168,   118,    88,   171,
     173,   170,   175,    78,   151,   152,   336,   161,   162,   173,
    1055,   108,   109,   381,   382,   170,   121,   122,   123,   124,
     168,   118,    74,    75,   172,    77,   173,   375,   175,   118,
     296,   297,   343,   138,   139,   301,   302,    70,    71,    52,
     170,   160,   161,   162,    74,   311,   386,    77,   168,   170,
     163,   148,   172,   540,   320,    88,   108,   178,   110,   174,
     175,    74,   160,   161,   162,    78,   332,   168,   334,    67,
      83,   172,   173,   495,  1077,   168,   170,   417,   108,   172,
     110,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   379,
     376,   375,   151,   152,   445,   170,   438,   438,   488,   385,
     386,   469,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   175,   728,   170,   405,
     151,   152,   119,   120,    74,    75,    76,    77,    70,    71,
     416,   417,   163,   130,   420,   101,   102,   103,   488,   170,
     151,   152,   173,   511,   175,   168,   170,   488,   434,   172,
     488,   168,   163,   579,   170,   172,   582,   151,   152,   170,
     586,   587,   173,   449,   175,   776,   516,   715,   118,   511,
     108,   461,   110,   168,   151,   152,   590,   172,   170,   173,
     622,   175,   113,   114,    74,   469,   163,    77,   138,   139,
     801,   590,   803,   163,   805,   170,   173,   170,   175,   706,
     163,   590,   709,   814,   172,   173,   492,   590,   622,   495,
     163,   497,   151,   152,   762,   501,   502,   503,   504,   505,
     506,   507,   508,   622,   163,   639,    91,   511,    86,    87,
     151,   152,   172,   622,   173,   172,   175,   172,    16,   622,
     639,   789,   163,   529,    53,    54,    55,   172,    57,   172,
     639,   537,   173,   539,   175,    16,   639,   171,    67,   545,
      74,   675,    74,    74,    75,   375,    77,   168,   169,    74,
     171,   381,   382,   383,   384,   309,   675,   645,    74,   313,
     648,   172,   650,   168,   574,   616,   675,   794,   619,   173,
     576,   170,   675,   327,   170,   329,   330,   331,   584,   169,
     410,   168,   716,   413,   414,   415,   168,   169,   176,   171,
     170,   653,   653,   170,    31,   653,   172,   716,   101,   102,
     103,    74,   653,   171,   170,   172,   168,   716,   835,   108,
      74,   110,   618,   716,   620,   621,   626,   447,   173,   118,
     119,   120,   121,   122,   123,   124,   688,   688,   172,   691,
     792,   693,    78,   168,   861,   641,   172,   134,   168,   649,
     134,   645,    31,   169,   648,   173,    74,   171,   171,   737,
     169,    74,   879,   174,    16,   743,   170,    31,   792,    31,
      31,    31,   668,    31,   774,    31,    31,    31,   719,    74,
      31,   677,    31,   792,    31,   168,   682,   683,  1009,   170,
     170,   511,   170,   792,   690,   170,   169,   169,    99,   792,
     778,   171,   754,   754,   173,   173,   754,    74,    75,    76,
      77,    78,   171,   754,    81,   135,   173,    16,   170,   715,
      83,   169,   171,   170,   941,   171,   171,   723,   780,   770,
     170,   172,   170,   785,   785,   787,   787,   172,   738,   172,
      99,   172,   820,   737,   168,   823,   824,   825,   826,   168,
     173,   118,   793,   753,    35,    37,   172,    31,   975,   148,
     756,   172,   171,   841,   168,   982,   762,   819,   171,   168,
     766,   138,   172,   140,   141,   142,   143,   144,   145,   146,
     147,   169,   174,   168,   784,   168,   170,   839,    74,    31,
     168,   173,   788,   789,   174,   171,   173,   897,   173,   958,
     878,   174,    38,   170,    35,    37,   958,   115,   175,   887,
     177,   178,   864,   864,    74,    75,    76,    77,    78,   172,
     972,   171,   165,   901,  1041,   173,   820,   171,  1045,   171,
    1047,   171,    14,   833,   172,    14,    14,   174,   916,   173,
     170,   172,    16,   172,   922,   923,   924,   925,    78,    78,
     172,   902,   171,    16,   906,   953,    16,   173,   118,   957,
      78,   168,   173,   915,   915,   163,    99,   173,   172,   172,
     130,   867,   172,   116,  1091,   163,    16,   171,   874,   172,
     876,   170,   934,   934,   878,  1054,   886,   171,   148,    54,
     931,  1043,   933,   887,   812,   993,   469,   949,   949,   445,
     952,   193,   174,  1001,   639,   792,    97,   938,   986,   961,
     170,   933,   874,   839,   447,   993,   108,   109,   178,   774,
     901,   916,   974,   450,   683,  1023,   118,   119,   120,   897,
    1032,   983,   983,  1023,  1035,   435,   158,  1035,   130,   131,
     132,   133,   407,   420,   497,  1023,   375,   943,  1043,   641,
     946,  1003,   382,    -1,    -1,    -1,   148,    -1,  1056,    -1,
      -1,  1013,  1013,  1015,  1015,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,  1072,    -1,    -1,  1055,    -1,    -1,
      -1,   115,    -1,    -1,   118,   119,   120,   121,   122,   123,
     124,   125,   986,    -1,    -1,   995,    -1,    -1,    -1,   993,
      -1,    -1,    -1,    -1,    -1,  1005,    -1,    -1,    -1,    -1,
      -1,    -1,  1064,  1064,   148,  1067,  1067,  1069,  1069,    -1,
      -1,    -1,  1018,    -1,    -1,  1077,    -1,    -1,    -1,  1023,
      -1,    -1,    -1,    -1,  1030,    -1,    -1,  1037,  1034,    -1,
     174,  1093,  1093,  1039,     3,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,  1057,    -1,  1059,
      -1,  1055,   102,    -1,    -1,    -1,    -1,  1063,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    -1,   118,   119,
     120,   121,   122,   123,   124,   125,    67,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,   148,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    51,    52,    53,    54,    55,    -1,    57,    -1,
     159,    -1,    -1,    -1,    -1,    -1,   165,    -1,    67,    -1,
      -1,   170,   171,     9,    10,    11,   175,   176,   177,   178,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    67,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,   171,   159,    12,    13,    -1,
      15,    -1,   165,    -1,    -1,    -1,    -1,   170,    -1,   102,
      -1,    -1,   175,   176,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,   118,   119,   120,   121,   122,
     123,   124,   125,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,   148,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    -1,
      95,   174,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,    -1,
      -1,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,   174,
     175,   176,   177,   178,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    67,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   115,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,    -1,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,   174,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,   115,    -1,   117,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,    -1,    -1,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,    -1,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
      -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,   173,   174,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,   174,   175,   176,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,    -1,
     175,   176,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    89,    90,    91,    92,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,    -1,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    98,
      -1,   100,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,    -1,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    -1,    95,    96,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
      -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,   173,    -1,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,   174,   175,   176,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,    -1,
     175,   176,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,   174,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,   174,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
      -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,   173,   174,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,   174,   175,   176,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,   159,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,   170,    -1,   172,   173,    -1,
     175,   176,   177,   178,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    71,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     3,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   173,    -1,    -1,    31,    -1,   178,    -1,
      -1,    -1,   115,    -1,    -1,   118,   119,   120,   121,   122,
     123,   124,   125,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,   148,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    -1,
      95,   174,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,    -1,
     175,   176,   177,   178,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    -1,    -1,    84,    85,    86,
      87,    -1,    89,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,    -1,    -1,    -1,    -1,
     117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,   172,   173,    -1,   175,   176,
     177,   178,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    84,    85,    86,    87,    -1,
      89,    90,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,   172,   173,    -1,   175,   176,   177,   178,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    85,    86,    87,    -1,    89,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,    -1,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,   172,   173,    -1,   175,   176,   177,   178,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    -1,
      -1,    84,    85,    86,    87,    -1,    89,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
      -1,    -1,    -1,    -1,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,    -1,   175,   176,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    -1,    -1,    84,
      85,    86,    87,    -1,    89,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,   102,   172,   173,    -1,
     175,   176,   177,   178,    -1,    -1,    -1,    -1,    -1,   115,
      37,    38,   118,   119,   120,   121,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,   148,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    -1,   102,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   174,   118,
     119,   120,   121,   122,   123,   124,   125,   104,    -1,    -1,
      -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,   174,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,   165,    -1,
      -1,    -1,    -1,   170,   102,    -1,    -1,    -1,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,   115,    37,    38,
     118,   119,   120,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
     148,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      81,    -1,    -1,    84,    85,    86,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   104,    57,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    81,    82,
      -1,    84,    85,    86,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,   104,    57,    -1,    -1,   108,   109,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,    -1,
       5,     6,     7,     8,    -1,    -1,   159,    12,    13,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,   175,   176,   177,   178,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    81,    -1,    -1,    84,
      85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
      -1,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,    -1,     5,     6,
       7,     8,    -1,    -1,   159,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
     175,   176,   177,   178,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,
      -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,    -1,     5,     6,     7,     8,
      -1,    -1,   159,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,   175,   176,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    81,    -1,    -1,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,    -1,     5,     6,     7,     8,    -1,    -1,
     159,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,   170,   171,    -1,    -1,    -1,   175,   176,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    -1,    -1,
      81,    -1,    -1,    84,    85,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,    -1,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,    -1,     5,     6,     7,     8,    -1,    -1,   159,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,   175,   176,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    81,    -1,
      -1,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,   108,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,   159,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,   170,    -1,    -1,
      -1,    -1,   175,   176,   177,   178,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,
      -1,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,   174,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   174,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    57,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      57,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    57,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   171,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,
      -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
     169,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,     3,    11,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       3,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    -1,    30,    81,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,    -1,   175,    -1,   177,   178,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    14,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   180,   185,     0,     3,     5,     6,     7,     8,    12,
      13,    15,    51,    52,    56,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    68,    72,    73,    74,    75,    76,
      77,    78,    79,    81,    84,    85,    86,    87,    89,    90,
      91,    93,    95,    97,   100,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   115,   117,   118,   119,   120,   126,
     127,   128,   129,   130,   131,   132,   133,   136,   137,   138,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   159,   170,   172,   173,   175,   176,   177,   178,   189,
     192,   193,   194,   195,   211,   219,   222,   225,   226,   227,
     229,   231,   246,   252,   253,   254,   255,   306,   307,   308,
     309,   310,   318,   319,   324,   325,   326,   327,   329,   330,
     331,   332,   333,   334,   335,   336,   347,    74,   118,   193,
     307,   310,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,    31,   170,   118,   130,   170,   189,   193,   304,
     319,   320,   335,   337,   170,   321,   170,   300,   301,   307,
     211,   170,   170,   170,   170,   170,   170,   307,   328,   328,
      74,    74,   208,   299,   328,   173,    74,    75,    77,   108,
     110,   187,   188,   198,   200,   204,   207,   275,   276,   335,
      78,   277,   278,   308,   170,   170,   170,   170,   224,   228,
     230,   232,     3,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    57,    68,    70,    71,    74,    77,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   181,   182,   184,   186,   197,   170,   170,   190,   191,
     319,   170,   175,   324,   326,   327,   334,   334,    78,    80,
     160,   161,   162,   344,   345,   307,   209,    37,    38,   137,
     165,   183,   307,   340,   341,   342,   343,    80,   322,   344,
      80,   344,   173,   335,   170,   272,   118,   192,   194,   308,
     130,   226,    70,    71,    70,    71,    88,     9,    10,    11,
      30,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    57,    67,   172,   183,   314,
     314,   163,   163,   151,   152,   173,   175,   272,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,   149,   150,   314,    14,   307,   305,   307,   304,
     163,   272,   323,   151,   152,   163,   173,   175,   328,   307,
     168,   172,    91,   307,   302,   303,   307,   307,   208,   307,
     307,   172,   172,   172,    16,   168,   172,   172,   209,    99,
     164,   188,   199,   204,   172,   168,   172,   168,   172,    16,
     168,   172,   217,   218,   334,   307,   348,   349,   307,   171,
      74,    74,    74,    74,   172,   196,   173,   340,   340,   168,
     201,   272,   307,   340,   151,   152,   175,   160,   345,    82,
     307,   334,    80,   160,   345,   171,   129,   174,   193,   194,
     210,   211,   170,   307,   334,    14,   169,   168,   176,   177,
     307,     3,     5,     6,     7,     8,    12,    13,    68,    74,
      84,    85,    86,   104,   108,   109,   118,   127,   128,   137,
     138,   140,   141,   142,   143,   144,   145,   146,   147,   165,
     171,   184,   273,   274,   307,   308,   223,   170,   211,   170,
      31,   172,   307,   307,   307,    31,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   320,   307,   311,    74,   311,   173,   184,   335,   338,
     184,   335,   338,    74,   173,   335,   339,   339,   307,   328,
     183,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   171,   323,   171,   335,
     339,   339,   335,   307,   328,   171,   171,   301,   170,   171,
     172,   168,    99,   171,   171,   171,   307,   299,   174,    74,
     173,   164,   172,   172,   188,   207,   276,   307,   278,   168,
     201,   168,   201,   171,   172,   134,   236,   311,   134,   237,
      31,   233,   173,   185,   171,   171,   190,   169,   171,   169,
      74,    74,    52,    74,    78,    83,   346,   174,   175,   174,
     174,   170,   194,   340,   137,   183,   307,    16,   341,   174,
     171,   307,    31,   168,   201,    74,   307,   307,   209,   307,
      31,   170,   311,   170,   307,   272,   272,   307,   272,   272,
     174,   169,   334,   236,   174,   169,    31,   211,   307,    31,
     211,   251,   302,   307,   137,   175,   183,   239,   334,   212,
      31,   173,   243,   173,   311,   213,   187,   198,   202,   205,
     206,   173,   218,   171,   349,   171,   319,   135,   238,   173,
     282,   319,   311,    30,   118,   138,   139,   189,   263,   264,
     265,   266,   268,   238,   185,   174,    16,    83,   169,   307,
     171,   171,   170,   334,   307,   307,   165,   274,   171,   236,
     171,   171,    88,   307,   193,   256,   257,   258,   259,   261,
     170,   256,   174,   174,   238,   209,   171,   209,   172,   170,
     340,   334,    14,   171,    31,   211,   242,   172,   244,   172,
     244,   103,   247,   248,   249,   250,   307,   113,   114,   216,
      99,   206,   168,   201,   203,   206,   172,   282,   311,   279,
     168,   173,   264,    35,    37,    35,    37,   311,   174,   307,
     169,   172,   340,   238,   211,    31,   172,   261,   171,   168,
     201,    30,   121,   122,   123,   124,   260,   262,   267,   268,
     269,   270,   256,   171,   311,   172,    92,   302,   340,   169,
     239,    31,   211,   241,   209,   244,   101,   102,   103,   244,
     174,   168,   201,   174,   168,   201,   168,   201,   170,   173,
      74,   205,   174,   168,   201,   173,   102,   115,   118,   119,
     120,   121,   122,   123,   124,   125,   174,   193,   234,   280,
     281,   291,   292,   293,   294,   319,   279,   264,   264,   264,
     264,   173,   174,   171,   311,   209,    31,   271,   258,   268,
      38,   220,    35,    37,    35,    37,   171,   115,   315,   173,
     172,   171,   171,   171,   209,    98,   101,   172,   307,    31,
     172,   245,   174,    14,   249,   307,    14,   214,   319,   209,
     206,   174,   279,   311,   282,   280,   262,   110,   310,   294,
     174,   279,   173,   263,    14,   165,   221,   268,   268,   268,
     268,   271,   170,   271,   279,    31,   211,   240,   241,    96,
     172,   172,   245,   209,   307,   307,    35,    78,   215,   174,
     174,   184,   172,   173,   283,    78,   295,   296,   184,   297,
     298,   314,   174,   279,   312,    78,   312,    78,   183,   316,
     317,   312,   174,   209,   172,   209,   319,   171,    16,   235,
     118,   174,   184,   284,   285,   286,   287,   288,   289,   319,
      16,   311,   168,   172,    16,   168,   172,   184,   174,   313,
     311,   173,    78,   168,   201,   173,    94,   173,   307,   172,
     174,   285,   172,   172,    99,   116,   163,   307,   296,   307,
     298,   311,   307,    16,   209,   317,   171,   209,   172,   209,
      74,   181,   294,   282,   184,   311,   311,   170,   312,   307,
     174,   174,   174,   184,   256,   312,   312,   171,   271,   312,
     172,   173,   290,   209,   312,   174
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   179,   180,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   182,   182,   182,   182,   182,   182,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   193,   193,   194,   194,   194,   194,   194,   195,
     195,   195,   195,   195,   196,   195,   197,   195,   195,   195,
     195,   195,   195,   198,   198,   199,   200,   201,   201,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   209,   209,   210,   210,   210,   210,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   212,   211,   211,
     211,   211,   211,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   218,   219,   220,   220,   221,   221,   223,
     222,   224,   222,   225,   225,   226,   226,   228,   227,   230,
     229,   232,   231,   233,   233,   234,   235,   235,   236,   236,
     237,   237,   238,   238,   239,   239,   239,   239,   240,   240,
     241,   241,   242,   242,   243,   243,   243,   243,   244,   244,
     244,   245,   245,   246,   247,   247,   248,   248,   249,   249,
     250,   250,   251,   251,   252,   252,   253,   253,   254,   254,
     255,   255,   256,   256,   257,   257,   258,   258,   259,   259,
     260,   260,   260,   260,   261,   261,   262,   262,   263,   263,
     263,   263,   264,   264,   265,   265,   266,   266,   267,   267,
     267,   267,   268,   268,   268,   269,   269,   270,   270,   271,
     271,   272,   272,   272,   273,   273,   274,   274,   274,   275,
     275,   276,   277,   277,   278,   278,   279,   279,   280,   280,
     280,   280,   281,   281,   281,   282,   282,   283,   283,   283,
     284,   284,   285,   285,   286,   287,   287,   287,   287,   288,
     288,   289,   290,   290,   291,   291,   292,   292,   293,   293,
     294,   294,   294,   294,   294,   294,   294,   295,   295,   296,
     296,   297,   297,   298,   299,   300,   300,   301,   302,   302,
     303,   303,   305,   304,   306,   306,   306,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     308,   308,   309,   310,   311,   312,   313,   314,   314,   315,
     315,   316,   316,   317,   317,   318,   318,   318,   318,   319,
     319,   320,   320,   320,   321,   321,   322,   322,   322,   323,
     323,   324,   324,   324,   324,   325,   325,   325,   325,   325,
     325,   325,   325,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   327,   327,   328,   328,   329,   330,   330,   330,
     330,   331,   331,   332,   332,   332,   333,   333,   333,   333,
     333,   333,   334,   334,   334,   334,   335,   335,   335,   336,
     336,   337,   337,   337,   337,   337,   337,   337,   338,   338,
     338,   339,   339,   339,   340,   341,   341,   342,   342,   343,
     343,   343,   343,   343,   343,   343,   344,   344,   344,   344,
     345,   345,   345,   345,   345,   345,   345,   345,   346,   346,
     346,   346,   347,   347,   347,   347,   347,   347,   347,   348,
     348,   349
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     4,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     0,     6,     0,     5,     3,     4,
       3,     4,     3,     1,     1,     6,     6,     0,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     1,     3,     1,
       3,     3,     1,     2,     0,     1,     1,     2,     4,     3,
       1,     1,     5,     7,     9,     5,     3,     3,     3,     3,
       3,     3,     1,     2,     6,     7,     9,     0,     6,     1,
       6,     3,     2,     0,     9,     1,     3,     0,     1,     0,
       4,     1,     3,     1,    13,     0,     1,     0,     1,     0,
      10,     0,     9,     1,     2,     1,     1,     0,     7,     0,
       8,     0,     9,     0,     2,     5,     0,     2,     0,     2,
       0,     2,     0,     2,     1,     2,     4,     3,     1,     4,
       1,     4,     1,     4,     3,     4,     4,     5,     0,     5,
       4,     1,     1,     7,     0,     2,     1,     3,     4,     4,
       1,     3,     1,     4,     5,     6,     1,     3,     6,     7,
       3,     6,     2,     0,     1,     3,     2,     1,     0,     2,
       1,     1,     1,     1,     6,     8,     0,     1,     1,     2,
       1,     1,     1,     1,     3,     3,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     0,
       2,     2,     4,     3,     1,     3,     1,     3,     2,     3,
       1,     1,     3,     1,     1,     3,     2,     0,     4,     4,
      12,     1,     1,     2,     3,     1,     3,     1,     2,     3,
       1,     2,     2,     2,     3,     3,     3,     4,     3,     1,
       1,     3,     1,     3,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       4,     3,     1,     4,     4,     3,     1,     1,     0,     1,
       3,     1,     0,     9,     3,     2,     3,     1,     6,     5,
       3,     4,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     5,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     2,
       1,     2,     4,     2,     2,     1,     2,     2,     3,     1,
      13,    12,     1,     1,     0,     0,     0,     0,     1,     0,
       5,     3,     1,     1,     2,     2,     4,     4,     2,     1,
       1,     1,     1,     3,     0,     3,     0,     1,     1,     0,
       1,     4,     3,     1,     3,     1,     1,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     0,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     1,     4,     4,     4,
       4,     1,     1,     1,     3,     3,     1,     4,     2,     3,
       3,     1,     4,     4,     3,     3,     3,     3,     1,     3,
       1,     1,     3,     1,     1,     0,     1,     3,     1,     3,
       1,     4,     2,     2,     6,     4,     2,     2,     1,     2,
       1,     4,     3,     3,     3,     3,     6,     3,     1,     1,
       2,     1,     5,     4,     2,     2,     4,     2,     2,     1,
       3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if ZENDDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !ZENDDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !ZENDDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 72: /* "integer"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3591 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 73: /* "floating-point number"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3597 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 74: /* "identifier"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3603 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 75: /* "fully qualified name"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3609 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 76: /* "namespace-relative name"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3615 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 77: /* "namespaced name"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3621 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 78: /* "variable"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3627 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 79: /* T_INLINE_HTML  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3633 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 80: /* "string content"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3639 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 81: /* "quoted string"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3645 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 82: /* "variable name"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3651 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 83: /* "number"  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3657 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 184: /* identifier  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3663 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 185: /* top_statement_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3669 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 186: /* namespace_declaration_name  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3675 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 187: /* namespace_name  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3681 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 188: /* legacy_namespace_name  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3687 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 189: /* name  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3693 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 190: /* attribute_decl  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3699 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 191: /* attribute_group  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3705 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 192: /* attribute  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3711 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 193: /* attributes  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3717 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 194: /* attributed_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3723 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 195: /* top_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3729 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 199: /* group_use_declaration  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3735 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 200: /* mixed_group_use_declaration  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3741 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 202: /* inline_use_declarations  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3747 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 203: /* unprefixed_use_declarations  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3753 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 204: /* use_declarations  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3759 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 205: /* inline_use_declaration  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3765 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 206: /* unprefixed_use_declaration  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3771 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 207: /* use_declaration  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3777 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 208: /* const_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3783 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 209: /* inner_statement_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3789 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 210: /* inner_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3795 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 211: /* statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3801 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 213: /* catch_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3807 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 214: /* catch_name_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3813 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 215: /* optional_variable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3819 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 216: /* finally_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3825 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 217: /* unset_variables  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3831 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 218: /* unset_variable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3837 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 219: /* function_declaration_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3843 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 222: /* class_declaration_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3849 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 227: /* trait_declaration_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3855 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 229: /* interface_declaration_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3861 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 231: /* enum_declaration_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3867 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 233: /* enum_backing_type  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3873 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 234: /* enum_case  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3879 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 235: /* enum_case_expr  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3885 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 236: /* extends_from  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3891 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 237: /* interface_extends_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3897 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 238: /* implements_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3903 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 239: /* foreach_variable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3909 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 240: /* for_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3915 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 241: /* foreach_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3921 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 242: /* declare_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3927 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 243: /* switch_case_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3933 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 244: /* case_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3939 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 246: /* match  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3945 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 247: /* match_arm_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3951 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 248: /* non_empty_match_arm_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3957 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 249: /* match_arm  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3963 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 250: /* match_arm_cond_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3969 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 251: /* while_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3975 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 252: /* if_stmt_without_else  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3981 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 253: /* if_stmt  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3987 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 254: /* alt_if_stmt_without_else  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3993 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 255: /* alt_if_stmt  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 3999 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 256: /* parameter_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4005 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 257: /* non_empty_parameter_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4011 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 258: /* attributed_parameter  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4017 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 261: /* parameter  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4023 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 262: /* optional_type_without_static  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4029 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 263: /* type_expr  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4035 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 264: /* type  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4041 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 265: /* union_type  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4047 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 266: /* intersection_type  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4053 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 267: /* type_expr_without_static  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4059 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 268: /* type_without_static  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4065 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 269: /* union_type_without_static  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4071 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 270: /* intersection_type_without_static  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4077 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 271: /* return_type  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4083 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 272: /* argument_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4089 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 273: /* non_empty_argument_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4095 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 274: /* argument  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4101 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 275: /* global_var_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4107 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 276: /* global_var  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4113 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 277: /* static_var_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4119 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 278: /* static_var  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4125 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 279: /* class_statement_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4131 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 280: /* attributed_class_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4137 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 281: /* class_statement  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4143 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 282: /* class_name_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4149 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 283: /* trait_adaptations  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4155 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 284: /* trait_adaptation_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4161 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 285: /* trait_adaptation  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4167 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 286: /* trait_precedence  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4173 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 287: /* trait_alias  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4179 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 288: /* trait_method_reference  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4185 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 289: /* absolute_trait_method_reference  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4191 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 290: /* method_body  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4197 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 295: /* property_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4203 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 296: /* property  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4209 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 297: /* class_const_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4215 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 298: /* class_const_decl  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4221 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 299: /* const_decl  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4227 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 300: /* echo_expr_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4233 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 301: /* echo_expr  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4239 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 302: /* for_exprs  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4245 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 303: /* non_empty_for_exprs  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4251 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 304: /* anonymous_class  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4257 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 306: /* new_expr  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4263 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 307: /* expr  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4269 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 308: /* inline_function  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4275 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 311: /* backup_doc_comment  */
#line 52 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { if (((*yyvaluep).str)) zend_string_release_ex(((*yyvaluep).str), 0); }
#line 4281 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 315: /* lexical_vars  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4287 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 316: /* lexical_var_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4293 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 317: /* lexical_var  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4299 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 318: /* function_call  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4305 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 319: /* class_name  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4311 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 320: /* class_name_reference  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4317 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 321: /* exit_expr  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4323 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 322: /* backticks_expr  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4329 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 323: /* ctor_arguments  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4335 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 324: /* dereferenceable_scalar  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4341 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 325: /* scalar  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4347 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 326: /* constant  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4353 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 327: /* class_constant  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4359 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 328: /* optional_expr  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4365 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 329: /* variable_class_name  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4371 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 330: /* fully_dereferenceable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4377 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 331: /* array_object_dereferenceable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4383 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 332: /* callable_expr  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4389 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 333: /* callable_variable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4395 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 334: /* variable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4401 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 335: /* simple_variable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4407 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 336: /* static_member  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4413 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 337: /* new_variable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4419 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 338: /* member_name  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4425 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 339: /* property_name  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4431 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 340: /* array_pair_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4437 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 341: /* possible_array_pair  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4443 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 342: /* non_empty_array_pair_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4449 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 343: /* array_pair  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4455 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 344: /* encaps_list  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4461 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 345: /* encaps_var  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4467 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 346: /* encaps_var_offset  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4473 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 347: /* internal_functions_in_yacc  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4479 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 348: /* isset_variables  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4485 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

    case 349: /* isset_variable  */
#line 51 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
      { zend_ast_destroy(((*yyvaluep).ast)); }
#line 4491 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 295 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { CG(ast) = (yyvsp[0].ast); }
#line 4761 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 83:
#line 319 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4767 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 84:
#line 320 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    {
			zval zv;
			if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			(yyval.ast) = zend_ast_create_zval(&zv);
		}
#line 4777 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 85:
#line 328 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4783 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 86:
#line 329 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 4789 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 87:
#line 334 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4795 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 88:
#line 335 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4801 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 89:
#line 340 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4807 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 90:
#line 341 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4813 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 91:
#line 346 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4819 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 92:
#line 347 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4825 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 93:
#line 351 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
#line 4831 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 94:
#line 352 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_NOT_FQ; }
#line 4837 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 95:
#line 353 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_FQ; }
#line 4843 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 96:
#line 354 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_NAME_RELATIVE; }
#line 4849 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 97:
#line 359 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[0].ast), NULL); }
#line 4855 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 98:
#line 361 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ATTRIBUTE, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4861 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 99:
#line 366 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ATTRIBUTE_GROUP, (yyvsp[0].ast)); }
#line 4867 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 100:
#line 368 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 4873 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 101:
#line 372 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 4879 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 102:
#line 376 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ATTRIBUTE_LIST, (yyvsp[0].ast)); }
#line 4885 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 103:
#line 377 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 4891 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 104:
#line 381 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4897 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 105:
#line 382 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4903 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 106:
#line 383 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4909 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 107:
#line 384 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4915 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 108:
#line 385 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4921 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 109:
#line 389 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4927 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 110:
#line 390 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 4933 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 111:
#line 391 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 4939 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 112:
#line 393 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_HALT_COMPILER,
			      zend_ast_create_zval_from_long(zend_get_scanned_file_offset()));
			  zend_stop_lexing(); }
#line 4947 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 113:
#line 397 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-1].ast), NULL);
			  RESET_DOC_COMMENT(); }
#line 4954 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 114:
#line 399 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { RESET_DOC_COMMENT(); }
#line 4960 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 115:
#line 401 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 4966 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 116:
#line 402 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { RESET_DOC_COMMENT(); }
#line 4972 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 117:
#line 404 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMESPACE, NULL, (yyvsp[-1].ast)); }
#line 4978 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 118:
#line 405 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 4984 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 119:
#line 406 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 4990 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 120:
#line 407 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }
#line 4996 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 121:
#line 408 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = (yyvsp[-2].num); }
#line 5002 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 122:
#line 409 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5008 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 123:
#line 413 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_SYMBOL_FUNCTION; }
#line 5014 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 124:
#line 414 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_SYMBOL_CONST; }
#line 5020 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 125:
#line 419 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 5026 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 126:
#line 424 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GROUP_USE, (yyvsp[-5].ast), (yyvsp[-2].ast));}
#line 5032 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 129:
#line 434 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5038 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 130:
#line 436 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 5044 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 131:
#line 441 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5050 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 132:
#line 443 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 5056 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 133:
#line 448 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5062 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 134:
#line 450 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_USE, (yyvsp[0].ast)); }
#line 5068 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 135:
#line 454 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_SYMBOL_CLASS; }
#line 5074 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 136:
#line 455 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = (yyvsp[-1].num); }
#line 5080 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 137:
#line 460 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }
#line 5086 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 138:
#line 462 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5092 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 139:
#line 467 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[0].ast), NULL); }
#line 5098 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 140:
#line 469 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5104 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 141:
#line 473 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5110 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 142:
#line 474 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CONST_DECL, (yyvsp[0].ast)); }
#line 5116 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 143:
#line 479 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5122 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 144:
#line 481 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 5128 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 145:
#line 486 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5134 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 146:
#line 487 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5140 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 147:
#line 488 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 5146 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 148:
#line 490 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; zend_throw_exception(zend_ce_compile_error,
			      "__HALT_COMPILER() can only be used from the outermost scope", 0); YYERROR; }
#line 5153 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 149:
#line 496 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5159 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 150:
#line 497 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5165 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 151:
#line 498 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5171 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 152:
#line 500 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_WHILE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5177 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 153:
#line 502 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DO_WHILE, (yyvsp[-5].ast), (yyvsp[-2].ast)); }
#line 5183 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 154:
#line 504 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOR, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5189 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 155:
#line 506 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_SWITCH, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5195 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 156:
#line 507 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_BREAK, (yyvsp[-1].ast)); }
#line 5201 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 157:
#line 508 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONTINUE, (yyvsp[-1].ast)); }
#line 5207 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 158:
#line 509 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)); }
#line 5213 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 159:
#line 510 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5219 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 160:
#line 511 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5225 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 161:
#line 512 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5231 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 162:
#line 513 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 5237 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 163:
#line 514 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5243 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 164:
#line 515 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-3].ast); }
#line 5249 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 165:
#line 517 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-4].ast), (yyvsp[-2].ast), NULL, (yyvsp[0].ast)); }
#line 5255 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 166:
#line 520 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_FOREACH, (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-4].ast), (yyvsp[0].ast)); }
#line 5261 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 167:
#line 522 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { if (!zend_handle_encoding_declaration((yyvsp[-1].ast))) { YYERROR; } }
#line 5267 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 168:
#line 524 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DECLARE, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5273 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 169:
#line 525 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5279 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 170:
#line 527 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_TRY, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 5285 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 171:
#line 528 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GOTO, (yyvsp[-1].ast)); }
#line 5291 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 172:
#line 529 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_LABEL, (yyvsp[-1].ast)); }
#line 5297 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 173:
#line 534 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_CATCH_LIST); }
#line 5303 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 174:
#line 536 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-8].ast), zend_ast_create(ZEND_AST_CATCH, (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast))); }
#line 5309 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 175:
#line 540 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 5315 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 176:
#line 541 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5321 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 177:
#line 545 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5327 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 178:
#line 546 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5333 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 179:
#line 550 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5339 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 180:
#line 551 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5345 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 181:
#line 555 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 5351 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 182:
#line 556 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5357 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 183:
#line 560 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNSET, (yyvsp[0].ast)); }
#line 5363 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 184:
#line 566 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_FUNC_DECL, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-9].str),
		      zend_ast_get_str((yyvsp[-10].ast)), (yyvsp[-7].ast), NULL, (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }
#line 5370 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 185:
#line 571 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = 0; }
#line 5376 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 186:
#line 572 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_PARAM_REF; }
#line 5382 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 187:
#line 576 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = 0; }
#line 5388 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 188:
#line 577 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_PARAM_VARIADIC; }
#line 5394 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 189:
#line 581 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); }
#line 5400 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 190:
#line 583 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, (yyvsp[-9].num), (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }
#line 5406 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 191:
#line 584 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); }
#line 5412 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 192:
#line 586 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, 0, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), (yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }
#line 5418 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 193:
#line 590 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = (yyvsp[0].num); }
#line 5424 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 194:
#line 592 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = zend_add_class_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 5430 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 195:
#line 596 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
#line 5436 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 196:
#line 597 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_FINAL; }
#line 5442 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 197:
#line 601 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); }
#line 5448 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 198:
#line 603 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_TRAIT, (yyvsp[-5].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-4].ast)), NULL, NULL, (yyvsp[-1].ast), NULL, NULL); }
#line 5454 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 199:
#line 607 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); }
#line 5460 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 200:
#line 609 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_INTERFACE, (yyvsp[-6].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-5].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL); }
#line 5466 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 201:
#line 613 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); }
#line 5472 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 202:
#line 615 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLASS, ZEND_ACC_ENUM|ZEND_ACC_FINAL, (yyvsp[-7].num), (yyvsp[-3].str), zend_ast_get_str((yyvsp[-6].ast)), NULL, (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, (yyvsp[-5].ast)); }
#line 5478 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 203:
#line 619 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5484 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 204:
#line 620 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5490 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 205:
#line 625 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ENUM_CASE, (yyvsp[-2].ast), (yyvsp[-1].ast), ((yyvsp[-3].str) ? zend_ast_create_zval_from_str((yyvsp[-3].str)) : NULL), NULL); }
#line 5496 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 206:
#line 629 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5502 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 207:
#line 630 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5508 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 208:
#line 634 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5514 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 209:
#line 635 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5520 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 210:
#line 639 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5526 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 211:
#line 640 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5532 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 212:
#line 644 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5538 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 213:
#line 645 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5544 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 214:
#line 649 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5550 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 215:
#line 650 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_REF, (yyvsp[0].ast)); }
#line 5556 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 216:
#line 651 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LIST; }
#line 5562 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 217:
#line 652 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }
#line 5568 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 218:
#line 656 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5574 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 219:
#line 657 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5580 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 220:
#line 661 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5586 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 221:
#line 662 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5592 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 222:
#line 666 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5598 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 223:
#line 667 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5604 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 224:
#line 671 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5610 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 225:
#line 672 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5616 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 226:
#line 673 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5622 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 227:
#line 674 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5628 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 228:
#line 678 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_SWITCH_LIST); }
#line 5634 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 229:
#line 680 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-4].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5640 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 230:
#line 682 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-3].ast), zend_ast_create(ZEND_AST_SWITCH_CASE, NULL, (yyvsp[0].ast))); }
#line 5646 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 233:
#line 693 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH, (yyvsp[-4].ast), (yyvsp[-1].ast)); }
#line 5652 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 234:
#line 697 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_MATCH_ARM_LIST); }
#line 5658 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 235:
#line 698 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5664 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 236:
#line 702 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_MATCH_ARM_LIST, (yyvsp[0].ast)); }
#line 5670 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 237:
#line 703 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5676 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 238:
#line 708 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 5682 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 239:
#line 710 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_MATCH_ARM, NULL, (yyvsp[0].ast)); }
#line 5688 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 240:
#line 714 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }
#line 5694 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 241:
#line 715 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5700 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 242:
#line 720 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5706 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 243:
#line 721 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5712 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 244:
#line 727 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5719 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 245:
#line 730 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-2].ast), (yyvsp[0].ast))); }
#line 5726 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 246:
#line 735 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5732 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 247:
#line 737 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[0].ast))); }
#line 5738 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 248:
#line 742 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_IF,
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5745 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 249:
#line 745 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-6].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, (yyvsp[-3].ast), (yyvsp[0].ast))); }
#line 5752 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 250:
#line 750 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 5758 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 251:
#line 752 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-5].ast),
			      zend_ast_create(ZEND_AST_IF_ELEM, NULL, (yyvsp[-2].ast))); }
#line 5765 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 252:
#line 757 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 5771 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 253:
#line 758 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_PARAM_LIST); }
#line 5777 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 254:
#line 764 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PARAM_LIST, (yyvsp[0].ast)); }
#line 5783 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 255:
#line 766 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5789 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 256:
#line 770 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 5795 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 257:
#line 771 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5801 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 258:
#line 775 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = 0; }
#line 5807 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 259:
#line 777 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 5813 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 260:
#line 780 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 5819 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 261:
#line 781 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PROTECTED; }
#line 5825 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 262:
#line 782 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PRIVATE; }
#line 5831 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 263:
#line 783 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_READONLY; }
#line 5837 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 264:
#line 789 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-5].num) | (yyvsp[-3].num) | (yyvsp[-2].num), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL,
					NULL, (yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL); }
#line 5844 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 265:
#line 793 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_PARAM, (yyvsp[-7].num) | (yyvsp[-5].num) | (yyvsp[-4].num), (yyvsp[-6].ast), (yyvsp[-3].ast), (yyvsp[0].ast),
					NULL, (yyvsp[-2].str) ? zend_ast_create_zval_from_str((yyvsp[-2].str)) : NULL); }
#line 5851 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 266:
#line 799 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5857 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 267:
#line 800 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5863 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 268:
#line 804 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5869 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 269:
#line 805 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }
#line 5875 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 270:
#line 806 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5881 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 271:
#line 807 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5887 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 272:
#line 811 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5893 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 273:
#line 812 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_STATIC); }
#line 5899 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 274:
#line 816 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5905 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 275:
#line 817 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5911 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 276:
#line 821 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_INTERSECTION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5917 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 277:
#line 822 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5923 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 278:
#line 829 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5929 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 279:
#line 830 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr |= ZEND_TYPE_NULLABLE; }
#line 5935 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 280:
#line 831 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5941 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 281:
#line 832 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5947 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 282:
#line 836 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_ARRAY); }
#line 5953 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 283:
#line 837 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TYPE, IS_CALLABLE); }
#line 5959 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 284:
#line 838 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 5965 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 285:
#line 843 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_UNION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5971 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 286:
#line 845 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5977 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 287:
#line 850 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_TYPE_INTERSECTION, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5983 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 288:
#line 852 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 5989 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 289:
#line 856 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 5995 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 290:
#line 857 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6001 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 291:
#line 861 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 6007 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 292:
#line 862 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 6013 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 293:
#line 863 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CALLABLE_CONVERT); }
#line 6019 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 294:
#line 868 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARG_LIST, (yyvsp[0].ast)); }
#line 6025 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 295:
#line 870 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6031 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 296:
#line 874 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6037 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 297:
#line 876 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NAMED_ARG, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6043 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 298:
#line 877 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }
#line 6049 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 299:
#line 881 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6055 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 300:
#line 882 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 6061 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 301:
#line 887 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GLOBAL, zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast))); }
#line 6067 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 302:
#line 892 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6073 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 303:
#line 893 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 6079 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 304:
#line 897 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[0].ast), NULL); }
#line 6085 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 305:
#line 898 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6091 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 306:
#line 903 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6097 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 307:
#line 905 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_STMT_LIST); }
#line 6103 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 308:
#line 911 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_GROUP, (yyvsp[-2].ast), (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }
#line 6110 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 309:
#line 914 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLASS_CONST_GROUP, (yyvsp[-1].ast), NULL);
			  (yyval.ast)->attr = (yyvsp[-3].num); }
#line 6117 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 310:
#line 918 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_METHOD, (yyvsp[-9].num) | (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-10].num), (yyvsp[-7].str),
				  zend_ast_get_str((yyvsp[-8].ast)), (yyvsp[-5].ast), NULL, (yyvsp[-1].ast), (yyvsp[-3].ast), NULL); CG(extra_fn_flags) = (yyvsp[-2].num); }
#line 6124 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 311:
#line 920 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6130 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 312:
#line 924 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6136 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 313:
#line 925 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 6142 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 314:
#line 927 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_USE_TRAIT, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6148 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 315:
#line 931 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_NAME_LIST, (yyvsp[0].ast)); }
#line 6154 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 316:
#line 932 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6160 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 317:
#line 936 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 6166 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 318:
#line 937 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 6172 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 319:
#line 938 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6178 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 320:
#line 943 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_TRAIT_ADAPTATIONS, (yyvsp[0].ast)); }
#line 6184 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 321:
#line 945 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6190 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 322:
#line 949 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6196 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 323:
#line 950 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6202 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 324:
#line 955 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_PRECEDENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6208 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 325:
#line 960 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6214 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 326:
#line 962 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { zval zv;
			  if (zend_lex_tstring(&zv, (yyvsp[0].ident)) == FAILURE) { YYABORT; }
			  (yyval.ast) = zend_ast_create(ZEND_AST_TRAIT_ALIAS, (yyvsp[-2].ast), zend_ast_create_zval(&zv)); }
#line 6222 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 327:
#line 966 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[-1].num), (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6228 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 328:
#line 968 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_TRAIT_ALIAS, (yyvsp[0].num), (yyvsp[-2].ast), NULL); }
#line 6234 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 329:
#line 973 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, NULL, (yyvsp[0].ast)); }
#line 6240 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 330:
#line 974 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6246 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 331:
#line 979 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_REFERENCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6252 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 332:
#line 983 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 6258 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 333:
#line 984 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 6264 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 334:
#line 988 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = (yyvsp[0].num); }
#line 6270 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 335:
#line 989 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 6276 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 336:
#line 993 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 6282 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 337:
#line 995 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = (yyvsp[0].num); if (!((yyval.num) & ZEND_ACC_PPP_MASK)) { (yyval.num) |= ZEND_ACC_PUBLIC; } }
#line 6288 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 338:
#line 999 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = (yyvsp[0].num); }
#line 6294 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 339:
#line 1001 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = zend_add_member_modifier((yyvsp[-1].num), (yyvsp[0].num)); if (!(yyval.num)) { YYERROR; } }
#line 6300 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 340:
#line 1005 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PUBLIC; }
#line 6306 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 341:
#line 1006 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PROTECTED; }
#line 6312 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 342:
#line 1007 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_PRIVATE; }
#line 6318 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 343:
#line 1008 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_STATIC; }
#line 6324 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 344:
#line 1009 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_ABSTRACT; }
#line 6330 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 345:
#line 1010 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_FINAL; }
#line 6336 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 346:
#line 1011 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_READONLY; }
#line 6342 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 347:
#line 1015 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6348 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 348:
#line 1016 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_PROP_DECL, (yyvsp[0].ast)); }
#line 6354 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 349:
#line 1021 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-1].ast), NULL, ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6360 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 350:
#line 1023 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6366 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 351:
#line 1027 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6372 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 352:
#line 1028 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLASS_CONST_DECL, (yyvsp[0].ast)); }
#line 6378 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 353:
#line 1032 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6384 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 354:
#line 1036 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST_ELEM, (yyvsp[-3].ast), (yyvsp[-1].ast), ((yyvsp[0].str) ? zend_ast_create_zval_from_str((yyvsp[0].str)) : NULL)); }
#line 6390 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 355:
#line 1040 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6396 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 356:
#line 1041 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_STMT_LIST, (yyvsp[0].ast)); }
#line 6402 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 357:
#line 1044 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ECHO, (yyvsp[0].ast)); }
#line 6408 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 358:
#line 1048 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 6414 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 359:
#line 1049 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6420 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 360:
#line 1053 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6426 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 361:
#line 1054 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_EXPR_LIST, (yyvsp[0].ast)); }
#line 6432 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 362:
#line 1058 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); }
#line 6438 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 363:
#line 1059 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    {
			zend_ast *decl = zend_ast_create_decl(
				ZEND_AST_CLASS, ZEND_ACC_ANON_CLASS, (yyvsp[-7].num), (yyvsp[-3].str), NULL,
				(yyvsp[-5].ast), (yyvsp[-4].ast), (yyvsp[-1].ast), NULL, NULL);
			(yyval.ast) = zend_ast_create(ZEND_AST_NEW, decl, (yyvsp[-6].ast));
		}
#line 6449 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 364:
#line 1069 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NEW, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 6455 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 365:
#line 1071 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6461 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 366:
#line 1073 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { zend_ast_with_attributes((yyvsp[0].ast)->child[0], (yyvsp[-1].ast)); (yyval.ast) = (yyvsp[0].ast); }
#line 6467 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 367:
#line 1078 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6473 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 368:
#line 1080 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_LIST; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6479 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 369:
#line 1082 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyvsp[-3].ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6485 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 370:
#line 1084 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6491 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 371:
#line 1086 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_REF, (yyvsp[-3].ast), (yyvsp[0].ast)); }
#line 6497 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 372:
#line 1087 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CLONE, (yyvsp[0].ast)); }
#line 6503 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 373:
#line 1089 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6509 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 374:
#line 1091 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6515 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 375:
#line 1093 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6521 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 376:
#line 1095 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6527 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 377:
#line 1097 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6533 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 378:
#line 1099 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6539 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 379:
#line 1101 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6545 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 380:
#line 1103 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6551 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 381:
#line 1105 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6557 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 382:
#line 1107 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6563 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 383:
#line 1109 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6569 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 384:
#line 1111 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_assign_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6575 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 385:
#line 1113 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ASSIGN_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6581 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 386:
#line 1114 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_INC, (yyvsp[-1].ast)); }
#line 6587 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 387:
#line 1115 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_INC, (yyvsp[0].ast)); }
#line 6593 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 388:
#line 1116 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_POST_DEC, (yyvsp[-1].ast)); }
#line 6599 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 389:
#line 1117 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRE_DEC, (yyvsp[0].ast)); }
#line 6605 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 390:
#line 1119 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6611 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 391:
#line 1121 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6617 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 392:
#line 1123 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6623 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 393:
#line 1125 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6629 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 394:
#line 1127 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BOOL_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6635 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 395:
#line 1128 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_OR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6641 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 396:
#line 1129 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6647 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 397:
#line 1130 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6653 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 398:
#line 1131 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_BW_XOR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6659 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 399:
#line 1132 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_CONCAT, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6665 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 400:
#line 1133 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_ADD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6671 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 401:
#line 1134 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SUB, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6677 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 402:
#line 1135 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MUL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6683 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 403:
#line 1136 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_POW, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6689 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 404:
#line 1137 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_DIV, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6695 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 405:
#line 1138 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_MOD, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6701 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 406:
#line 1139 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6707 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 407:
#line 1140 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SR, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6713 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 408:
#line 1141 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_PLUS, (yyvsp[0].ast)); }
#line 6719 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 409:
#line 1142 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNARY_MINUS, (yyvsp[0].ast)); }
#line 6725 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 410:
#line 1143 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BOOL_NOT, (yyvsp[0].ast)); }
#line 6731 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 411:
#line 1144 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_UNARY_OP, ZEND_BW_NOT, (yyvsp[0].ast)); }
#line 6737 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 412:
#line 1146 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6743 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 413:
#line 1148 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_IDENTICAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6749 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 414:
#line 1150 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6755 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 415:
#line 1152 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_NOT_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6761 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 416:
#line 1154 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6767 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 417:
#line 1156 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_IS_SMALLER_OR_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6773 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 418:
#line 1158 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6779 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 419:
#line 1160 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_GREATER_EQUAL, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6785 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 420:
#line 1162 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_binary_op(ZEND_SPACESHIP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6791 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 421:
#line 1164 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_INSTANCEOF, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6797 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 422:
#line 1165 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    {
			(yyval.ast) = (yyvsp[-1].ast);
			if ((yyval.ast)->kind == ZEND_AST_CONDITIONAL) (yyval.ast)->attr = ZEND_PARENTHESIZED_CONDITIONAL;
		}
#line 6806 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 423:
#line 1169 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6812 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 424:
#line 1171 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6818 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 425:
#line 1173 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONDITIONAL, (yyvsp[-3].ast), NULL, (yyvsp[0].ast)); }
#line 6824 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 426:
#line 1175 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_COALESCE, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 6830 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 427:
#line 1176 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6836 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 428:
#line 1177 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_LONG, (yyvsp[0].ast)); }
#line 6842 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 429:
#line 1178 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_DOUBLE, (yyvsp[0].ast)); }
#line 6848 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 430:
#line 1179 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_STRING, (yyvsp[0].ast)); }
#line 6854 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 431:
#line 1180 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_ARRAY, (yyvsp[0].ast)); }
#line 6860 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 432:
#line 1181 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_OBJECT, (yyvsp[0].ast)); }
#line 6866 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 433:
#line 1182 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(_IS_BOOL, (yyvsp[0].ast)); }
#line 6872 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 434:
#line 1183 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_cast(IS_NULL, (yyvsp[0].ast)); }
#line 6878 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 435:
#line 1184 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_EXIT, (yyvsp[0].ast)); }
#line 6884 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 436:
#line 1185 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_SILENCE, (yyvsp[0].ast)); }
#line 6890 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 437:
#line 1186 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6896 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 438:
#line 1187 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_SHELL_EXEC, (yyvsp[-1].ast)); }
#line 6902 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 439:
#line 1188 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PRINT, (yyvsp[0].ast)); }
#line 6908 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 440:
#line 1189 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, NULL, NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6914 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 441:
#line 1190 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), NULL); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6920 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 442:
#line 1191 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD, (yyvsp[0].ast), (yyvsp[-2].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6926 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 443:
#line 1192 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_YIELD_FROM, (yyvsp[0].ast)); CG(extra_fn_flags) |= ZEND_ACC_GENERATOR; }
#line 6932 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 444:
#line 1193 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_THROW, (yyvsp[0].ast)); }
#line 6938 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 445:
#line 1194 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6944 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 446:
#line 1195 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-1].ast)); }
#line 6950 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 447:
#line 1196 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }
#line 6956 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 448:
#line 1198 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_with_attributes((yyvsp[0].ast), (yyvsp[-2].ast)); ((zend_ast_decl *) (yyval.ast))->flags |= ZEND_ACC_STATIC; }
#line 6962 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 449:
#line 1199 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 6968 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 450:
#line 1206 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_CLOSURE, (yyvsp[-11].num) | (yyvsp[0].num), (yyvsp[-12].num), (yyvsp[-10].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0),
				  (yyvsp[-8].ast), (yyvsp[-6].ast), (yyvsp[-2].ast), (yyvsp[-5].ast), NULL); CG(extra_fn_flags) = (yyvsp[-4].num); }
#line 6976 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 451:
#line 1211 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_decl(ZEND_AST_ARROW_FUNC, (yyvsp[-10].num) | (yyvsp[0].num), (yyvsp[-11].num), (yyvsp[-9].str),
				  zend_string_init("{closure}", sizeof("{closure}") - 1, 0), (yyvsp[-7].ast), NULL,
				  zend_ast_create(ZEND_AST_RETURN, (yyvsp[-1].ast)), (yyvsp[-5].ast), NULL);
				  ((zend_ast_decl *) (yyval.ast))->lex_pos = (yyvsp[-2].ptr);
				  CG(extra_fn_flags) = (yyvsp[-3].num); }
#line 6986 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 452:
#line 1219 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); }
#line 6992 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 453:
#line 1223 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = CG(zend_lineno); }
#line 6998 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 454:
#line 1227 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.str) = CG(doc_comment); CG(doc_comment) = NULL; }
#line 7004 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 455:
#line 1231 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = CG(extra_fn_flags); CG(extra_fn_flags) = 0; }
#line 7010 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 456:
#line 1235 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ptr) = LANG_SCNG(yy_text); }
#line 7016 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 457:
#line 1239 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = 0; }
#line 7022 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 458:
#line 1240 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.num) = ZEND_ACC_RETURN_REFERENCE; }
#line 7028 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 459:
#line 1244 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 7034 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 460:
#line 1245 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 7040 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 461:
#line 1249 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7046 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 462:
#line 1250 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_CLOSURE_USES, (yyvsp[0].ast)); }
#line 7052 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 463:
#line 1254 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7058 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 464:
#line 1255 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); (yyval.ast)->attr = ZEND_BIND_REF; }
#line 7064 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 465:
#line 1260 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7070 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 466:
#line 1262 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7076 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 467:
#line 1264 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7082 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 468:
#line 1266 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CALL, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7088 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 469:
#line 1271 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { zval zv; ZVAL_INTERNED_STR(&zv, ZSTR_KNOWN(ZEND_STR_STATIC));
			  (yyval.ast) = zend_ast_create_zval_ex(&zv, ZEND_NAME_NOT_FQ); }
#line 7095 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 470:
#line 1273 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7101 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 471:
#line 1277 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7107 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 472:
#line 1278 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7113 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 473:
#line 1279 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7119 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 474:
#line 1283 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 7125 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 475:
#line 1284 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7131 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 476:
#line 1289 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 7137 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 477:
#line 1290 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7143 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 478:
#line 1291 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7149 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 479:
#line 1296 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(0, ZEND_AST_ARG_LIST); }
#line 7155 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 480:
#line 1297 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7161 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 481:
#line 1302 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_LONG; }
#line 7167 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 482:
#line 1303 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->attr = ZEND_ARRAY_SYNTAX_SHORT; }
#line 7173 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 483:
#line 1304 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7179 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 484:
#line 1305 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7185 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 485:
#line 1309 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7191 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 486:
#line 1310 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7197 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 487:
#line 1311 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7203 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 488:
#line 1313 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_zval_from_str(ZSTR_EMPTY_ALLOC()); }
#line 7209 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 489:
#line 1314 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7215 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 490:
#line 1315 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7221 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 491:
#line 1316 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7227 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 492:
#line 1317 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7233 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 493:
#line 1321 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_CONST, (yyvsp[0].ast)); }
#line 7239 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 494:
#line 1322 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_LINE); }
#line 7245 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 495:
#line 1323 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FILE); }
#line 7251 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 496:
#line 1324 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_DIR); }
#line 7257 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 497:
#line 1325 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_TRAIT_C); }
#line 7263 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 498:
#line 1326 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_METHOD_C); }
#line 7269 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 499:
#line 1327 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_FUNC_C); }
#line 7275 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 500:
#line 1328 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_NS_C); }
#line 7281 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 501:
#line 1329 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_MAGIC_CONST, T_CLASS_C); }
#line 7287 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 502:
#line 1334 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7293 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 503:
#line 1336 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_class_const_or_name((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7299 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 504:
#line 1340 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 7305 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 505:
#line 1341 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7311 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 506:
#line 1345 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7317 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 507:
#line 1349 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7323 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 508:
#line 1350 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7329 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 509:
#line 1351 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7335 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 510:
#line 1352 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7341 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 511:
#line 1356 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7347 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 512:
#line 1357 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7353 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 513:
#line 1361 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7359 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 514:
#line 1362 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7365 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 515:
#line 1363 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7371 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 516:
#line 1368 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7377 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 517:
#line 1370 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7383 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 518:
#line 1372 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7389 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 519:
#line 1374 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7395 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 520:
#line 1376 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_METHOD_CALL, (yyvsp[-3].ast), (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7401 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 521:
#line 1377 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7407 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 522:
#line 1382 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7413 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 523:
#line 1384 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7419 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 524:
#line 1386 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7425 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 525:
#line 1388 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7431 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 526:
#line 1392 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7437 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 527:
#line 1393 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7443 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 528:
#line 1394 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7449 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 529:
#line 1399 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7455 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 530:
#line 1401 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7461 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 531:
#line 1406 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7467 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 532:
#line 1408 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7473 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 533:
#line 1410 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_DIM, ZEND_DIM_ALTERNATIVE_SYNTAX, (yyvsp[-3].ast), (yyvsp[-1].ast)); }
#line 7479 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 534:
#line 1412 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7485 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 535:
#line 1414 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7491 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 536:
#line 1416 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7497 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 537:
#line 1418 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_STATIC_PROP, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7503 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 538:
#line 1422 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7509 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 539:
#line 1423 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7515 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 540:
#line 1424 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7521 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 541:
#line 1428 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7527 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 542:
#line 1429 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7533 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 543:
#line 1430 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7539 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 544:
#line 1435 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { /* allow single trailing comma */ (yyval.ast) = zend_ast_list_rtrim((yyvsp[0].ast)); }
#line 7545 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 545:
#line 1439 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = NULL; }
#line 7551 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 546:
#line 1440 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7557 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 547:
#line 1445 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7563 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 548:
#line 1447 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ARRAY, (yyvsp[0].ast)); }
#line 7569 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 549:
#line 1452 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), (yyvsp[-2].ast)); }
#line 7575 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 550:
#line 1454 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[0].ast), NULL); }
#line 7581 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 551:
#line 1456 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), (yyvsp[-3].ast)); }
#line 7587 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 552:
#line 1458 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_ARRAY_ELEM, 1, (yyvsp[0].ast), NULL); }
#line 7593 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 553:
#line 1460 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_UNPACK, (yyvsp[0].ast)); }
#line 7599 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 554:
#line 1462 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), (yyvsp[-5].ast)); }
#line 7606 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 555:
#line 1465 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyvsp[-1].ast)->attr = ZEND_ARRAY_SYNTAX_LIST;
			  (yyval.ast) = zend_ast_create(ZEND_AST_ARRAY_ELEM, (yyvsp[-1].ast), NULL); }
#line 7613 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 556:
#line 1471 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7619 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 557:
#line 1473 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_list_add((yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7625 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 558:
#line 1475 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(1, ZEND_AST_ENCAPS_LIST, (yyvsp[0].ast)); }
#line 7631 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 559:
#line 1477 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_list(2, ZEND_AST_ENCAPS_LIST, (yyvsp[-1].ast), (yyvsp[0].ast)); }
#line 7637 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 560:
#line 1482 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7643 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 561:
#line 1484 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-3].ast)), (yyvsp[-1].ast)); }
#line 7650 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 562:
#line 1487 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 7657 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 563:
#line 1490 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_NULLSAFE_PROP,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-2].ast)), (yyvsp[0].ast)); }
#line 7664 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 564:
#line 1493 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 7670 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 565:
#line 1495 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[-1].ast)); }
#line 7676 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 566:
#line 1497 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_DIM,
			      zend_ast_create(ZEND_AST_VAR, (yyvsp[-4].ast)), (yyvsp[-2].ast)); }
#line 7683 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 567:
#line 1499 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 7689 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 568:
#line 1503 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7695 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 569:
#line 1504 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7701 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 570:
#line 1505 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_negate_num_string((yyvsp[0].ast)); }
#line 7707 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 571:
#line 1506 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_VAR, (yyvsp[0].ast)); }
#line 7713 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 572:
#line 1511 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[-2].ast); }
#line 7719 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 573:
#line 1512 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_EMPTY, (yyvsp[-1].ast)); }
#line 7725 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 574:
#line 1514 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE, (yyvsp[0].ast)); }
#line 7731 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 575:
#line 1516 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_INCLUDE_ONCE, (yyvsp[0].ast)); }
#line 7737 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 576:
#line 1518 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_EVAL, (yyvsp[-1].ast)); }
#line 7743 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 577:
#line 1520 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE, (yyvsp[0].ast)); }
#line 7749 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 578:
#line 1522 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create_ex(ZEND_AST_INCLUDE_OR_EVAL, ZEND_REQUIRE_ONCE, (yyvsp[0].ast)); }
#line 7755 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 579:
#line 1526 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = (yyvsp[0].ast); }
#line 7761 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 580:
#line 1528 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_AND, (yyvsp[-2].ast), (yyvsp[0].ast)); }
#line 7767 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;

  case 581:
#line 1532 "U:/dev/php-7-os2/Zend/zend_language_parser.y"
    { (yyval.ast) = zend_ast_create(ZEND_AST_ISSET, (yyvsp[0].ast)); }
#line 7773 "U:/dev/php-7-os2/Zend/zend_language_parser.c"
    break;


#line 7777 "U:/dev/php-7-os2/Zend/zend_language_parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1535 "U:/dev/php-7-os2/Zend/zend_language_parser.y"


/* Over-ride Bison formatting routine to give better token descriptions.
   Copy to YYRES the contents of YYSTR for use in yyerror.
   YYSTR is taken from yytname, from the %token declaration.
   If YYRES is null, do not copy; instead, return the length of what
   the result would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	const char *toktype = yystr;
	size_t toktype_len = strlen(toktype);

	/* CG(parse_error) states:
	 * 0 => yyres = NULL, yystr is the unexpected token
	 * 1 => yyres = NULL, yystr is one of the expected tokens
	 * 2 => yyres != NULL, yystr is the unexpected token
	 * 3 => yyres != NULL, yystr is one of the expected tokens
	 */
	if (yyres && CG(parse_error) < 2) {
		CG(parse_error) = 2;
	}

	if (CG(parse_error) % 2 == 0) {
		/* The unexpected token */
		char buffer[120];
		const unsigned char *tokcontent, *tokcontent_end;
		size_t tokcontent_len;

		CG(parse_error)++;

		if (LANG_SCNG(yy_text)[0] == 0 &&
			LANG_SCNG(yy_leng) == 1 &&
			strcmp(toktype, "\"end of file\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "end of file");
			}
			return sizeof("end of file")-1;
		}

		/* Prevent the backslash getting doubled in the output (eugh) */
		if (strcmp(toktype, "\"'\\\\'\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "token \"\\\"");
			}
			return sizeof("token \"\\\"")-1;
		}

		/* We used "amp" as a dummy label to avoid a duplicate token literal warning. */
		if (strcmp(toktype, "\"amp\"") == 0) {
			if (yyres) {
				yystpcpy(yyres, "token \"&\"");
			}
			return sizeof("token \"&\"")-1;
		}

		/* Avoid unreadable """ */
		/* "'" would theoretically be just as bad, but is never currently parsed as a separate token */
		if (strcmp(toktype, "'\"'") == 0) {
			if (yyres) {
				yystpcpy(yyres, "double-quote mark");
			}
			return sizeof("double-quote mark")-1;
		}

		/* Strip off the outer quote marks */
		if (toktype_len >= 2 && *toktype == '"') {
			toktype++;
			toktype_len -= 2;
		}

		/* If the token always has one form, the %token line should have a single-quoted name */
		/* The parser rules also include single-character un-named tokens which will be single-quoted here */
		/* We re-format this with double quotes here to ensure everything's consistent */
		if (toktype_len > 0 && *toktype == '\'') {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "token \"%.*s\"", (int)toktype_len-2, toktype+1);
				yystpcpy(yyres, buffer);
			}
			return toktype_len + sizeof("token ")-1;
		}

		/* Fetch the content of the last seen token from global lexer state */
		tokcontent = LANG_SCNG(yy_text);
		tokcontent_len = LANG_SCNG(yy_leng);

		/* For T_BAD_CHARACTER, the content probably won't be a printable char */
		/* Also, "unexpected invalid character" sounds a bit redundant */
		if (tokcontent_len == 1 && strcmp(yystr, "\"invalid character\"") == 0) {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "character 0x%02hhX", *tokcontent);
				yystpcpy(yyres, buffer);
			}
			return sizeof("character 0x00")-1;
		}

		/* Truncate at line end to avoid messing up log formats */
		tokcontent_end = memchr(tokcontent, '\n', tokcontent_len);
		if (tokcontent_end != NULL) {
			tokcontent_len = (tokcontent_end - tokcontent);
		}

		/* Try to be helpful about what kind of string was found, before stripping the quotes */
		if (tokcontent_len > 0 && strcmp(yystr, "\"quoted string\"") == 0) {
			if (*tokcontent == '"') {
				toktype = "double-quoted string";
				toktype_len = sizeof("double-quoted string")-1;
			}
			else if (*tokcontent == '\'') {
				toktype = "single-quoted string";
				toktype_len = sizeof("single-quoted string")-1;
			}
		}

		/* For quoted strings, strip off another layer of quotes to avoid putting quotes inside quotes */
		if (tokcontent_len > 0 && (*tokcontent == '\'' || *tokcontent=='"'))  {
			tokcontent++;
			tokcontent_len--;
		}
		if (tokcontent_len > 0 && (tokcontent[tokcontent_len-1] == '\'' || tokcontent[tokcontent_len-1] == '"'))  {
			tokcontent_len--;
		}

		/* Truncate to 30 characters and add a ... */
		if (tokcontent_len > 30 + sizeof("...")-1) {
			if (yyres) {
				snprintf(buffer, sizeof(buffer), "%.*s \"%.*s...\"", (int)toktype_len, toktype, 30, tokcontent);
				yystpcpy(yyres, buffer);
			}
			return toktype_len + 30 + sizeof(" \"...\"")-1;
		}

		if (yyres) {
			snprintf(buffer, sizeof(buffer), "%.*s \"%.*s\"", (int)toktype_len, toktype, (int)tokcontent_len, tokcontent);
			yystpcpy(yyres, buffer);
		}
		return toktype_len + tokcontent_len + sizeof(" \"\"")-1;
	}

	/* One of the expected tokens */

	/* Prevent the backslash getting doubled in the output (eugh) */
	if (strcmp(toktype, "\"'\\\\'\"") == 0) {
		if (yyres) {
			yystpcpy(yyres, "\"\\\"");
		}
		return sizeof("\"\\\"")-1;
	}

	/* Strip off the outer quote marks */
	if (toktype_len >= 2 && *toktype == '"') {
		toktype++;
		toktype_len -= 2;
	}

	if (yyres) {
		YYSIZE_T yyn = 0;

		for (; yyn < toktype_len; ++yyn) {
			/* Replace single quotes with double for consistency */
			if (toktype[yyn] == '\'') {
				yyres[yyn] = '"';
			}
			else {
				yyres[yyn] = toktype[yyn];
			}
		}
		yyres[toktype_len] = '\0';
	}

	return toktype_len;
}
