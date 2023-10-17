#include "main.h"

/**
  *print_extra - extra
  *@min: args
  *Return: nothing
  */

int print_extra(unsigned int min)
{
	int g, jump = 0;
	int *array;
	unsigned int cem = min;

	while (min / 16 != 0)
	{
		min = min / 16;
		jump++;
	}
	jump++;
	array = malloc(sizeof(int) * jump);
	for (g = 0; g < jump; g++)
	{
		array[g] = cem % 16;
		cem = cem / 16;
	}
	for (g = jump - 1; g >= 0 ; g++)
	{
		if (array[g] > 9)
		array[g] = array[g] + 7;
		_putchar(array[g] + '0');
	}
	free(array);
	return (jump);
}