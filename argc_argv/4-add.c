#include <stdio.h>
#include <stdlib.h>

/**
 * main -function
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
