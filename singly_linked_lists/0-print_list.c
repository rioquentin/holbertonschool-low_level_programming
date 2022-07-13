#include "lists.h"

/**
 * print_list - print linked list
 * @h: SLL
 * Return: i
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *trav = h;

	while (trav != NULL)
	{
		if (trav->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			trav = trav->next;
		}
		printf("[%d] %s\n", trav->len, trav->str);
		i++;
		trav = trav->next;
	}
	return (i);
}
