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
		tmp = -n;
		_putchar('-');
	}
	else
	{
		tmp = n;
	}

	if (tmp == 0)
		_putchar(48);
	else
	{
		if (tmp / 10 > 0)
		{
			tmp = tmp / 10;
			print_number(tmp);
			_putchar(tmp % 10 + 48);
		}
		else if (n % 10 > 0)
		{
			_putchar(tmp + 48);
		}
	}
}

