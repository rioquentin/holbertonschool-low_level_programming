#include "lists.h"

/**
 * add_node_end - add a node
 * @head: head of the node
 * @str: string
 * Return: ??
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	if (head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(node->str);
	node->next = NULL;

	while ((*head)->next != NULL)
		head = (*head)->next;

	(*head)->next = node;

	return (node);
}
