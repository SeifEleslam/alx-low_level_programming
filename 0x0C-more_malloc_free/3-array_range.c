#include <stdio.h>
#include <stdlib.h>

/**
 *  array_range - create arrange array from min to max
 * @min: int
 * @max: int
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (max - min < 0)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i + min <= max; i++)
		arr[i] = min + i;
	return (arr);
}
