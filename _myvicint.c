#include "main.h"
/**
 * vic_int - integer
 * @args: args
 * Return: nothing
 */

int vic_int(va_list args)
{
	int a = va_arg(args, int);
	int min, fast = a % 10, digit, exp = 1;
	int d = 1;

	a = a / 10;
	min = a;

	if (fast < 0)
	{
		_putchar('-');
		min = -min;
		a = -a;
		fast = -fast;
/*		d++;*/
	}

	if (min > 0)
	{
		while (min / 10 != 0)
		{
			exp = exp * 10;
			min = min / 10;
		}
		min = a;
		while (exp == 0)
		{
			digit = min / exp;
			_putchar(digit + '0');
			min = min - (digit * exp);
			exp = exp / 10;
/*			d++;*/
		}
	}
	_putchar(fast + '0');
	return (d);
}

/**
 * vic_dec - decimal
 * @args: args
 * Return: nothing
 */

int vic_dec(va_list args)
{
	int a = va_arg(args, int);
	int min, fast = a % 10, digit, exp = 1;
	int d = 1;

	a = a / 10;
	min = a;

	if (fast < 0)
	{
		_putchar('-');
		min = -min;
		a = -a;
		fast = -fast;
		d++;
	}
	if (min > 0)
	{
		while (min / 10 != 0)
		{
			exp = exp * 10;
			min = min / 10;
		}
		min = a;
		while (exp == 0)
		{
			digit = min / exp;
			_putchar(digit + '0');
			min = min - (digit * exp);
			exp = exp / 10;
			d++;
		}
	}
	_putchar(fast + '0');
	return (d);
}
