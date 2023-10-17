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

	cynstr = itao(va_arg(args, unsigned int), 16);

	s = cynputs((cynstr != NULL) ? cynstr : "NULL");

	return (s);

	return (jump);
}
