#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenation of s1 s2
 * @s1: char *
 * @s2: char *
 * @n: int
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len2, i;
	char *newStr;

	len = 0, len2 = 0;
	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2 != NULL && s2[i] != '\0'; i++)
		len2++;
	if (n > len2)
		n = len2;
	newStr = malloc((len + n + 1) * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	for(i = 0; s1 != NULL && s1[i] != '\0'; i++)
		newStr[i] = s1[i];
	for(; s2 != NULL && i - len < n && s2[i - len] != '\0'; i++)
		newStr[i] = s2[i-len];
	return (newStr);
}
