#include "main.h"

/**
 * print_HEX - prints an hexdecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_HEX(va_list val)
{
	int i;
	int *ar;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tee = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	ar = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		ar[i] = tee % 16;
		tee /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (ar[i] > 9)
			ar[i] = ar[i] + 7;
		_putchar(ar[i] + '0');
	}
	free(ar);
	return (counter);
}
