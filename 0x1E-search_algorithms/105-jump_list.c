#include "search_algos.h"

/**
 * jump_list - Jump to it
 * @list: the array we search in
 * @value:  the value we are searching for
 * @size: the size of array
 * Return: -1 or the idx
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int l, i, start_idx = 0, step = (int)sqrt((double)size);
	listint_t *start = list, *curr = start;

	if (size <= 0 || list == NULL)
		return (NULL);
	for (i = step;; i += step)
	{
		for (l = start_idx; l < i && curr->next; l++)
			curr = curr->next;
		printf("Value checked at index [%lu] = [%i]\n", curr->index, curr->n);
		if (!curr->next || curr->n >= value)
			break;
		start = curr, start_idx = l;
	}
	i = i > (int)size - 1 ? (int)size - 1 : i;
	printf("Value found between indexes [%i] and [%i]\n",
		   start_idx, i);
	for (l = start_idx; l <= i && l < (int)size; l++)
	{
		printf("Value checked at index [%i] = [%i]\n",
			   l, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}
