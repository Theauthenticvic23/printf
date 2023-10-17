#include "main.h"

/**
 * _printf - first printf
 * @format: character
 * Return: i
 */

int _printf(const char *format, ...)
{
	match m[] = {
	{"c", customp_char}, {"s", customp_string}, {"%", custom_percent}, {"d", vic_dec}, {"i", vic_int}, {"r", print_revs}, {"R", print_rot13}, {"b", mum_bin}, {"u", vic_unsigned}, {"o", mum_octal}, {"x", dad_mex}, {"X", print_Hex}, {"p", myini_pointer}
	};

	va_list args;
	int i = 0, len = 0, num_f;
	int j;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		
			if ('%' == format[i])
			{
				c_buffer(-2);
				i++;
				if (format[i] == '\0')
					return (-1);
				num_f = sizeof(m) / sizeof(m[0]);
				for (j = 0; j < num_f; j++)
				{
					if (format[i] == m[j].id)
					{
						len = m[j].f(args);
						i++;
						j++;
						continue;
					}
				}
			}
		
	
		}
	c_buffer(format[i]);
/*			_putchar(format[i]);*/
			i++;
			len++;
	}
c_buffer(-2);
	va_end(args);
	return (len);
}
