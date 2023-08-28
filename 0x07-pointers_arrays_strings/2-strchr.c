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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}

