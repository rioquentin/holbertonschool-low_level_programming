#include "main.h"

/**
 * _strncat - function
 * @dest: destination
 * @src: source
 * @n: number of byte
 * Return: x
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, b, x;

	/* Compteur pour connaitre le nombre de character contenu dans ce que pointe *dest */

	for (i = 0; dest[i] != '\0'; i++)
		;
	x = i + n;

	/* Compteur pour faire augmenter la valeur dans l'array "dest" et appends le nombre de character (n) correspondant provenant de l'array src */

	for (b = 0; i != x; b++, i++)
	{
		dest[i] = src[b];
	}

	return (dest);
}
