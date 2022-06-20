#include "main.h"

/**
 * _memset - function
 * @s: x
 * @b: x
 * @n: number
 * Return: X
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
