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

	a = (int **) malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		a[i] = (int *) malloc(height * sizeof(int *));

	for (n = 0; n < width; n++)
	{
		for (x = 0; x < heigth; x++)
		{
			a[n][x] = 0;
		}
	}
	return (a)
}
