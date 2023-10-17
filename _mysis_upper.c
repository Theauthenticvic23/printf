#include "main.h"

/**
 * stou - Change the string to uppercase
 * @cyn: String
 * Return: String uppercase
 **/
char *stou(char *cyn)
{
	int j;

	for (j = 0; cyn[j] != '\0'; j++)
	{
		if (_islower(cyn[j]))
		{
			cyn[j] = cyn[j] - 32;
		}
	}

	return (cyn);
}

/**
  *print_Hex - upper
  *@val: args
  *Return: nothing
  */

int print_Hex(va_list val)
{
	char *cynstr;
	int jump;

	cynstr = itao(va_arg(val, unsigned int), 16);
	cynstr = stou(cynstr);

	jump = cynputs((cynstr != NULL) ? cynstr : "NULL");

	return (jump);
}
