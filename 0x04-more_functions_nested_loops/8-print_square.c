#include "main.h"

/**
 * print_square - print square, which its line with len n.
 * @size: the len of a line in square
 */

void print_square(int size)
{
	int i, l;

	for (i = 0; i < size; i++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

