#include "hash_tables.h"

/**
 * hash_table_get - searc
 * @ht: The size of the array
 * @key: The size of the array
 * Return: vlaue of hashedstr
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			if (i == 0)
				printf("'%s': '%s'", curr->key, curr->value);
			else
				printf(", '%s': '%s'", curr->key, curr->value);
			while ((curr = curr->next))
				printf(", '%s': '%s'", curr->key, curr->value);
		}
	}

	printf("}\n");
}
