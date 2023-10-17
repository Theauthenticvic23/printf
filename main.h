#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct format - represents a format and its association
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _printf(const char *format, ...);
int customp_char(va_list val);
int _putchar(char c);
int _strlen(char *str);
int customp_string(va_list val);
int _strlenk(const char *str);
int custom_percent(void);
int vic_int(va_list args);
int vic_dec(va_list args);
int vic_unsigned(va_list args);
int mum_bin(va_list val);
int myini_pointer(va_list val);
int mum_octal(va_list val);
int dad_mex(va_list val);
int print_Hex(va_list val);
int print_extra(unsigned int min);
int myini_pointer(va_list val);
int vic_hex(unsigned long int min);
int print_revs(va_list val);
int print_rot13(va_list val);
int c_buffer(char t);

#endif
