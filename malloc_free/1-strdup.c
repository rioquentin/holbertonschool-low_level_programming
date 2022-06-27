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
	int i, size;
	char *a;

	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	for (i = 0; str[i] != '\0'; i++)
		;
	size = i;

	a = malloc((size * sizeof(char) + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
