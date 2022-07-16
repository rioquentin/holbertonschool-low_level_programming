#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete the n th node
 * @head: SLL
 * @index: n th position
 * Return: 0 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
	}
	else
	{
		previous = current;
		current = current->next;
		while (index != 1)
		{
			if (current->next == NULL)
				return (-1);
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
	}
	return (1);
}

