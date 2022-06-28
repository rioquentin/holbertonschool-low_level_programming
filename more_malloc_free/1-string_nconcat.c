#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * string_nconcat - function
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, i, m;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
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
