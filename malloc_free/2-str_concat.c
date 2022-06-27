#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * str_concat - function
 * @s1: s1
 * @s2: s2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int i, n, m, x, z;
	char *a;

	if (s1 = NULL || s2 = NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (n = 0; s2[n] != '\0'; n++)
		;

	a = malloc(((i + n) * sizeof(char)) + 1);
	if (a == NULL)
		return (NULL);

	for (m = 0; m < i; m++)
	{
		a[m] = s1[m];
	}
	for (x = 0; x < n; x++, m++)
	{
		a[m] = s2[x];
	}

	return (a);
}
