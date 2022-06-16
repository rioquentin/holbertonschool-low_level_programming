#include "main.h"

/**
 * _strncat - function
 * @dest: destination
 * @src: source
 * @n: number of byte
 * Return: x
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, b, x;

	for (i = 0; dest[i] != '\0'; i++)
		;
	x = i + n;

	for (b = 0; i != x; b++, i++)
	{
		dest[i] = src[b];
	}

	return (dest);
}
