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

	if (ht == NULL)
		return (0);

	vtmp = strdup(value);
	node = malloc(sizeof(hash_node_t));
	
	node->value = vtmp;
	node->key = strdup(key);
	node->next = ht->array[ki];
	ht->array[ki] = node;

	return (1);
	
}
