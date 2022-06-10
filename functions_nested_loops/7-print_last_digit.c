#include "main.h"

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
