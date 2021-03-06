#include "lists.h"

/**
 * print_dlistint - function
 * @h: h
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb++;
	}
	return (nb);
}
