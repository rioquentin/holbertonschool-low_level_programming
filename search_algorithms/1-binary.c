#include "search_algos.h"

/**
 * binary_search - binary serach function
 * @array: array
 * @size : size of array
 * @value: node
 * Return: value or -1 if failed
 */

int binary_search(int *array, size_t size, int value)
{
	int res;

	if (array == NULL)
		return (-1);
	res = binarySearch(array, 0, size - 1, value);

	return (res);
}
/**
 * binarySearch - recursive for main func
 * @array: array
 * @low: 0
 * @high: size -1
 * @target: value
 * Return: res or -1 if failed
 */


int binarySearch(int *array, int low, int high, int target)
{
	int l = low;
	int h = high;

	int mid = (low + high) / 2;

	if (low > high)
	{
		return (-1);
	}

	printf("Searching in array: ");

	for (; l <= h; l++)
	{
		if (l == h)
			printf("%d", array[l]);
		else
			printf("%d, ", array[l]);
	}
	printf("\n");

	if (target == array[mid])
		return (mid);

	else if (target < array[mid])
	{
		return (binarySearch(array, low, mid - 1, target));
	}
	else
	{
		return (binarySearch(array, mid + 1, high, target));
	}
}
