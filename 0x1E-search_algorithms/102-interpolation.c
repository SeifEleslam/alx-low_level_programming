#include "search_algos.h"

/**
 * interpolation_search - Jump to it
 * @array: the array we search in
 * @value:  the value we are searching for
 * @size: the size of array
 * Return: -1 or the idx
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high = size - 1;

	if (size <= 0 || array == NULL)
		return (-1);
	while (pos < size && high > low)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%i] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%i] = [%i]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return ((int)pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
