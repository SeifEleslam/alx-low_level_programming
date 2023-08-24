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
	while (sum == 0)
	{
		if (s1[i] && s2[i])
			sum += s1[i] - s2[i];
		else if (s1[i])
			sum += s1[i];
		else if (s2[i])
			sum -= s2[i];
		else
			break;
		i++;
	}

	return (sum);
}

