#include "lists.h"

/**
 * free_listint2 - function that free a SLL
 * @head: pointer to a SLL
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;

	while (*head != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
