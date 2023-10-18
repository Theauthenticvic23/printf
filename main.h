#ifndef MAIN_H
#define MAIN_H


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

#define VOID(cyn) (void)(cyn)


/* FLAG OPERATORS AND SPECIALS */
#define C_MINUS 1
#define C_PLUS 2
#define C_ZERO 4
#define C_HASH 8
#define C_SPACE 16

/* DIFFERENT SIZES  */
#define C_LONG 2
#define C_SHORT 1

/**
 * struct typ - Struct op
 * @typ: The format.
 * @fa: The function associated.
 */
struct typ
{
	char typ;
	int (*fa)();
};


/**
 * typedef struct typ typ_t - Struct op
 * @typ: The format.
 * @typ_t: The function associated.
 */
typedef struct typ typ_t;

int _printf(const char *format, ...);
int flag_handler(const char *, int *, va_list, char[], int, int, int, int);

/* Funtions to print chars and strings */
int customp_char(va_list, char[], int, int, int, int);
int print_cyn(va_list, char[], int, int, int, int);
int custom_percent(va_list, char[], int, int, int, int);

/* Functions to print numbers */
int vic_int(va_list, char[], int, int, int, int);
int mum_bin(va_list, char[], int, int, int, int);
int vic_unsigned(va_list, char[], int, int, int, int);
int mum_octal(va_list, char[], int, int, int, int);
int dad_mex(va_list, char[], int, int, int, int);
int dad_MEX(va_list, char[], int, int, int, int);
int dad_cmex(va_list, char[], char[], int, char, int, int, int);

/* Function to print non printable characters */
int print_CYN(va_list, char[], int, int, int, int);

/* Funcion to print memory address */
int myini_pointer(va_list, char[], int, int, int, int);

/* Funciotns to handle other specifiers */
int cyn_flags(const char *, int *i);
int cyn_width(const char *, int *i, va_list);
int cyn_precision(const char *, int *, va_list);
int cyn_size(const char *, int *);

/*Function to print string in reverse*/
int print_revs(va_list, char[], int, int, int, int);

/*Function to print a string in rot 13*/
int print_rot13(va_list, char[], int, int, int, int);

/* special write handler */
int write_cyn(char, char[], int, int, int, int);
int write_cyno(int, int, char[], int, int, int, int);
int write_cynum(int, char[], int, int, int, int, char, char);
int write_cynp(char lim[], int ind, int length, int, int, char, char, int);
int write_cynu(int, int, char[], int, int, int, int);

/* Other Special Functions */
int cyn_is_print(char);
int print_extra(char, char[], int);
int is_digit(char);

long int conv_size_numb(long int, int);
long int conv_size_un(unsigned long int, int);

#endif /* MAIN_H */
