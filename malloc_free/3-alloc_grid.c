#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: n
 * @height: n
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i, n, x;
	int **a;

	if (width == 0 || height == 0)
		return (NULL);

	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int *));
		if (a[i] == NULL)
			free(a[i]);
			return (NULL);
	}

	for (n = 0; n < height; n++)
	{
		for (x = 0; x < width; x++)
		{
			a[n][x] = 0;
		}
	}
	return (a);
}
