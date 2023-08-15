#include "main.h"
/**
 * _isalpha - returns TRUE (1) if c is a letter
 * @c: int to check
 * Return: 1(TRUE) or 0(FALSE)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

