#include "main.h"

/**
 * print_rot13 - rot 13
 * @val: args
 * Return: nothing
 */

int print_rot13(va_list val)
{
	int a, b, jump = 0;
	int u = 0;
	char *r = va_arg(val, char *);

	char i[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char j[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (r == NULL)
		r = "(null)";
	for (a = 0 ; r[a] ; a++)
	{
		u = 0;
		for (b = 0 ; i[b] && !u ; b++)
		{
			if (r[a] == i[b])
			{
				_putchar(j[b]);
				jump++;
				u = 1;
			}
		}
		if (!u)
		{
			_putchar(r[a]);
			jump++;
		}
	}
	return (jump);
}
