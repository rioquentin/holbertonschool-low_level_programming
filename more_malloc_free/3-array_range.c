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
	int *p;

	if (min >= max)
		return (NULL);

	p = malloc((max - min) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0, b = min; b < max; i++, b++)
		p[i] = b;

	return (p);
}
