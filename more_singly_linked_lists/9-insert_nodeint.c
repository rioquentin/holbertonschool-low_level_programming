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
	listint_t *tmp;
	listint_t *node;
	listint_t *ptr;

	tmp = *head;
	node = malloc(sizeof(listint_t));

	for (i = 0; i < idx; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	ptr = tmp;
	node->n = n;
	ptr = ptr->next;
	node->next = ptr;
	*head = node;
	return (node);
}
