#include "main.h"

/**
 * _strspn - function
 * @s: s
 * @accept: accept
 * Return: x
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x = 0;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				n = n + 1;
			}
		}
		x = 0;
	}
	return (n);
}

