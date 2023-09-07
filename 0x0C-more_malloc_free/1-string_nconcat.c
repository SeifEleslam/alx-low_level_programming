#include <stdio.h>
#include <stdlib.h>

int _strlen_recursion(char *s);
/**
 * string_nconcat - concatenation of s1 s2
 * @s1: char *
 * @s2: char *
 * @n: int
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, i;
	char *newStr;

	len1 = 0, len2 = 0;
	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2 != NULL && s2[i] != '\0'; i++)
		len2++;
	if (len1 + len2 <= 0)
		return (NULL);
	if (len2 > n)
	       len2 = n;
	newStr = malloc((len1 + len2 + 1) * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	for(i = 0; s1[i] != '\0'; i++)
		newStr[i] = s1[i];
	for(;s2[i - len1] != '\0'; i++)
		newStr[i] = s2[i-len1];
	return (newStr);
}
