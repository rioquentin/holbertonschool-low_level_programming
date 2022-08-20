#include "hash_tables.h"

/**
 * key_index
 * @key: key value
 * @size: size value
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}
