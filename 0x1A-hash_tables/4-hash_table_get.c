#include "hash_tables.h"

/**
 * hash_table_get - searc
 * @ht: The size of the array
 * @key: The size of the array
 * Return: vlaue of hashedstr
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx])
	{
		curr = ht->array[idx];
		while (curr && strcmp(curr->key, key) != 0)
			curr = curr->next;
		if (curr)
			return (curr->value);
	}
	return (NULL);
}
