#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code
 * @n: number
 * Return: Always 0.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			nn--;
		}
	}
	printf("98\n");
}
