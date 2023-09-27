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
 * @loop_node: node
 * @loop: int
 * Return: int
 */
size_t free_listint_rec(listint_t *head, listint_t *loop_node, size_t loop)
{
	size_t len;

	if (head == loop_node)
		loop++;
	if (loop > 1 || head == NULL)
		return (0);
	len = free_listint_rec(head->next, loop_node, loop);
	free(head);
	return (1 + len);
}

/**
 * print_listint_safe - check the code
 * @head: head
 * Return: int
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len, loop;
	listint_t *loop_node;

	loop = 0;
	loop_node = find_listint_loop1(*h);
	len = free_listint_rec(*h, loop_node, loop);
	*h = NULL;
	return (len);
}
