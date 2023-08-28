#include "main.h"

/**
 * _strpbrk - reset the parsing value to 98
 * @s: second passing pointer
 * @accept: number of repeated times
 * Return: pointer to dest
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, i2;

	for (i = 0 ; s[i] != '\0'; i++)
		for (i2 = 0; accept[i2]; i2++)
			if (accept[i2] == s[i])
				return (accept + i2);

	return (0);
}
