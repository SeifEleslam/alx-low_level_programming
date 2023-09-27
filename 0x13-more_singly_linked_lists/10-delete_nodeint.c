#include "lists.h"
/**
 * delete_nodeint_at_index - check the code
 * @head: head
 * @index: int
 * Return: 1 | -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curr, *node;

	if (!head)
		return (-1);
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free (node);
		return (1);
	}
	curr = *head;
	for (i = 0; i < index && curr != NULL; i++)
	{
		if (i == index - 1)
		{
			node = curr->next;
			curr->next = node->next;
			return (1);
		}
		curr = curr->next;
	}
	return (-1);
}
