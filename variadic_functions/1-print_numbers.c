#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print all int
 * @n: n
 * @separator: s
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int x = 0;



	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, int);

		if (i == (n - 1))
			printf("%d\n", x);
		else if (separator == NULL)
			printf("%d", x);
		else
			printf("%d%s", x, separator);
	}

	va_end(ap);
}
