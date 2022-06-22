#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function
 * @a: pointer
 * Return: x
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[i][x]);
		}
		_putchar('\n');
	}
}
