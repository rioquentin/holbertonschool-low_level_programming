#include "lists.h"

/**
 * get_dnodeint_at_index - func
 * @head: head
 * @index: index
 * Return: node index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

