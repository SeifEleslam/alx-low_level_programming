#include "hash_tables.h"

/**
 * hash_table_get - searc
 * @ht: The size of the array
 * @key: The size of the array
 * Return: vlaue of hashedstr
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, isFirst;
	hash_node_t *curr;

	if (!ht)
		return;
	isFirst = 0;
	printf("{");

	for (i = 0; ht && i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			if (isFirst == 0)
				printf("'%s': '%s'", curr->key, curr->value), isFirst = 1;
			else
				printf(", '%s': '%s'", curr->key, curr->value);
			while ((curr = curr->next))
				printf(", '%s': '%s'", curr->key, curr->value);
		}
	}

	printf("}\n");
}
