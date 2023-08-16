#include "main.h"

/**
 *putchar_n - Print a number of any any digit
 *@num : takes an input number
 *
 *
 */

void putchar_n(int num)
{
	int tmp2;

	if (num == 0)
		_putchar(48);
	else
	{
		if (num / 10 > 0)
		{
			tmp2 = num / 10;
			putchar_n(tmp2);
			_putchar(num % 10 + 48);
		}
		else if (num / 10 == 0)
		{
			_putchar(num + 48);
		}
	}
}

/**
 *numLength - returns the lenth of string
 *@num : operand number
 *Return: number of digits
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}


	return (length);
}

/**
 * print_times_table - print multiplication table for factor of n
 * @n: integer n
 */
void print_times_table(int n)
{
	int i, j, prod, m;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				putchar_n(prod);
				if (j != n)
				{
					_putchar(',');

					for (m = 0; m < 4 - numLength(i * (j + 1)); m++)
					{
						_putchar(' ');
					}
				}

			}
			_putchar('\n');
		}
	}
}

