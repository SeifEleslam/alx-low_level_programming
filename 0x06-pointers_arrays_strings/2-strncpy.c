#include <stdio.h>
#include <string.h>

/**
 *_strncpy - concatenates two strings
 *@dest : the first address of the string
 *@src : the second address of the other string
 *@n : max number of allowed bytes
 *Return: the dest followed by src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len;

	len = strlen(dest);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

