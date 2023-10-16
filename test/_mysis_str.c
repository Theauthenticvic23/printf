#include "main.h"
/**
 * _strlen - length of str
 * @str: pointer
 * Return: 1
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenk - length
 * @str: str
 * Return: 1
 */

int _strlenk(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
