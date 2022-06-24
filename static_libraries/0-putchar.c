#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *a = "_putchar";
	int i;

	for (i = 0; a[i] != '\0'; i++)
		{
		_putchar(a[i]);
		}
	_putchar('\n');
	return (0);
}
