#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_bin(va_list val)
{
	int frag = 0;
	int cunt = 0;
	int i, j = 1, k;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((j << (31 - i)) & num);
		if (p >> (31 - i))
			frag = 1;
		if (frag)
		{
			k = p >> (31 - i);
			_putchar(k + 48);
			cunt++;
		}
	}
	if (cunt == 0)
	{
		cunt++;
		_putchar('0');
	}
	return (cunt);
}

