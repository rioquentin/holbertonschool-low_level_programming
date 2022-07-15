#include "lists.h"

/**
 * free_listint2 - function that free a SLL
 * @head: pointer to a SLL
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *trash;
	if (head == NULL)
		return;

	while (head != NULL)
	{
		trash = *head;
		head = (*head)->next;
		free(trash);
	}
}
