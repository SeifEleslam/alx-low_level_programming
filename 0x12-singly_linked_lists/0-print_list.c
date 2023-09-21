#include "lists.h"

/**
 * print_list - print linked list
 * @h: list
 * Return: list length
 */

size_t print_list(const list_t *h)
{
	size_t i;
	
	i = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return i;
}

