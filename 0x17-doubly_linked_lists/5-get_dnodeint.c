#include "lists.h"

/**
 * get_dnodeint_at_index - add node to end of d linked list
 * @head: head of the list
 * @index: int
 * Return: new node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; head = head->next, i++)
		if (i == index)
			return (head);

	return (NULL);
}
