#include "main.h"

/**
 * clear_bit - function
 * @n: value
 * @index: index
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(n) * 8)))
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
