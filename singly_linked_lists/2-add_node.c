#include "lists.h"

/**
 * add_node - add a node
 * @head: head of the node
 * @str: string
 * Return: ??
 */

list_t *add_node(list_t **head, const char *str)
{
	char *sp = strdup(str);

	list_t *node = malloc(sizeof(list_t));

	node->str = sp;

	node->next = *head;
	*head = node;
}
