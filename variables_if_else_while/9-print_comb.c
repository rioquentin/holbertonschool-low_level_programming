#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 48;

	while (x != 58)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(',');
			putchar(' ');
		}

		x++;

	}
	putchar('\n');
	return (0);
}
