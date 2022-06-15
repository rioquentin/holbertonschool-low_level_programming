#include "main.h"
/**
 * rev_string - function
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	i = i - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
