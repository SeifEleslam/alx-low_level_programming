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
	unsigned int i;
	dlistint_t *curr;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0, curr = *h; curr; curr = (curr)->next, i++)
		if (i == idx)
			return (add_dnodeint(&curr, n));

	return (NULL);
}
