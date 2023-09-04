#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- Create an arr
 * @size: unsigned int
 * @c: char
 * Return: char*
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr != NULL)
		while (size--)
			arr[size] = c;

	return (arr);
}

