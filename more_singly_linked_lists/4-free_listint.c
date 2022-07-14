#include "lists.h"

/**
 * free_listint - function that free a SLL
 * @head: pointer to a SLL
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *trash;

	while (head != NULL)
	{
		trash = head;
		head = head->next;
		free(trash->n);
		free(trash);
	}
}
