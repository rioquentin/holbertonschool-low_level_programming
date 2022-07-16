#include "lists.h"

/**
 * get_nodeint_at_index - function that return the n th node
 * @head: SLL
 * @index: n th node
 * Return: value of the n th node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (*head != index)
	{
		if (*head == NULL)
			return (NULL);
		head = (*head)->next;
	}
	return (head);
}

