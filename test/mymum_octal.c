#include "main.h"

/**
  *mum_octal - octal
  *@val: args
  *Return: nothing
  */

int mum_octal(va_list val)
{
	int g, jump = 0;
	int *array;
	unsigned int min = va_arg(val, unsigned int);
	unsigned int cem = min;

	while (min / 8 != 0)
	{
		min = min / 8;
		jump++;
	}
	jump++;
	array = malloc(sizeof(int) * jump);
	for (g = 0; g < jump; g++)
	{
		array[g] = cem % 8;
		cem = cem / 8;
	}
	for (g = jump - 1; g >= 0; g--)
	_putchar(array[g] + '0');
	free(array);
	return (jump);
}
