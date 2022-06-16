#include "main.h"

/**
 * print_array - function
 * @a: array
 * @n: number
 * Return: o
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n; i++)
	{
		_putchar(a[i]);
	}
}
