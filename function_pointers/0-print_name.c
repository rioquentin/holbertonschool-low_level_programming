#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function
 * @name: name
 * @f: pointers to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
