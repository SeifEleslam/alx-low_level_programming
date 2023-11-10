#include "lists.h"

/**
 * delete_dnodeint_at_index - add node to end of d linked list
 * @head: head of the list
 * @index: index to add in
 * Return: 1 | -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr;

	if (!*head)
		return (-1);
	(*head)->prev = NULL;
	if (index == 0)
	{
		curr = *head;
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	for (i = 0, curr = *head; curr->next; curr = (curr)->next, i++)
	{
		if (i == index)
		{
			curr->prev->next = curr->next;
			curr->next->prev = curr->prev;
			free(curr);
			return (1);
		}
	}
	if (index == i)
	{
		curr->prev->next = curr->next;
		free(curr);
		return (1);
	}
	return (-1);
}
