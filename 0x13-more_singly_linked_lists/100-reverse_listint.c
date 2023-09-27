#include "lists.h"
/**
 * reverse_listint - check the code
 * @head: head
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *parent, *next;

	if (!head || !(*head))
		return (NULL);
	parent = *head;
	curr = parent->next;
	parent->next = NULL;
	while (curr)
	{
		next = curr->next;
		curr->next = parent;
		parent = curr;
		curr = next;
	}
	*head = parent;
	return (parent);
}
