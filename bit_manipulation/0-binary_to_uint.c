#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, x = 0;
	unsigned int value;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	while (b[x] == '0' || b[x] == '1')
	{
		value <<= 1;
		value += b[x] - '0';
	}
	return (val);
}
