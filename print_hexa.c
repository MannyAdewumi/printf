#include "main.h"

/**
 * print_hex - prints an hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int print_hex(va_list val)
{
	int i;
	int *arr;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tee = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		arr[i] = tee % 16;
		tee /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (counter);
}

