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
	char *ptr;

	for (i = 0; s[i] != c; i++)
		;
	if (i == c)
	{
		ptr = &s[i];
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
