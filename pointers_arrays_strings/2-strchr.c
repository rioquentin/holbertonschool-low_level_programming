#include "main.h"
#include <stddef.h>

/**
 * _strchr - function
 * @s: x
 * @c: x
 * Return: X
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
	return (NULL);
}
