#include "main.h"

/*
 * print_number - Print a number of any any digit
 * @n : takes an input number
 */

void print_number(int n)
{
	unsigned int tmp;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n == 0)
		_putchar(48);
	else
	{
		if (n / 10 > 0)
		{
			tmp = n / 10;
			print_number(tmp);
			_putchar(n % 10 + 48);
		}
		else if (n % 10 > 0)
		{
			_putchar(n + 48);
		}
	}
}

