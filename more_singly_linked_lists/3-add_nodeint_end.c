#include "lists.h"

/**
 * add_nodeint_end - function that add a new node at the beginning of the SLL
 * @head: pointer to the SLL
 * @n: integer  to insert
 * Return: adresse of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	
	tmp->next = node;

	return (node);
}
