#include "main.h"

/**
 * cap_string - function
 * @n: n
 * Return: n
 */

char *cap_string(char *n)
{
	int i, x;
	int z = 32;
	int y[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - z;
		}

		z = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == y[x])
			{
				x = 12;
				z = 32;
			}
		}
	}
	return (n);
}
