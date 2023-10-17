#include "main.h"

/**
 * flag_handler - Controller for percent format
 * @s: String format
 * @args: List of arguments
 * @i: Iterator
 * Return: Size of the numbers of elements printed
 **/

int flag_handler(const char *s, va_list args, int *i)
{
	int len = 0, j, num_f;

	match m[] = {
		{'c', customp_char}, {'s', customp_string},
		{'%', custom_percent}, {'d', vic_dec},
		{'i', vic_int}, {'r', print_revs},
		{'R', print_rot13}, {'b', mum_bin},
		{'u', vic_unsigned}, {'o', mum_octal},
		{'x', dad_mex}, {'X', print_Hex},
		{'p', myini_pointer}
	};

	*i += 1;
	if (s[*i] == '\0')
		return (-1);

	num_f = sizeof(m) / sizeof(m[0]);
	for (j = 0; j < num_f; j++)
	{
		if (s[*i] == m[j].id)
		{
			len = m[j].f(args);
			return (len);
		}
	}
	_putchar('%'), _putchar(s[*i]);

	return (2);
}

/**
 * _printf - first printf
 * @format: character
 * Return: i
 */

int _printf(const char *format, ...)
{

	va_list args;
	int i = 0, len = 0, cyn;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (; format[i] != '\0'; i++)
	{
		if ('%' == format[i])
<<<<<<< HEAD
			{
				c_buffer(-1);
				cyn = flag_handler(format, args, &i);
				if (cyn == -1)
					return (-1);
				len += cyn;
				continue;
			}
			else
			{
				c_buffer(format[i]);
				len++;
=======
		{
			c_buffer(-1);
			cyn = flag_handler(format, args, &i);
			if (cyn == -1)
				return (-1);
			len += cyn;
			continue;
		}
		else
		{
			c_buffer(format[i]);
			len++;
>>>>>>> 6c5ca8656f65af0d6a64c2e3e7bf18b03b651bf7
/*			_putchar(format[i]);*/
		}
/*		len++;*/
	}
	c_buffer(-1);
	va_end(args);
	return (len);
}
