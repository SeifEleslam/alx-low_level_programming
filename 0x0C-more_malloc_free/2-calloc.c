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
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

