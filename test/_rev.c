#include "main.h"
/**
 * print_revs - reverse
 * @val: args
 * Return: nothing
 */

int print_revs(va_list val)
{
	char *r = va_arg(val, char *);
	int m;
	int n = 0;

	if (r == NULL)
		r = "(null)";
	while (r[n] != '\0')
		n++;
	for (m = n - 1; m >= 0; m--)
		_putchar(r[m]);
	return (n);
}
