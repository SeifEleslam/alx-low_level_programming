#include "lists.h"

/**
 * sum_listint - des
 * @head: list
 * Return: size_t
 */

int sum_listint(listint_t *head)
{
	size_t i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
