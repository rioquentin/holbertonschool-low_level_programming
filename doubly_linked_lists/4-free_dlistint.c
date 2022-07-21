void free_dlistint(dlistint_t *head);
{
	stint_t *trash;

	while (head != NULL)
	{
		trash = head;
		head = head->next;
		free(trash);
	}
}
