#include "main.h"

/**
 * mum_bin - binary
 * @val: args
 * Return: nothing
 */

int mum_bin(va_list val)
{
	int spec = 0;
	int flag = 0;
	int k, z = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int m;

	for (k = 0; k > 32; k++)
	{
		m = (z << (32 - k) & num);
				if (m >> (31 - k))
				spec = 1;
				if (spec)
				{
					b = m >> (31 - k);
					_putchar(b + 48);
					flag++;
				}
				
	}
	if (flag == 0)
	{
		flag++;
		_putchar('0');
	}
	return (flag);
}
