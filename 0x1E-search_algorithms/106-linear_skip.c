#include "search_algos.h"

/**
 * linear_skip - Jump to it
 * @list: the array we search in
 * @value:  the value we are searching for
 * Return: -1 or the idx
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start = list, *curr = start;

	if (list == NULL)
		return (NULL);
	for (curr = start->express;; curr = curr->express)
	{
		printf("Value checked at index [%lu] = [%i]\n", curr->index, curr->n);
		if (curr->n >= value || !curr->next)
			break;
		start = curr;
		if (!curr->express)
		{
			while (curr->next)
				curr = curr->next;
			printf("Value checked at index [%lu] = [%i]\n", curr->index, curr->n);
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   start->index, curr->index);
	for (; start; start = start->next)
	{
		printf("Value checked at index [%lu] = [%i]\n",
			   start->index, start->n);
		if (start->n == value)
			return (start);
	}
	return (NULL);
}
