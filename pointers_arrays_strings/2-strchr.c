#include "main.h"

/**
 * _strchr - function
 * @s: x
 * @c: x
 * Return: X
 */

char *_strchr(char *s, char c)
{
	int i;
	int *ptr;

	for (i = 0; s[i] != c; i++)
		;
	ptr = &s[i];
	return (ptr);
}
