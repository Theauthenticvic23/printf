#include "main.h"

/**
 * myini_pointer - pointer
 * @val: args
 * Return: nothing
 */

int myini_pointer(va_list val)
{
	void *p;
	char *c = "(nil)";
	int j, d;
	long int b;

	p = va_arg(val, void *);

	if (p == NULL)
	{
		for (j = 0 ; c[j] != '\0'; j++)
			_putchar(c[j]);
		return (j);
	}
	b = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	d = vic_hex(b);
	return (d + 2);
}
