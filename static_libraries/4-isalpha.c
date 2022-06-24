#include "main.h"

/**
 * _isalpha - check if lower case
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	else if (c >= 'A' && c <= 'Z')

		return (1);

	else

		return (0);
}
