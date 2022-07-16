#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a node with a certain value
 * @head: pointer to SLL
 * @idx: index
 * @n: value
 * Return: adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node;

	if (*head == NULL)
		return (NULL);

	while (i < idx)
	{
		if (*head == NULL)
			return (NULL);
		*head = (*head)->next;
		i++;
	}

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = (*head)->next;
	(*head)->next = node;
	return (node);
}
