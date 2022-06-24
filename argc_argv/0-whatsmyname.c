#include <stdio.h>

/**
 * whatsmyname - function
 * @argc: argc
 * @arcg: argv
 * Return: x
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
