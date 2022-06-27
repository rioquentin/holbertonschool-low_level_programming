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
	char array[];
	int i;
	char *a = &array;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
		return (1);
	}

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
