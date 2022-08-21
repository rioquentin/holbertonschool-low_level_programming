#include "hash_tables.h"

/**
 * hash_table_get - func to get a value
 * @ht: hash_table
 * @key: wanted key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ki;
	hash_node_t *tmp;

	if (key == NULL)
		return (NULL);

	if (ht != NULL)
	{
		ki = key_index((const unsigned char *)key, ht->size);
		tmp = ht->array[ki];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
