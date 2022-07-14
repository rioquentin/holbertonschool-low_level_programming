#include "lists.h"

/**
 * listint_len - function to print integer inside a SLL
 * @h: pointer to an SLL
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int nb = 0;

	while (h)
	{
		h = h->next;
		nb++;
	}
	return (nb);
}
