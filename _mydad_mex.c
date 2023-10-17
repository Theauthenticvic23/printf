#include "main.h"

/**
  *dad_mex - hexidecimal
  *@val: args
  *Return: nothing
  */

int dad_mex(va_list val)
{
	int jump;
	char *cynstr;

	cynstr = itao(va_arg(val, unsigned int), 16);

	jump = cynputs((cynstr != NULL) ? cynstr : "NULL");

	return (jump);
}
