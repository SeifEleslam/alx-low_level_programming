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
	unsigned long int idx;
	hash_node_t *node, *curr;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);

	node = malloc(sizeof(*node));
	node->key = strdup((char *)key);
	node->value = strdup((char *)value);
	node->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		curr = ht->array[idx];
		while (curr && strcmp(curr->key, key) != 0)
			curr = curr->next;
		if (curr)
			node->next = curr->next, free_hash_table_node(curr);
		else
			node->next = ht->array[idx], ht->array[idx] = node;
	}
	else
		ht->array[idx] = node;
	return (1);
}