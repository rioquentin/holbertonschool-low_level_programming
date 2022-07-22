#include "lists.h"

/**
 * insert_dnodeint_at_index - func
 * @h: sll
 * @idx: index
 * @n: value
 * Return: node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node;
	dlistint_t *start;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	start = *h;
	for (i = 0; i < (idx - 1); i++)
		*h = (*h)->next;

	if ((*h)->next)
	{
		node->next = (*h)->next;
		node->next->prev = node;
		node->prev = (*head);
	}
	node->prev = (*h);
	(*h)->next = node;

	*h = start;

	return (node);
}
