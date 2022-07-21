#include "lists.h"

/**
 * add_nodeint - function to add a node
 * @head: pointer SLL
 * @n: value
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	node->prev = NULL;
	(*head)->prev = node;
	*head = node;

	return (node);
}
