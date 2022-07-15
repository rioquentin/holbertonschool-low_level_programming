#include "lists.h"

/**
 * free_listint2 - function that free a SLL
 * @head: pointer to a SLL
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *trash;
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;

	while (head != NULL)
	{
		trash = tmp;
		head = tmp->next;
		free(trash);
	}
}
