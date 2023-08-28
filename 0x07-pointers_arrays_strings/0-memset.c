#include "main.h"

/**
 * _memset - reset the parsing value to 98
 * @s: first passing pointer
 * @b: second passing pointer
 * @n: number of repeated times
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

