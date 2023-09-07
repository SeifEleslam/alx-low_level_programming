#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 *
 * @b: unsigned int
 * Return: void*
 */
void *malloc_checked(unsigned int b)
{
	void *output;

	output = malloc(b);
	if (output = NULL)
		exit(98);
	return (output);
}

