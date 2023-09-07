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
	int len, _pos, _n, _glob_pos, i;
	char *concat;

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		len++;
	len += n;
	concat = malloc(len * sizeof(char) + 1);
	_pos = 0, _n = 0, _glob_pos = 0;
	if (concat == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[_pos])
		{
			concat[_glob_pos] = s1[_pos];
			_pos++;
			_glob_pos++;
		}
	}
	_pos = 0;
	len = 0;
	for (i = 0; s2 != NULL && s1[i] != '\0'; i++)
		len++;
	if (s2 != NULL)
	{
		_n = n;
		if (_n > len)
			_n = len;
		while (s2[_pos] && _pos < _n)
		{
			concat[_glob_pos] = s2[_pos];
			_pos++;
			_glob_pos++;
		}
	}
	concat[_glob_pos] = '\0';
	return (concat);
}
