#include "main.h"

/**
 * _strcpy - function
 * @dest: destination
 * @src: source
 * Return: x
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int x;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	x = i + 1;
	dest[x] = '\0';
	return (dest);
}
