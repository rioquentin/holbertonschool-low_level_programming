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

	tmp = *head;
	if (head == NULL)
	{
		head = "(nil)";
		return;
	}


	while (tmp != NULL)
	{
		trash = tmp;
		tmp = tmp->next;
		free(trash);
	}
}
