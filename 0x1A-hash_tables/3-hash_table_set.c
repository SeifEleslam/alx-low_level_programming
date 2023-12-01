#include "hash_tables.h"

/**
 * free_hash_table_node - free node in hash table
 * @node: the node to free
 */
void free_hash_table_node(hash_node_t *node)
{
	if (node)
	{
		free(node->key);
		free(node->value);
		free(node);
	}
}

/**
 * hash_table_set - searc
 * @ht: The size of the array
 * @key: The size of the array
 * @value: The size of the array
 * Return: index of hashedstr
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i;
	hash_node_t *node;

	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (!node->key)
		return (0);
	node->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (!node->value)
		return (0);
	strcpy(node->key, key);
	strcpy(node->value, value);
	idx = key_index(key, ht->size);
	if (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free_hash_table_node(ht->array[idx]);
			ht->array[idx] = node;
			node->next = ht->array[idx + 1];
		}
		else
		{
			for (i = 0; ht->array[i];)
				i++;
			ht->array[i] = node;
			node->next = ht->array[i + 1];
		}
	}
	else
	{
		ht->array[idx] = node;
		node->next = ht->array[idx + 1];
	}
	return (1);
}
