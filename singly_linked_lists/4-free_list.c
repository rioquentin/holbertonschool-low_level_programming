#include "lists.h"

/**
 * free_list - function to free
 * @head: SLL
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *trash

	while (head)
	{
		trash = head;
		head = head->next;
		free(trash);
	}
}
