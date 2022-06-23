#include "main.h"

/**
 * _sqrt_recursion - function
 * _sqrt - function
 * @n: n
 * @i: i
 * Return: n
 */

int _sqrt(int n, int i)
{
	if (i < 0)
		return;
	if (i * i == n)
		return (i);
	else
		return (_sqrt(n, (i - 1)));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n % 2 == 0)
		return (_sqrt(n, (n / 2)));
	else
		return (_sqrt(n, (n + 1) / 2));
}
