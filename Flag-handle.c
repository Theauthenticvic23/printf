#include "main.h"
/**
 * flag_handler - Prints an argument based on its type
 * @typ: Formatted string in which to print the arguments.
 * @val: List of arguments to be printed.
 * @ind: ind.
 * @lim: lim array to handle print.
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 *
 * Return: 1 or 2;
 */
int flag_handler(const char *typ, int *ind, va_list val, char lim[],
	int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_chars = -1;
	typ_t typ_types[] = {
		{'c', customp_char}, {'s', print_cyn}, {'%', custom_percent},
		{'i', vic_int}, {'d', vic_int}, {'b', mum_bin},
		{'u', vic_unsigned}, {'o', mum_octal}, {'x', dad_mex},
		{'X', dad_MEX}, {'p', myini_pointer}, {'S', print_CYN},
		{'r', print_revs}, {'R', print_rot13}, {'\0', NULL}
	};
	for (i = 0; typ_types[i].typ != '\0'; i++)
		if (typ[*ind] == typ_types[i].typ)
			return (typ_types[i].fa(val, lim, flags, width, precision, size));

	if (typ_types[i].typ == '\0')
	{
		if (typ[*ind] == '\0')
			return (-1);
		unknow_len += write(1, "%%", 1);
		if (typ[*ind - 1] == ' ')
			unknow_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (typ[*ind] != ' ' && typ[*ind] != '%')
				--(*ind);
			if (typ[*ind] == ' ')
				--(*ind);
			return (1);
		}
		unknow_len += write(1, &typ[*ind], 1);
		return (unknow_len);
	}
	return (printed_chars);
}
