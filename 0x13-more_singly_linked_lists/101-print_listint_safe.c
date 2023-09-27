#include "lists.h"

/**
 * find_listint_loop1 - find a loop
 * @head: head
 * Return: node loop
 */
listint_t *find_listint_loop1(listint_t *head)
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

/**
 * print_listint_safe - check the code
 * @head: head
 * Return: int
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *curr, *loopPoint;
	size_t i, loop;

	i = 0, loop = 0;
	if (!head)
		return (i);
	loopPoint = find_listint_loop1((listint_t *)head);
	for (curr = (listint_t *)head; curr != NULL; curr = curr->next)
	{
		if (curr == loopPoint)
			loop++;
		if (loop > 1)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
		printf("[%p] %d\n", (void *)curr, curr->n);
		i++;
	}
	return (i);
}
