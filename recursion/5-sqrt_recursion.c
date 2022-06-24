#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function
 * _sqrt - function
 * @n: n
 * @i: i
 * Return: n
 */

int _sqrt(int n, int i)
{
	if (i == n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, (i + 1)));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 1));
}
