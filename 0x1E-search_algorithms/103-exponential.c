#include "search_algos.h"

/**
 * print_arr_2 - printing array
 * @arr: pointer to arr
 * @size: size of arr
 *
 */
void print_arr_2(int *arr, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}

/**
 * binary_search_ref - Entry point
 * @array: the array we search in
 * @value:  the value we are searching for
 * @size: the size of array
 * @ref: starting point
 * Return: -1 or the idx
 */
int binary_search_ref(int *array, size_t size, int value, size_t ref)
{
	size_t mid;

	while (array && size > 0)
	{
		printf("Searching in array: "), print_arr_2(array, size);
		mid = size % 2 == 0 ? (size / 2) - 1 : (size / 2);

		if (array[mid] == value)
			return ((int)mid + (int)ref);
		else if (array[mid] > value)
			size = mid;
		else
			array = array + mid + 1, ref += mid + 1,
			size = size - mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Jump to it
 * @array: the array we search in
 * @value:  the value we are searching for
 * @size: the size of array
 * Return: -1 or the idx
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = 0;

	if (size <= 0 || array == NULL)
		return (-1);
	for (i = 0, end = 1; end < size; i++, end = (size_t)1 << i)
	{
		if (array[end] >= value)
			break;
		printf("Value checked array[%lu] = [%i]\n", end, array[end]);
		start = end;
	}
	end = end > size - 1 ? size - 1 : end;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	return (binary_search_ref(array + start, (end - start + 1),
							  value, start));
}
