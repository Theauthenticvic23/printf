#include "main.h"
#include <string.h>
/**
 * customp_string - string
 * @val: args
 * Return: length of str
 */

int customp_string(va_list val)
{
	char *str;
	int y;
	int len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = strlen(str);
		for (y = 0; y < len ; y++)
			_putchar(str[y]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (y = 0; y < len ; y++)
			_putchar(str[y]);
		return (len);
	}
}
