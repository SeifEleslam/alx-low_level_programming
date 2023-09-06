#include <stdio.h>
#include <stdlib.h>

int word_len(char *s);

/**
 * strtow - duplicate string and return duplicat
 * @str: char*
 * Return: char**
 *
 */

char **strtow(char *str)
{
	int i, l, n, len;
	char **newStr;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			len++;
	if (str == NULL || len == 0)
		return (NULL);

	newStr = (char **) malloc(sizeof(char *) * len + 1);
	if (newStr == NULL)
		return (NULL);
	i = 0, l = 0, n = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			newStr[n] = malloc((word_len(str + i) + 1) * sizeof(char));
			if (newStr[n] == NULL)
			{
				for (i = 0; i < n; i++)
					free(newStr[i]);
				free(newStr);
				return (NULL);
			}
			for (l = 0; str[i] != ' ' && str[i] != '\0'; l++)
			{
				newStr[n][l] = str[i];
				i++;
			}
			n++;
		}
		else
			i++;
	}
	newStr[n] = NULL;
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

	i = 0;
	while (s[i] != ' ' && s[i] != '\0')
		i++;
	return (i);
}
