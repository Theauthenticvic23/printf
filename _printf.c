#include "main.h"

void c_buffer(char lim[], int *j);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, j = 0;
	va_list val;
	char lim[1024];

	if (format == NULL)
		return (-1);

	va_start(val, format);

<<<<<<< HEAD
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
=======
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
>>>>>>> d42600d22fe3416f01a1bab0563a14a791142083
		{
			lim[j++] = format[i];
			if (j == 1024)
				c_buffer(lim, &j);
			printed_chars++;
		}
		else
		{
<<<<<<< HEAD
			c_buffer(format[i]);
			len++;
>>>>>>> 6c5ca8656f65af0d6a64c2e3e7bf18b03b651bf7
/*			_putchar(format[i]);*/
=======
			c_buffer(lim, &j);
			flags = cyn_flags(format, &i);
			width = cyn_width(format, &i, val);
			precision = cyn_precision(format, &i, val);
			size = cyn_size(format, &i);
			++i;
			printed = flag_handler(format, &i, val, lim,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
>>>>>>> d42600d22fe3416f01a1bab0563a14a791142083
		}
	}

	c_buffer(lim, &j);

	va_end(val);

	return (printed_chars);
}

/**
 * c_buffer - Prints the contents of the lim if it exist
 * @lim: Array of chars
 * @j: Index at which to add next char, represents the length.
 */
void c_buffer(char lim[], int *j)
{
	if (*j > 0)
		write(1, &lim[0], *j);

	*j = 0;
}
