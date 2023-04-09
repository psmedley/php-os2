/* Generated by re2c 2.1.1 */
/*
  +----------------------------------------------------------------------+
  | phar php single-file executable PHP extension                        |
  +----------------------------------------------------------------------+
  | Copyright (c) The PHP Group                                          |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | https://www.php.net/license/3_01.txt                                 |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Authors: Marcus Boerger <helly@php.net>                              |
  +----------------------------------------------------------------------+
*/

#include "phar_internal.h"

phar_path_check_result phar_path_check(char **s, size_t *len, const char **error)
{
	const unsigned char *p = (const unsigned char*)*s;
	const unsigned char *m;

	if (*len == 1 && *p == '.') {
		*error = "current directory reference";
		return pcr_err_curr_dir;
	} else if (*len == 2 && p[0] == '.' && p[1] == '.') {
		*error = "upper directory reference";
		return pcr_err_up_dir;
	}

#define YYCTYPE         unsigned char
#define YYCURSOR        p
#define YYLIMIT         p+*len
#define YYMARKER        m
#define YYFILL(n)       do {} while (0)

loop:

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	if (yych <= '[') {
		if (yych <= ')') {
			if (yych <= '\f') {
				if (yych >= 0x01) goto yy4;
			} else {
				if (yych <= '\r') goto yy6;
				if (yych <= 0x19) goto yy4;
				goto yy7;
			}
		} else {
			if (yych <= '/') {
				if (yych <= '*') goto yy9;
				if (yych <= '.') goto yy7;
				goto yy11;
			} else {
				if (yych == '?') goto yy12;
				goto yy7;
			}
		}
	} else {
		if (yych <= 0xEC) {
			if (yych <= 0xC1) {
				if (yych <= '\\') goto yy14;
				if (yych <= 0x7F) goto yy7;
				goto yy4;
			} else {
				if (yych <= 0xDF) goto yy16;
				if (yych <= 0xE0) goto yy17;
				goto yy18;
			}
		} else {
			if (yych <= 0xF0) {
				if (yych <= 0xED) goto yy19;
				if (yych <= 0xEF) goto yy18;
				goto yy20;
			} else {
				if (yych <= 0xF3) goto yy21;
				if (yych <= 0xF4) goto yy22;
				goto yy4;
			}
		}
	}
	++YYCURSOR;
	{
			if (**s == '/') {
				(*s)++;
				(*len)--;
			}
			if ((p - (const unsigned char*)*s) - 1 != *len)
			{
				*error ="illegal character";
				return pcr_err_illegal_char;
			}
			*error = NULL;
			return pcr_is_ok;
		}
yy4:
	++YYCURSOR;
yy5:
	{
			*error ="illegal character";
			return pcr_err_illegal_char;
		}
yy6:
	yych = *++YYCURSOR;
	if (yych == '\n') goto yy4;
	goto yy5;
yy7:
	++YYCURSOR;
yy8:
	{
			goto loop;
		}
yy9:
	++YYCURSOR;
	{
			*error = "star";
			return pcr_err_star;
		}
yy11:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= '-') goto yy8;
	if (yych <= '.') goto yy23;
	if (yych <= '/') goto yy25;
	goto yy8;
yy12:
	++YYCURSOR;
	{
			if (**s == '/') {
				(*s)++;
			}
			*len = (p - (const unsigned char*)*s) -1;
			*error = NULL;
			return pcr_use_query;
		}
yy14:
	++YYCURSOR;
	{
			*error = "back-slash";
			return pcr_err_back_slash;
		}
yy16:
	yych = *++YYCURSOR;
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0xBF) goto yy7;
	goto yy5;
yy17:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x9F) goto yy5;
	if (yych <= 0xBF) goto yy27;
	goto yy5;
yy18:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0xBF) goto yy27;
	goto yy5;
yy19:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0x9F) goto yy27;
	goto yy5;
yy20:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x8F) goto yy5;
	if (yych <= 0xBF) goto yy28;
	goto yy5;
yy21:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0xBF) goto yy28;
	goto yy5;
yy22:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= 0x7F) goto yy5;
	if (yych <= 0x8F) goto yy28;
	goto yy5;
yy23:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy29;
	if (yych <= '-') goto yy24;
	if (yych <= '.') goto yy31;
	if (yych <= '/') goto yy29;
yy24:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy8;
	} else {
		goto yy5;
	}
yy25:
	++YYCURSOR;
	{
			*error = "double slash";
			return pcr_err_double_slash;
		}
yy27:
	yych = *++YYCURSOR;
	if (yych <= 0x7F) goto yy24;
	if (yych <= 0xBF) goto yy7;
	goto yy24;
yy28:
	yych = *++YYCURSOR;
	if (yych <= 0x7F) goto yy24;
	if (yych <= 0xBF) goto yy27;
	goto yy24;
yy29:
	++YYCURSOR;
	{
			*error = "current directory reference";
			return pcr_err_curr_dir;
		}
yy31:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy32;
	if (yych != '/') goto yy24;
yy32:
	++YYCURSOR;
	{
			*error = "upper directory reference";
			return pcr_err_up_dir;
		}
}

}
