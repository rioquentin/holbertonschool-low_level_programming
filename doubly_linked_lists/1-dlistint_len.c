#include "lists.h"

/**
 * dlistint_len - function
 * @h: SLL
 * Return: nb of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nb = 0;

	while (h)
	{
		h = h->next;
		nb++;
	}
	return (nb);
}
