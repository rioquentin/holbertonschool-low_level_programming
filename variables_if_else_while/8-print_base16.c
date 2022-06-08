#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 48;
	char abc = 'a';

	while (x != 58)
	{
		putchar(x);
		x++;
	}

	while (abc <= 'f')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
