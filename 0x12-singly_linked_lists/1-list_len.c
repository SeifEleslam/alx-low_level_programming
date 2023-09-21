#include "lists.h"

/**
 * list_len - des
 * @h: list
 * Return: size_t
 */

size_t list_len(const list_t *h)
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

