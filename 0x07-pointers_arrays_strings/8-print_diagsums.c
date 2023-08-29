#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - reset the parsing value to 98
 * @a: second passing pointer
 * @size: number of repeated times
 */

void print_diagsums(int *a, int size)
{
	int i, i2, sum, sum2;

	sum = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (i2 = 0; i2 < size; i2++)
		{
			if (i == i2)
				sum += *(a + i * size + i2);
			if (i == size - i2 - 1)
				sum2 += *(a + i * size + i2);
		}
	}
	printf("%i, %i\n", sum, sum2);
}

