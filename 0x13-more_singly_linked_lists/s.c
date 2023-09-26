#include "lists.h"
/**
 * get_nodeint_at_index - check the code
 * @head: head
 * @index: int
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index && head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
