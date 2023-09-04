#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - duplicate string and return duplicat
 * @s1: char*
 * @s2: char*
 * Return: char*
 */

char *str_concat(char *s1, char *s2)
{
	int len, size;
	char *newStr;

	len = 0;
	while (s1[len] != '\0')
		len++;
	size = len;
	len = 0;
	while (s2[len] != '\0')
		len++;
	size += len;
	newStr = malloc(size * sizeof(char) + 1);
	if (newStr == NULL)
		return (NULL);
	for (len = 0; s1[len] != '\0'; len++)
		newStr[len] = s1[len];
	size = len;
	for (len = 0; s2[len] != '\0'; len++)
		newStr[size + len] = s2[len];
	return (newStr);
}

