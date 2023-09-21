#include "list.h"

/**
 * print_list - print linked list
 * @h: list
 * Return: list length
 */

size_t print_list(const list_t *h)
{
	char err[5] = "(nil)";
	int i;
	
	i = 0;
	while (h)
	{
		_putchar('[');
		print_num(h->str ? h->len : 0);
		_putchar(']');
		_putchar(' ');
		print_str(h->str ? h->str : &err, h->str ? h->len : 5);
		_putchar('\n');
		h = h->next;
		i++;
	}
	return (i);
}

