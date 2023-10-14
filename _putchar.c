#include <stdio.h>

/**
 * _custom_putchar - custom character output function for stdout.
 * @ch: The character to be written.
 *
 * Return: On success, the character written is returned.
 * On error, EOF is returned.
 */
int _custom_putchar(char ch)
{
    return putchar(ch);
}
