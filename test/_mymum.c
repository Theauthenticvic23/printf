#include "main.h"
/**
 * customp_char - printing a character
 * @val: args
 * Return: 1
 */

int customp_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
