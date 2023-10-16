#include "main.h"
/**
 * print_cyn - string
 * @val: args
 * Return: nothing
 */

int print_cyn(va_list val)
{
	char *s;
	int j, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < 32 || s[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[j];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length  = length + print_extra(value);
		}
		else
		{
			_putchar(s[j]);
			length++;
		}
	}
	return (length);
}
