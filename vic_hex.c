#include "main.h"

/**
  *vic_hex - hexidecimal
  *@min: args
  *Return: nothing
  */

int vic_hex(unsigned long int min)
{
	long int g, jump = 0;
	long int *array;
	unsigned long int cem = min;

	while (min / 16 != 0)
	{
		min = min / 16;
		jump++;
	}
	jump++;
	array = malloc(sizeof(long int) * jump);
	for (g = 0; g < jump; g++)
	{
		array[g] = cem % 16;
		cem = cem / 16;
	}
	for (g = jump - 1; g >= 0 ; g++)
	{
		if (array[g] > 9)
		array[g] = array[g] + 39;
		_putchar(array[g] + '0');
	}
	free(array);
	return (jump);
}
