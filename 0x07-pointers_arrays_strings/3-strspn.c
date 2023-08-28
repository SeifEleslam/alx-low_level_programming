#include "main.h"

/**
 * _strspn - reset the parsing value to 98
 * @s: second passing pointer
 * @accept: number of repeated times
 * Return: pointer to dest
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, i2, n;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (i2 = 0; accept[i2]; i2++)
		{
			if (accept[i2] == s[i])
			{
				n++;
				break;
			}
		}
		if (n <= i)
			return (n);
	}

	return (n);
}

