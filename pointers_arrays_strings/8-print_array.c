#include "main.h"
#include <stdio.h>

/**
 * print_array - function
 * @a: array
 * @n: number
 * Return: o
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
