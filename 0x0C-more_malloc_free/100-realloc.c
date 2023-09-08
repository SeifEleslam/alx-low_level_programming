#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - allocate memory and set to 0
 *
 * @ptr: unsigned int
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void*
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  void *newptr;
  int i;

  if (new_size == 0 && ptr != NULL)
  {
    free(ptr);
    return;
  }
  if (new_size == old_size)
    return (ptr);
  newptr = malloc(new_size);
  if (newptr = NULL)
    return (NULL);
  for (i = 0; i < old_size && i < new_size && ptr != NULL; i++)
    newptr[i] = ptr[i];
  free (ptr);
  return newptr;
}
