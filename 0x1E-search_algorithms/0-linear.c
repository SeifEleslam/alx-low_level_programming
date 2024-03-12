#include "search_algos.h"
/**
 * linear_search - Entry point
 * @array: the array we search in
 * @value:  the value we are searching for
 * @size: the size of array
 * Return: -1 or the idx
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (size <= 0 || array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n",
			   i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
