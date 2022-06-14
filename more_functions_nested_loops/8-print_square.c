#include "main.h"

/**
 * print_square - function
 * @size: number
 * Return: void
 */

void print_square(int size)
{
	int i = 0;
	int x = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (x < size)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
			i++;
			x = 0;
		}

	}
	else
	{

	}
}
