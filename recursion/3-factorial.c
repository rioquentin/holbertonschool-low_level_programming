#include "main.h"

/**
 * factorial - function
 * @n: number
 * Return: x
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0);
		return (0);
	else
		return (n * factorial(n - 1));
}
