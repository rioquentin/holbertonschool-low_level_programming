#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 48;
	char abc;

	while (x != 58)
	{
		putchar(x);
		x++;
	}

	for (abc = 'a'; abc <= 'f'; abc++)
	{
			putchar(abc);
	}
	putchar('\n');
	return (0);
}
