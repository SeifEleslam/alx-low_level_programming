#include <stdio.h>
#include <string.h>

/**
 *rot13 - concatenates two strings
 *@str: the first address of the string
 *Return: new string
 */


char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
		{
			str[i] += 13;
			continue;
		}
		while ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] -= 13;
			break;
		}
	}

	return (str);
}

