#include "main.h"

/************************* PRINT UNSIGNED NUMBER *************************/
/**
 * vic_unsigned - Prints an unsigned number
 * @args: List a of arguments
 * @lim: lim array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed.
 */
int vic_unsigned(va_list args, char lim[],
	int flags, int width, int precision, int size)
{
	int i = 1024 - 2;
	unsigned long int num = va_arg(args, unsigned long int);

	num = conv_size_un(num, size);

	if (num == 0)
		lim[i--] = '0';

	lim[1024 - 1] = '\0';

	while (num > 0)
	{
		lim[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_cynu(0, i, lim, flags, width, precision, size));
}

/************* PRINT UNSIGNED NUMBER IN OCTAL  ****************/
/**
 * mum_octal - Prints an unsigned number in octal notation
 * @args: Lista of arguments
 * @lim: lim array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int mum_octal(va_list args, char lim[],
	int flags, int width, int precision, int size)
{

	int i = 1024 - 2;
	unsigned long int num = va_arg(args, unsigned long int);
	unsigned long int init_num = num;

	VOID(width);

	num = conv_size_un(num, size);

	if (num == 0)
		lim[i--] = '0';

	lim[1024 - 1] = '\0';

	while (num > 0)
	{
		lim[i--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags & C_HASH && init_num != 0)
		lim[i--] = '0';

	i++;

	return (write_cynu(0, i, lim, flags, width, precision, size));
}

/************** PRINT UNSIGNED NUMBER IN HEXADECIMAL **************/
/**
 * dad_mex - Prints an unsigned number in hexadecimal notation
 * @args: Lista of arguments
 * @lim: lim array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int dad_mex(va_list args, char lim[],
	int flags, int width, int precision, int size)
{
	return (dad_cmex(args, "0123456789abcdef", lim,
		flags, 'x', width, precision, size));
}

/************* PRINT UNSIGNED NUMBER IN UPPER HEXADECIMAL **************/
/**
 * dad_MEX - Prints an unsigned number in upper hexadecimal notation
 * @args: Lista of arguments
 * @lim: lim array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int dad_MEX(va_list args, char lim[],
	int flags, int width, int precision, int size)
{
	return (dad_cmex(args, "0123456789ABCDEF", lim,
		flags, 'X', width, precision, size));
}

/************** PRINT HEXX NUM IN LOWER OR UPPER **************/
/**
 * dad_cmex - Prints a hexadecimal number in lower or upper
 * @args: Lista of arguments
 * @map_to: Array of values to map the number to
 * @lim: lim array to handle print
 * @flags:  Calculates active flags
 * @flag_ch: Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * @size: Size specification
 * Return: Number of chars printed
 */
int dad_cmex(va_list args, char map_to[], char lim[],
	int flags, char flag_ch, int width, int precision, int size)
{
	int i = 1024 - 2;
	unsigned long int num = va_arg(args, unsigned long int);
	unsigned long int init_num = num;

	VOID(width);

	num = conv_size_un(num, size);

	if (num == 0)
		lim[i--] = '0';

	lim[1024 - 1] = '\0';

	while (num > 0)
	{
		lim[i--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & C_HASH && init_num != 0)
	{
		lim[i--] = flag_ch;
		lim[i--] = '0';
	}

	i++;

	return (write_cynu(0, i, lim, flags, width, precision, size));
}
