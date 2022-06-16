#include "main.h"

/**
 * _strcat - function
 * @dest: destination
 * @src: source
 * Return: x
 */

char *_strcat(char *dest, char *src)
{
	int i, a, b, x;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
		;
	for (i = a, x = 0; dest[i] != a + b; i++, x++)
	{
		dest[i] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
