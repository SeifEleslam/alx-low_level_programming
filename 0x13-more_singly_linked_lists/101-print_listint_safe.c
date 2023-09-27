#include "lists.h"
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
	loopPoint = find_listint_loop((listint_t *)head);
	for (curr = (listint_t *)head; curr != NULL; curr = curr->next)
	{
		if (curr == loopPoint)
			loop++;
		if (loop > 1)
		{
			printf("-> [%p] %d", (void *)curr, curr->n);
			break;
		}
		printf("[%p] %d\n", (void *)curr, curr->n);
		i++;
	}
	return (i);
}
