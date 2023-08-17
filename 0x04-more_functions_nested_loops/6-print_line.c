#include "main.h"

/**
 * print_line - print line, that its length based on n.
 * @n : in that determines the length of line.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

