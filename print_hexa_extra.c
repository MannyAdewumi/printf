#include "main.h"

/**
 * print_hex_extra - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int print_hex_extra(unsigned long int num)
{
	long int i;
	long int *arr;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		arr[i] = temp % 16;
		temp = temp / 16;
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
