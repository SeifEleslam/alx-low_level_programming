#include "main.h"

int _contain(char *s, char *c);
/**
 * _strstr - reset the parsing value to 98
 * @s: second passing pointer
 * @accept: number of repeated times
 * Return: pointer to dest
 */


char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	for (i = 0 ; haystack[i] != '\0'; i++)
		if (_contain(needle, haystack + i))
			return (haystack + 1);
	return (0);
}

/**
 * _contain - check if string contains given character
 *
 * @s: char*
 * @c: char*
 * Return: int
 */
int _contain(char *s, char *c)
{
	unsigned int pos;

	pos = 0;
	while (s[pos])
	{
		if (s[pos] != c[pos])
		{
			return (0);
		}
		pos++;
	}
	return (1);
}

