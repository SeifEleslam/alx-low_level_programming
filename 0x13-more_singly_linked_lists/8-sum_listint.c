#include "lists.h"

/**
 * sum_listint - des
 * @head: list
 * Return: size_t
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
