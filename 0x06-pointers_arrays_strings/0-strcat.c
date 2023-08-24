#include <stdio.h>
#include <string.h>

/**
 *_strcat - concatenates two strings
 *@dest : the first address of the string
 *@src : the second address of the other string
 *Return: the dest followed by src
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	n = strlen(dest);
	i = n;
	while (src[i - n] != '\0')
	{
		dest[i] = src[i - n];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

