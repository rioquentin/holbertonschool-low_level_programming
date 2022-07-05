#include "calc.h"
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
	int num1, num2;
	char op;
	int result;

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(op)(num1, num2);

	printf("%d\n", result);

	return (0);
}
