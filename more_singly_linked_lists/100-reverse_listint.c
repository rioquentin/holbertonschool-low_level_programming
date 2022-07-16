#include "lists.h"

/**
 * reverse_listint - print in reverse
 * @head: SLL
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	while (*head)
	{
		*head = (*head)->next;
		reverse_listint(&**head);
		printf("%d\n", h->n);
	}
	return (head);
}
