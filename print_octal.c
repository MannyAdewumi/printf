#include "main.h"

/**
 * print_octal - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int print_octal(va_list val)
{
	int i;
	int *arr;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tee = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		arr[i] = tee % 8;
		tee /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (counter);
}
