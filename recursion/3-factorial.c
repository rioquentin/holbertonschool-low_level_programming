#include "main.h"

/**
 * factorial - function
 * @n: number
 * Return: x
 */

int factorial(int n)
{
	if (n >= 0)
		return (n * factorial(n -1));
	else
		return (-1);
}
