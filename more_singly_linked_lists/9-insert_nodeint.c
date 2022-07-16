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
	unsigned int i = idx;
	listint_t *node;
	listint_t *ptr = *head;

	if (ptr == NULL)
		return (NULL);
	if (i == 0)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	while (i != 1)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
		i--;
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = ptr->next;
	ptr->next = node;
	return (node);
}
