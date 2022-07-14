#include "lists.h"

/**
 * free_list - function to free
 * @head: SLL
 * Return: void
 */

void free_list(list_t *head)
{
	void *trash;

	while (head != NULL)
	{
		trash = head;
		head = head->next;
		free(trash);
	}
}
