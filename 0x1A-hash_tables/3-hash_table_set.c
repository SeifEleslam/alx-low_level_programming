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
 * get_next_node - free node in hash table
 * @ht: the node to free
 * @idx: the node to free
 * Return: next node
 */
hash_node_t *get_next_node(hash_table_t *ht, unsigned long int idx)
{
	unsigned long int i;

	for (i = idx + 1; i < ht->size && !ht->array[i];)
		i++;
	if (i < ht->size)
		return (ht->array[i]);
	return (NULL);
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
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free_hash_table_node(ht->array[idx]);
			ht->array[idx] = node;
			node->next = get_next_node(ht, idx);
		}
		else
		{
			for (i = 0; ht->array[i];)
				i++;
			ht->array[i] = node;
			node->next = get_next_node(ht, i);
		}
	}
	else
	{
		ht->array[idx] = node;
		node->next = get_next_node(ht, idx);
	}
	return (1);
}
