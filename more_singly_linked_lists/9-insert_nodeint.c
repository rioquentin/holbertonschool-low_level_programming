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
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *node;

	if (*head == NULL)
		return (NULL);

	tmp = *head;

	while (i < idx)
	{
		if (tmp != NULL)
			tmp = tmp->next;
		else
			return (NULL);
	}
	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
