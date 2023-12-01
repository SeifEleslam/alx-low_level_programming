#include "hash_tables.h"

/**
 * hash_table_delete - searc
 * @ht: The size of the array
 */
void hash_table_delete(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
			tmp = curr,
			curr = curr->next,
			free_hash_table_node(tmp);
	}
	free(ht->array), free(ht);
}
