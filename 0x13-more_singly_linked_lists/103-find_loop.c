#include "lists.h"
/**
 * find_listint_loop - find a loop
 * @head: head
 * Return: node loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr, *point;

	if (!head)
		return (NULL);
	for (curr = head; curr->next != NULL; curr = curr->next)
	{
		if (curr == curr->next)
			return (curr);
		for (point = head; point != curr; point = point->next)
			if (point == curr->next)
				return (curr->next);
	}
	return (NULL);
}
