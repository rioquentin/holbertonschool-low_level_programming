#include <stdio.h>

/**
 * main - function
 * @argc: argc
 * @argv: argv
 * Return: x
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int n = argc - 1;

	(void)argv;
	if (i == argc)
		printf("0\n");
	else
		printf("%d\n", n);
	return (0);
}
