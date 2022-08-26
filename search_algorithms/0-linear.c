#include "search_algos.h"

/**
 * linear_search - algo to search linearly
 * @array: array
 * @size: size of array
 * @value: value that the alg is searching
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
