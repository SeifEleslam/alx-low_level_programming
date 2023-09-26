#include "lists.h"

/**
 * listint_len - des
 * @h: list
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
