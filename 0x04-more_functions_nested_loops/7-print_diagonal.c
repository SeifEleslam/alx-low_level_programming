#include "main.h"

/**
 * print_diagonal - print diagonal line with len n.
 * @n: the len of diagonal line
 */

void print_diagonal(int n)
{
	int i, l;

	for (i = 0; i < n; i++)
	{
		for (l = 0; l < i; l++)
		{
			_putchar(' ');
		}
		_putchar('\');
		_putchar('\n');
	}
	if(n <= 0)
		_putchar('\n');
}

