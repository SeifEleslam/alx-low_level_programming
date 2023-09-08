#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory and set to 0
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int *tmp;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	for (i = 0; i < size * nmemb; i++)
		tmp[i] = 0;
	return (ptr);
}

