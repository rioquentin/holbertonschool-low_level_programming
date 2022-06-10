#include "main.h"

/**
 * print_last_digit - check the code
 *@n: number
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int i;

	i = (n % 10);
	if (i < 0)
	{
		i = (-1 * i);
	}

	_putchar(i + '0');

	return (i);
}
