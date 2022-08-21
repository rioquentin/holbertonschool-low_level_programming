#include "hash_tables.h"

/**
 * hash_table_set - add element to hashtable
 * @ht: hash table
 * @key: key value
 * @value : value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char * vtmp = NULL;
	unsigned int ki = key_index((unsigned char *)key, ht->size);
	hash_node_t * node;
	hash_node_t * tmp;

	if (ht->array == NULL || value == NULL || ht == NULL)
		return (0);

	vtmp = strdup(value);

	tmp = ht->array[ki];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = vtmp;
			tmp->value = strdup(value);
			free(vtmp);
			return (1);
		}
		tmp = temp->next;	
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->value = vtmp;
	node->key = strdup(key);
	node->next = ht->array[ki];
	ht->array[ki] = node;

	return (1);

}
