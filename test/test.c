#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	char *buffer;
	size_t bufsize = 32;
	size_t characters;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	printf("Write here : ");
	characters = getline(&buffer, &bufsize, stdin);
	printf("%zu Characters read\n", characters);
	printf("You typed this: '%s'", buffer);
	return (0);
}
