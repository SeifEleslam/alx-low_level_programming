#include "lists.h"

/**
 * insert_dnodeint_at_index - add node to end of d linked list
 * @h: head of the list
 * @idx: index to add in
 * @n: value to add
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	int i;
	dlistint_t *curr;
	dlistint_t *new_node;

	for (i = 0, curr = *h, new_node = NULL; curr; curr = (curr)->next, i++)
		if (i == idx)
		{
			new_node = add_dnodeint(&curr, n);
			break;
		}

	return new_node;
}
