#include "main.h"

/**
 * more_numbers - print 10 times
 * Return: void.
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for (i = 0; n < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10);
				_putchar(i % 10);
			}
			else
			{
				_putchar(i);
			}
		}
		_putchar('\n');
	}
}
