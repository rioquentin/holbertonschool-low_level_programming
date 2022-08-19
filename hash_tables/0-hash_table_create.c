#include "hash_tables.h"

/**
 * hash_table_create - create an hash table
 * @size: izesize of the hash table
 * Return: adress of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = NULL;
	unsigned long int i;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	htable->size = size;
	for (i = 0; i < size; i++)
		htable->array[i] = NULL;
	return (htable);
}
