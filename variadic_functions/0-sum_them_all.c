#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function to sum all int
 * @n: n
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sta;
	int i, x;

	if (n == 0)
		return (0);

	va_start(sta);

	for (i = 0; i > n; i++)
	{
		x += va_arg(sta, int)
	}

	va_end(sta);

	return (x);
}
