#include "hash_tables.h"

/**
 * shash_table_create - Create Hash table
 * @size: The size of the array
 * Return: Ref to hashtable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	shash_node_t **arr;

	ht = malloc(sizeof(*ht));
	if (!ht)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (!arr)
		return (NULL);
	ht->size = size;
	ht->array = arr;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_set - searc
 * @ht: The size of the array
 * @key: The size of the array
 * @value: The size of the array
 * Return: index of hashedstr
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *node, *curr;
	char *val;

	if (strcmp(key, "") == 0 || !key || !ht)
		return (0);
	node = create_snode((char *)key, (char *)value);
	idx = key_index((const unsigned char *)key, ht->size);
	for (curr = ht->array[idx]; curr && strcmp(curr->key, key) != 0;)
		curr = curr->next;
	if (ht->array[idx])
		if (curr)
		{
			val = strdup((char *)value), free(curr->value),
			curr->value = val, free_shash_table_node(node);
			return (1);
		}
		else
			node->next = ht->array[idx], ht->array[idx] = node;
	else
		ht->array[idx] = node;
	for (curr = ht->shead; curr; curr = curr->snext)
		if (get_smaller_key(curr, node) == node)
		{
			if (curr->sprev)
				node->sprev = curr->sprev, curr->sprev->snext = node;
			else
				ht->shead = node;
			node->snext = curr, curr->sprev = node;
			break;
		}
		else if (!curr->snext)
		{
			curr->snext = node, node->sprev = curr, ht->stail = node;
			break;
		}
	if (!ht->shead && !ht->stail)
		ht->shead = node, ht->stail = node;
	return (1);
}

/**
 * shash_table_get - searc
 * @ht: The size of the array
 * @key: The size of the array
 * Return: vlaue of hashedstr
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *curr;

	if (strcmp(key, "") == 0 || !key || !ht)
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

/**
 * shash_table_delete - searc
 * @ht: The size of the array
 */
void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;
	free_list(ht->shead);
	free(ht->array), free(ht);
}

/**
 * shash_table_print - searc
 * @ht: The size of the array
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (!ht)
		return;

	curr = ht->shead;
	printf("{");

	while (curr)
	{
		if (!curr->sprev)
			printf("'%s': '%s'", curr->key, curr->value);
		else
			printf(", '%s': '%s'", curr->key, curr->value);
		curr = curr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - searc
 * @ht: The size of the array
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (!ht)
		return;

	curr = ht->stail;
	printf("{");

	while (curr)
	{
		if (!curr->snext)
			printf("'%s': '%s'", curr->key, curr->value);
		else
			printf(", '%s': '%s'", curr->key, curr->value);
		curr = curr->sprev;
	}
	printf("}\n");
}

/**
 * get_smaller_key- desc
 * @node1: node1
 * @node2: node2
 * Return: smaller key
 */
shash_node_t *get_smaller_key(shash_node_t *node1, shash_node_t *node2)
{
	unsigned int i;

	for (i = 0; node1->key[i] != '\0' || node2->key[i] != '\0'; i++)
	{
		if (node1->key[i] > node2->key[i])
			return (node2);
		else if (node2->key[i] > node1->key[i])
			return (node1);
	}
	return (NULL);
}

/**
 * free_list - searc
 * @head: The size of the array
 */

void free_list(shash_node_t *head)
{
	if (head)
		free_list(head->snext),
			free_shash_table_node(head);
}

/**
 * create_snode - desc
 * @key: key
 * @value: val
 * Return: new created node
 */
shash_node_t *create_snode(char *key, char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(*node)), node->key = strdup((char *)key);
	node->value = strdup((char *)value);
	node->next = NULL, node->sprev = NULL, node->snext = NULL;
	return (node);
}

/**
 * free_shash_table_node - free node in hash table
 * @node: the node to free
 */
void free_shash_table_node(shash_node_t *node)
{
	if (node)
	{
		free(node->key);
		free(node->value);
		free(node);
	}
}
