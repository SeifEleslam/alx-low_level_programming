#include "search_algos.h"

/**
 * print_arr_3 - printing array
 * @arr: pointer to arr
 * @size: size of arr
 *
 */
void print_arr_3(int *arr, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[i]);
}

/**
 * advanced_binary - Entry point
 * @array: the array we search in
 * @value:  the value we are searching for
 * @size: the size of array
 * Return: -1 or the idx
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid;
	int res;

	if (!array || size <= 0)
		return (-1);
	printf("Searching in array: "), print_arr_3(array, size);
	mid = size % 2 == 0 ? (size / 2) - 1 : (size / 2);
	if (array[mid] == value && mid == 0)
		return ((int)mid);
	else if (array[mid] >= value)
		return (advanced_binary(array, mid + 1, value));
	res = advanced_binary(array + mid + 1, size - mid - 1, value);
	return (res == -1 ? res : (int)mid + 1 + res);
}
