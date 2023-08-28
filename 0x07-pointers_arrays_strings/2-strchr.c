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
	do {
		if (s[0] == c)
			return s;
	} while (s++)
	return (0);
}

