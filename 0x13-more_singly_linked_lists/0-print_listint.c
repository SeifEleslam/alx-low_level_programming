#include "lists.h"

/**
 * print_listint - print linked list
 * @h: list
 * Return: list length
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
