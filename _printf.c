#include "main.h"

/**
 * _printf - first printf
 * @format: character
 * Return: i
 */

int _printf(const char *format, ...)
{
	match m[] = {
	{"%c", customp_char}, {"%s", customp_string}, {"%%", custom_percent}, {"%d", vic_dec}, {"%i", vic_int}, {"%r", print_revs}, {"%R", print_rot13}, {"%b", mum_bin}, {"%u", vic_unsigned}, {"%o", mum_octal}, {"%x", dad_mex}, {"%X", print_Hex}, {"%s", print_Hex}, {"%p", myini_pointer}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);

	if (format == NULL)
		return (-1);

Here:
	while (format[i] == '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			} else if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar('%');
				len++;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
