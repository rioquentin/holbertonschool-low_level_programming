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
	{
		node = add_dnodeint(h, n);
		return (node);
	}
	node = malloc(sizeof(dlistint_t));
	tmp = *h;
	node->n = n;
	if (idx == 0)
		add_dnodeint(h, n);
	else
	{
		while (i < idx - 1)
		{
			if ((*h)->next == NULL)
				return (NULL);
			i++;
			*h = (*h)->next;
		}
		if ((*h)->next)
		{
			tmp = *h;
			*h = (*h)->next;
			node->next = *h;
			node->prev = tmp;
			tmp->next = node;
			(*h)->prev = node;
		}
	}
	while ((*h)->prev != NULL)
		*h = (*h)->prev;
	return (node);
}
