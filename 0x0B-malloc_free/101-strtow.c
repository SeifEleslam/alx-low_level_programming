#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string and return duplicat
 * @str: char*
 * Return: char*
 */

char **strtow(char *str)
{
	int i, len;
	char **newstr, *tmp;
	if (str == NULL || str == "")
		return NULL;
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (i == 0 || str[i-1] == ' '))
			len++;
	newStr = (char **) malloc(sizeof(char) * len + 1);
	if (newStr == NULL)
	       return NULL;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i-1] == ' '))
			for (l = i; str[l] != ' ' && str [l] != '\0'; l++
}
