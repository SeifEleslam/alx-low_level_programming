#include "lists.h"

/**
 * sum_dlistint - add node to end of d linked list
 * @head: head of the list
 * Return: new node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
