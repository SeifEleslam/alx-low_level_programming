#include "main.h"
#include <stdio.h>

/**
 * _strchr - reset the parsing value to 98
 * @s: first passing pointer
 * @c: second passing pointer
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int i;
	char *r;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			r = s + i;
			return (r);
		}
	}

	return (NULL);
}

