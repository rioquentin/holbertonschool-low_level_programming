#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	(void)argc;
	printf("%d\n", result);
	return (0);
}
