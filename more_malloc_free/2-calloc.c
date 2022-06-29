#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: n
 * @size: size
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = calloc(nmemb, size);
	if (p == NULL)
		return (NULL);

	return (p);
}
