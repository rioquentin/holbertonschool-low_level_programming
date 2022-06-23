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
	return (n * (n -1));
}
