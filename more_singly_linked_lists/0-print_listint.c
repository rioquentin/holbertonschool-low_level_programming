#include "lists.h"

/**
 * print_listint - function to print integer inside a SLL
 * @h: pointer to an SLL
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
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
