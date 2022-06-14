#include "main.h"

/**
 * print_diagonal - function
 * @n: num
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int x = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			while (x < i)
			{
				_putchar(' ');
				x++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
			x = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
