#include "lists.h"

/**
 * print_dlistint - print d linked list
 * @h: head of the list
 * Return: len of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head;
	size_t len;

	len = 0;
	for (head = (dlistint_t *)h; head; head = head->next)
		printf("%d\n", head->n), len++;
	return (len);
}
