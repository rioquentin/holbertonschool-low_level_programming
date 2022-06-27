#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - function
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, size, n;
	int *a;

	for (i = 0; str[i] != '\0')
		;
	size = i;

	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (n = 0; n[i] != '\0'; n++)
	{
		a[i] = str[i];
	}
	return (a);
}
