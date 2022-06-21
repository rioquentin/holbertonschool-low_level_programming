#include "main.h"

/**
 * _strstr - function
 * @haystack: haystack
 * @needle: needle
 * Return: 0;
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int x;
	int n;
	int m;

	for (n = 0; needle[n]; n++)
		;
	if (n > 0)
	{
		m = n - 1;

		for (i = 0; haystack[i] != '\0'; i++)
		{
			for (x = 0; needle[x] != '\0'; x++)
			{
				if (haystack[i] == needle[x])
				{
					if (haystack[i + m] == needle[x + m])
					{
						return (&haystack[i]);
					}	
				}
			}
		}
	}
	else if (n == 0)
	{
		return(haystack);
	}
	return (0);
}
