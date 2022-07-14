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
	list_t *tmp;

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
