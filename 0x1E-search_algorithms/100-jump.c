#include "search_algos.h"

/**
 * jump_search - Jump to it
 * @array: the array we search in
 * @value:  the value we are searching for
 * @size: the size of array
 * Return: -1 or the idx
 */
int jump_search(int *array, size_t size, int value)
{
	int l, i, start = 0, step = (int)sqrt((double)size);

	if (size <= 0 || array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i += step)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		start = i;
	}
	printf("Value found between indexes [%i] and [%i]\n",
		   start, i);
	for (l = start; l <= i && l < (int)size; l++)
	{
		printf("Value checked array[%i] = [%i]\n",
			   l, array[l]);
		if (array[l] == value)
			return (l);
	}
	return (-1);
}
