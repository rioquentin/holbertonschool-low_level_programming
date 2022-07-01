#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function
 * @d: struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
