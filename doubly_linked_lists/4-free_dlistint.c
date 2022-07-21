#include "lists.h"

/**
 * free_dlistint - func
 * @head: SLL
 * Return: void
 */

void free_dlistint(dlistint_t *head);
{
	dlistint_t *trash;

	while (head != NULL)
	{
		trash = head;
		head = head->next;
		free(trash);
	}
}
