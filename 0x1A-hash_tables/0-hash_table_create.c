#include "hash_tables.h"

/**
 * hash_table_create - Create Hash table
 * @size: The size of the array
 * Return: Ref to hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **arr;

	ht = malloc(sizeof(*ht));
	if (!ht)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (!arr)
		return (NULL);
	ht->size = size;
	ht->array = arr;
	return (ht);
}
