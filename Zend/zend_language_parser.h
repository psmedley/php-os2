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

#ifndef YY_ZEND_U_DEV_PHP_7_4_28_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
# define YY_ZEND_U_DEV_PHP_7_4_28_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zenddebug;
#endif
/* "%code requires" blocks.  */
#line 49 "U:/dev/php-7.4.28/Zend/zend_language_parser.y"


#line 51 "U:/dev/php-7.4.28/Zend/zend_language_parser.h"

/* Token type.  */
#include "zend.h"
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    PREC_ARROW_FUNCTION = 258,
    T_INCLUDE = 259,
    T_INCLUDE_ONCE = 260,
    T_REQUIRE = 261,
    T_REQUIRE_ONCE = 262,
    T_LOGICAL_OR = 263,
    T_LOGICAL_XOR = 264,
    T_LOGICAL_AND = 265,
    T_PRINT = 266,
    T_YIELD = 267,
    T_DOUBLE_ARROW = 268,
    T_YIELD_FROM = 269,
    T_PLUS_EQUAL = 270,
    T_MINUS_EQUAL = 271,
    T_MUL_EQUAL = 272,
    T_DIV_EQUAL = 273,
    T_CONCAT_EQUAL = 274,
    T_MOD_EQUAL = 275,
    T_AND_EQUAL = 276,
    T_OR_EQUAL = 277,
    T_XOR_EQUAL = 278,
    T_SL_EQUAL = 279,
    T_SR_EQUAL = 280,
    T_POW_EQUAL = 281,
    T_COALESCE_EQUAL = 282,
    T_COALESCE = 283,
    T_BOOLEAN_OR = 284,
    T_BOOLEAN_AND = 285,
    T_IS_EQUAL = 286,
    T_IS_NOT_EQUAL = 287,
    T_IS_IDENTICAL = 288,
    T_IS_NOT_IDENTICAL = 289,
    T_SPACESHIP = 290,
    T_IS_SMALLER_OR_EQUAL = 291,
    T_IS_GREATER_OR_EQUAL = 292,
    T_SL = 293,
    T_SR = 294,
    T_INSTANCEOF = 295,
    T_INT_CAST = 296,
    T_DOUBLE_CAST = 297,
    T_STRING_CAST = 298,
    T_ARRAY_CAST = 299,
    T_OBJECT_CAST = 300,
    T_BOOL_CAST = 301,
    T_UNSET_CAST = 302,
    T_POW = 303,
    T_NEW = 304,
    T_CLONE = 305,
    T_NOELSE = 306,
    T_ELSEIF = 307,
    T_ELSE = 308,
    T_LNUMBER = 309,
    T_DNUMBER = 310,
    T_STRING = 311,
    T_VARIABLE = 312,
    T_INLINE_HTML = 313,
    T_ENCAPSED_AND_WHITESPACE = 314,
    T_CONSTANT_ENCAPSED_STRING = 315,
    T_STRING_VARNAME = 316,
    T_NUM_STRING = 317,
    T_EVAL = 318,
    T_INC = 319,
    T_DEC = 320,
    T_EXIT = 321,
    T_IF = 322,
    T_ENDIF = 323,
    T_ECHO = 324,
    T_DO = 325,
    T_WHILE = 326,
    T_ENDWHILE = 327,
    T_FOR = 328,
    T_ENDFOR = 329,
    T_FOREACH = 330,
    T_ENDFOREACH = 331,
    T_DECLARE = 332,
    T_ENDDECLARE = 333,
    T_AS = 334,
    T_SWITCH = 335,
    T_ENDSWITCH = 336,
    T_CASE = 337,
    T_DEFAULT = 338,
    T_BREAK = 339,
    T_CONTINUE = 340,
    T_GOTO = 341,
    T_FUNCTION = 342,
    T_FN = 343,
    T_CONST = 344,
    T_RETURN = 345,
    T_TRY = 346,
    T_CATCH = 347,
    T_FINALLY = 348,
    T_THROW = 349,
    T_USE = 350,
    T_INSTEADOF = 351,
    T_GLOBAL = 352,
    T_STATIC = 353,
    T_ABSTRACT = 354,
    T_FINAL = 355,
    T_PRIVATE = 356,
    T_PROTECTED = 357,
    T_PUBLIC = 358,
    T_VAR = 359,
    T_UNSET = 360,
    T_ISSET = 361,
    T_EMPTY = 362,
    T_HALT_COMPILER = 363,
    T_CLASS = 364,
    T_TRAIT = 365,
    T_INTERFACE = 366,
    T_EXTENDS = 367,
    T_IMPLEMENTS = 368,
    T_OBJECT_OPERATOR = 369,
    T_LIST = 370,
    T_ARRAY = 371,
    T_CALLABLE = 372,
    T_LINE = 373,
    T_FILE = 374,
    T_DIR = 375,
    T_CLASS_C = 376,
    T_TRAIT_C = 377,
    T_METHOD_C = 378,
    T_FUNC_C = 379,
    T_COMMENT = 380,
    T_DOC_COMMENT = 381,
    T_OPEN_TAG = 382,
    T_OPEN_TAG_WITH_ECHO = 383,
    T_CLOSE_TAG = 384,
    T_WHITESPACE = 385,
    T_START_HEREDOC = 386,
    T_END_HEREDOC = 387,
    T_DOLLAR_OPEN_CURLY_BRACES = 388,
    T_CURLY_OPEN = 389,
    T_PAAMAYIM_NEKUDOTAYIM = 390,
    T_NAMESPACE = 391,
    T_NS_C = 392,
    T_NS_SEPARATOR = 393,
    T_ELLIPSIS = 394,
    T_BAD_CHARACTER = 395,
    T_ERROR = 396
  };
