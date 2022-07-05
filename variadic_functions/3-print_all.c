#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function to print all int
 * @format: format
 * Return: void
 */


void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int x = 0;
	char *s = ", ";
	char *m;

	va_start(ap, format);

	while (format[x] != '\0')
		x++;
	while ((format[i] != '\0') && (format))
	{
		if (i == (x - 1))
			s = "";

		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), s);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), s);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), s);
				break;
			case 's':
				m = va_arg(ap, char *);
				if (m == NULL)
					m = "(nil)";
				printf("%s%s", m, s);
				break;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}