#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function
 * @min: min
 * @max: max
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i, b;
	char a[];

	if (min > max)
		return (NULL);

	for (i = 0, b = min; b < max; i++, b++)
		a[i] = b;

	return (a);
}