#endif
/* Tokens.  */
#define END 0
#define PREC_ARROW_FUNCTION 258
#define T_INCLUDE 259
#define T_INCLUDE_ONCE 260
#define T_REQUIRE 261
#define T_REQUIRE_ONCE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_YIELD 267
#define T_DOUBLE_ARROW 268
#define T_YIELD_FROM 269
#define T_PLUS_EQUAL 270
#define T_MINUS_EQUAL 271
#define T_MUL_EQUAL 272
#define T_DIV_EQUAL 273
#define T_CONCAT_EQUAL 274
#define T_MOD_EQUAL 275
#define T_AND_EQUAL 276
#define T_OR_EQUAL 277
#define T_XOR_EQUAL 278
#define T_SL_EQUAL 279
#define T_SR_EQUAL 280
#define T_POW_EQUAL 281
#define T_COALESCE_EQUAL 282
#define T_COALESCE 283
#define T_BOOLEAN_OR 284
#define T_BOOLEAN_AND 285
#define T_IS_EQUAL 286
#define T_IS_NOT_EQUAL 287
#define T_IS_IDENTICAL 288
#define T_IS_NOT_IDENTICAL 289
#define T_SPACESHIP 290
#define T_IS_SMALLER_OR_EQUAL 291
#define T_IS_GREATER_OR_EQUAL 292
#define T_SL 293
#define T_SR 294
#define T_INSTANCEOF 295
#define T_INT_CAST 296
#define T_DOUBLE_CAST 297
#define T_STRING_CAST 298
#define T_ARRAY_CAST 299
#define T_OBJECT_CAST 300
#define T_BOOL_CAST 301
#define T_UNSET_CAST 302
#define T_POW 303
#define T_NEW 304
#define T_CLONE 305
#define T_NOELSE 306
#define T_ELSEIF 307
#define T_ELSE 308
#define T_LNUMBER 309
#define T_DNUMBER 310
#define T_STRING 311
#define T_VARIABLE 312
#define T_INLINE_HTML 313
#define T_ENCAPSED_AND_WHITESPACE 314
#define T_CONSTANT_ENCAPSED_STRING 315
#define T_STRING_VARNAME 316
#define T_NUM_STRING 317
#define T_EVAL 318
#define T_INC 319
#define T_DEC 320
#define T_EXIT 321
#define T_IF 322
#define T_ENDIF 323
#define T_ECHO 324
#define T_DO 325
#define T_WHILE 326
#define T_ENDWHILE 327
#define T_FOR 328
#define T_ENDFOR 329
#define T_FOREACH 330
#define T_ENDFOREACH 331
#define T_DECLARE 332
#define T_ENDDECLARE 333
#define T_AS 334
#define T_SWITCH 335
#define T_ENDSWITCH 336
#define T_CASE 337
#define T_DEFAULT 338
#define T_BREAK 339
#define T_CONTINUE 340
#define T_GOTO 341
#define T_FUNCTION 342
#define T_FN 343
#define T_CONST 344
#define T_RETURN 345
#define T_TRY 346
#define T_CATCH 347
#define T_FINALLY 348
#define T_THROW 349
#define T_USE 350
#define T_INSTEADOF 351
#define T_GLOBAL 352
#define T_STATIC 353
#define T_ABSTRACT 354
#define T_FINAL 355
#define T_PRIVATE 356
#define T_PROTECTED 357
#define T_PUBLIC 358
#define T_VAR 359
#define T_UNSET 360
#define T_ISSET 361
#define T_EMPTY 362
#define T_HALT_COMPILER 363
#define T_CLASS 364
#define T_TRAIT 365
#define T_INTERFACE 366
#define T_EXTENDS 367
#define T_IMPLEMENTS 368
#define T_OBJECT_OPERATOR 369
#define T_LIST 370
#define T_ARRAY 371
#define T_CALLABLE 372
#define T_LINE 373
#define T_FILE 374
#define T_DIR 375
#define T_CLASS_C 376
#define T_TRAIT_C 377
#define T_METHOD_C 378
#define T_FUNC_C 379
#define T_COMMENT 380
#define T_DOC_COMMENT 381
#define T_OPEN_TAG 382
#define T_OPEN_TAG_WITH_ECHO 383
#define T_CLOSE_TAG 384
#define T_WHITESPACE 385
#define T_START_HEREDOC 386
#define T_END_HEREDOC 387
#define T_DOLLAR_OPEN_CURLY_BRACES 388
#define T_CURLY_OPEN 389
#define T_PAAMAYIM_NEKUDOTAYIM 390
#define T_NAMESPACE 391
#define T_NS_C 392
#define T_NS_SEPARATOR 393
#define T_ELLIPSIS 394
#define T_BAD_CHARACTER 395
#define T_ERROR 396

/* Value type.  */



ZEND_API int zendparse (void);

#endif /* !YY_ZEND_U_DEV_PHP_7_4_28_ZEND_ZEND_LANGUAGE_PARSER_H_INCLUDED  */
