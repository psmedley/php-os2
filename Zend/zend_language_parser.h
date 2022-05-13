/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 60 "U:/dev/php-7-os2/Zend/zend_language_parser.h"

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
