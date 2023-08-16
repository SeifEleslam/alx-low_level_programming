#include "main.h"
/**
 * _isalpha - returns 1 if c is positive, -1 if negative, and 0 if 0
 * @c: integer to be tested
 * Return: 1 or 0 or -1
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

