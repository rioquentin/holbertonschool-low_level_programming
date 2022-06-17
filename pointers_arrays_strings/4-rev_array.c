#include "main.h"

/**
 * reverse_array - function²
 * @a: a
 * @n: n
 * Return: x
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
