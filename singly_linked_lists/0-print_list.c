#include "lists.h"

/**
 * print_list - print linked list
 * @h: SLL
 * Return: i
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	list_t *trav = h;

	while (trav != NULL)
	{
		printf("%s\n", trav->str);
		i++;
		trav = trav->next;
	}
	return (i);
}
