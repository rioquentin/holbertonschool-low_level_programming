#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - function
 * @name: name
 * @age: age
 * @owner: owner
 * Return: x
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;
	int i, n, x;

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	i = strlen(name) + 1;
	n = strlen(owner) + 1;

	dogg->name = malloc(sizeof(char) * i);

	if ((*dogg).name == NULL)
	{
		free(dogg);
		return (NULL);
	}

	for (x = 0; x < i; x++)
	{
		dogg.name[x] = name[x];
	}

	dogg->age = age;
	dogg->owner = malloc(sizeof(char) * n);

	if ((*dogg).owner == NULL)
	{
		free((dogg->name);
		free(dogg);
		return (NULL);
	}
	for (x = 0; x < n; x++)
	{
		dogg->owner[x] = owner[x];
	}
	return (dogg);
}
