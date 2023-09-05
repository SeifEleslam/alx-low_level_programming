#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string and return duplicat
 * @str: char*
 * Return: char*
 */

int word_len(char *s);

char **strtow(char *str)
{
	int i, l, n, len;
	char **newstr;

	if (str == NULL || str == "")
		return NULL;
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (i == 0 || str[i-1] == ' '))
			len++;
	newStr = (char **) malloc(sizeof(char) * len + 1);
	if (newStr == NULL)
	       return NULL;
	i = 0, l = 0, n = 0;
	newStr[i] = malloc
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i-1] == ' '))
		{
			newStr[n] = malloc((word_len(str + i) + 1) * sizeof(char));
			for (l = i; str[l] != ' ' && str [l] != '\0'; l++)
			{
				newStr[n][l] = str[i];
				i++;
			}
			n++;
		}
		else
			i++;
	}
	return (newStr);
		
}

/**
 * word_len - return the length of parsing param
 * @s: string passing pointer
 * Return: length of s
 */
int word_len(char *s)
{
	int i;

	while (s[i] != ' ' && s[i] != '\0')
		i++;
	return (i);
}
