#include "search_algos.h"

/**
 * print_arr - printing array
 * @arr: pointer to arr
 * @size: size of arr
 *
 */
void print_arr(int *arr, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}

/**
 * binary_search - Entry point
 * @array: the array we search in
 * @value:  the value we are searching for
 * @size: the size of array
 * Return: -1 or the idx
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, ref = 0;

	while (array && size > 0)
	{
		printf("Searching in array: "), print_arr(array, size);
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
