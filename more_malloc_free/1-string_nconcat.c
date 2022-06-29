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
	unsigned int i = 0, x = 0, size = 0, a = 0, b = 0, m = 0;
	char *p = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;
	size = i + x + 1;

	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (a = 0; a < i; a++, m++)
		p[m] = s1[a];
	for (b = 0; b < x; b++, m++)
		p[m] = s2[b];

	p[m] = '\0';
	return (p);
}
