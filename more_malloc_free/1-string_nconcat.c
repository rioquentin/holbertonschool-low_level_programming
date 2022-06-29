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
	unsigned int i, x, size, a, b, m;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (x = 0; x < n; x++)
		;
	size = i + x;

	p = malloc(size * sizeof(int));
	
	m = 0;

	for (a = 0; a < i; a++, m++)
		p[m] = s1[a];
	for (b = 0; b < x; b++, m++)
		p[m] = s2[x];

	return (p);
}
