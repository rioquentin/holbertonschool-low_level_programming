#include "lists.h"

/**
 * pop_listint - function that delete the head node and save its data
 * @head: SLL
 * Return: value of head
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	tmp = *head;
	tmp = tmp->next;
	data = (*head)->n;
	free(head);
	*head = tmp;
	return (data);
}
