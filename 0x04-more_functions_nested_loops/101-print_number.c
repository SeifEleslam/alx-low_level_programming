#include "main.h"

/*
 * print_number - Print a number of any any digit
 * @n : takes an input number
 */

void print_number(int n)
{
	int tmp2;

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
			tmp2 = n / 10;
			print_number(tmp2);
			_putchar(n % 10 + 48);
		}
		else if (n % 10 > 0)
		{
			_putchar(n + 48);
		}
	}
}

