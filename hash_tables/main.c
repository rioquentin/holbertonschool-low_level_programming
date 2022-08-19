#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(2048);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
