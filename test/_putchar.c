#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the char
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
