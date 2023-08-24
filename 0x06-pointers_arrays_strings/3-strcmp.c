#include <stdio.h>
#include <string.h>

/**
 *_strcmp - concatenates two strings
 *@s1 : the first address of the string
 *@s2 : the second address of the other string
 *Return: the dest followed by src
 */

int _strcmp(char *s1, char *s2)
{
	int i, sum;

	sum = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		sum += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		sum -= s2[i];
		i++;
	}

	return (sum);
}

