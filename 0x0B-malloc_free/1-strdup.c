#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string and return duplicat
 * @str: char*
 * Return: char*
 */

char *_strdup(char *str)
{
	int len;
	char *newStr;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	newStr = malloc(len * sizeof(char) + 1);
	if (newStr == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		newStr[len] = str[len];
	return (newStr);
}

