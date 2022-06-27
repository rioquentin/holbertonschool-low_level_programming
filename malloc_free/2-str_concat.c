#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - function
 * @s1: s1
 * @s2: s2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int i, n, x, z;
	int size;
	char *a;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (n = 0; s2[i] != '\0'; n++)
		;
	size = i + n;

	a = malloc((size * sizeof(char)) + 1);
	if (a == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		a[x] = s1[x];

	for (z = 0; z < n; z++)
		a[x] = s2[z];

	return (a);
}
