#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - main
 * @argc: arguments counter
 * @argv: array of character
 * Return: void
 */

int main(int argc, char *argv[])
{
	int result;
	char *op;

	op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*op == '%' || *op == '/') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	if (result == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result);

	return (0);
}
