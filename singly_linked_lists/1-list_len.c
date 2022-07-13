#include "lists.h"

/**
 * list_len - print linked list
 * @h: SLL
 * Return: i
 */

size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *trav = h;

	while (trav != NULL)
	{
		trav = trav->next;
		i++;
	}
	return (i);
}
