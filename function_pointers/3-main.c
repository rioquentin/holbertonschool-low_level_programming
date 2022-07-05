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
		exit(100);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result);

	return (0);
}
