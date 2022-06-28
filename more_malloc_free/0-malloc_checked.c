#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	(void)p;

	return (p);
}
