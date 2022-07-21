#include "lists.h"

/**
 * sum_dlistint - sum them all
 * @head: DLL
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
		return (0);

	for (i = 0; head->next != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
