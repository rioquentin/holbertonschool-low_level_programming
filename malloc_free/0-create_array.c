#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - function
 * @size: size of
 * @c: character
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
