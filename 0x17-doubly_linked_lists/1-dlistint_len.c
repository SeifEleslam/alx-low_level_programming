#include "lists.h"

/**
 * dlistint_len - print d linked list
 * @h: head of the list
 * Return: len of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	for (; h; h = h->next)
		len++;
	return (len);
}
