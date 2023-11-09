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
	dlistint_t *new_node;

	// if (idx == 0)
	// {
	// 	new_node = add_dnodeint(h, n);
	// 	return new_node;
	// }
	for (i = 0, curr = *h; curr; curr = (curr)->next, i++)
	{
		if (i == idx)
		{
			new_node = add_dnodeint(&curr, n);
			break;
		}
	}
	if (!new_node && idx == i)
		new_node = add_dnodeint_end(h, n);

	return (new_node);
}
