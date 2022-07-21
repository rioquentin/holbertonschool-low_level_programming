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
	unsigned int i = 0;
	dlistint_t *node;
	dlistint_t *tmp;

	if (*h == NULL)
		return (0);

	node = malloc(sizeof(dlistint_t));
	tmp = malloc(sizeof(dlistint_t));
	tmp = *h;

	while (i < idx)
	{
		i++;
		tmp = *h;
		(*h) = (*h)->next;
		(*h)->prev = tmp;
	}
	node->n = n;
	tmp->next = node;
	node->next = *h;
	node->prev = tmp;
	*h = node;
	return (node);
}
