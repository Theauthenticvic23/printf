#include "main.h"

/**
 * cynputs - Prints a string of characters
 * @str: num of char
 * Return: the characters
 */

int cynputs(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(str[i]);
		++i;
	}

	return (i);
}

/**
 * itao - integer to ascii
 * @no: number
 * @base: base
 * Return: char
 **/
char *itao(long int no, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = no;

	if (no < 0)
	{
		n = -no;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do      {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

/**
 * vic_int - integer
 * @args: args
 * Return: nothing
 */

int vic_int(va_list args)
{
	char *num_cyn;
	int lencyn;

	num_cyn = itao(va_arg(args, int), 10);
	lencyn = cynputs((num_cyn != NULL) ? num_cyn : "NULL");
	return (lencyn);
}

/**
 * vic_dec - decimal
 * @args: args
 * Return: nothing
 */

int vic_dec(va_list args)
{
	char *num_cyn;
	int lencyn;

	num_cyn = itao(va_arg(args, int), 10);
	lencyn = cynputs((num_cyn != NULL) ? num_cyn : "NULL");
	return (lencyn);
}
