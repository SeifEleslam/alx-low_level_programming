#include <stdio.h>
#include <string.h>

/**
 *_strncat - concatenates two strings
 *@dest : the first address of the string
 *@src : the second address of the other string
 *@n : max number of allowed bytes
 *Return: the dest followed by src
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = strlen(dest);
	i = len;
	while (src[i - len] != '\0' && (i - len) < n)
	{
		dest[i] = src[i - len];
		i++;
	}
	if (i - len < n)
		dest[i] = '\0';
	return (dest);
}

