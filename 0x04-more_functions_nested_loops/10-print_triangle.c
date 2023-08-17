#include "main.h"

/**
 * print_triangle - print triangle, which its line with len n.
 * @size: the len of a line in square
 */

void print_triangle(int size)
{
	int i, l;

	for (i = 0; i < size; i++)
	{
		for (l = 0; l < size; l++)
		{
			if (size - l <= i + 1)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

