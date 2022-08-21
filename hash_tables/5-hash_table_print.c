#include "hash_tables.h"

/**
 * hash_table_print - print hashtable
 * @ht: hashtable
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("'%s' : '%s'", tmp->key, tmp->value);
			if (ht->array[i + 1] == NULL)
				break;
			printf(", ");
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
