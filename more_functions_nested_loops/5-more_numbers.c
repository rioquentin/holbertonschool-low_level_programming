#include "main.h"

/**
 * more_numbers - print 10 times
 * Return: void.
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n >= 10; n++)
	{
		for (i = 0; n != 15; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
