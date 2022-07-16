#include "lists.h"

/**
 * insert_nodeint - function that insert a node with a certain value
 * @head: pointer to SLL
 * @idx: index
 * @n: value
 * Return: adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t tmp;
	listint_t node;

	node->n = n;

	for (i = 0; i < index; i++)
	{
		if (*head == NULL)
			return (NULL);
		head = (*head)->next;
	}

	tmp = *head;
	tmp = tmp->next;
	node->next = tmp;
	head = node;
	return (node);
}
