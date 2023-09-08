#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - allocate memory and set to 0
 * @ptr: unsigned int
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void*
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	if (new_size == old_size && ptr != NULL)
		return (ptr);
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (newptr);
	for (i = 0; i < old_size && i < new_size; i++)
		newptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (newptr);
}
