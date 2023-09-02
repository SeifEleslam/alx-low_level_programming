#include "main.h"

/**
 * main - main Entry
 *
 * @argc: int
 * @argv: char**
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	char s[5] = "Error";
	int i, sum, n;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		n = _to_int(argv[i]);
		if (n)
			sum += n;
		else
		{
			for (i = 0; s[i] != '\0'; i++)
				_putchar(s[i]);
			_putchar('\n');
			return (1);
		}
	}
	print_number(sum);
	_putchar('\n');
	return (0);
}

/**
 * _to_int - convert string to int
 *
 * @s: char*
 * Return: int
 */

int _to_int(char *s)
{
	int i, r;

	r = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			r *= 10;
			r += s[i] - '0';
		}
		else if (s[i] == '-' && i == 0)
			continue;
		else
			return ('\0');
	}
	if (s[0] == '-')
		return (-1 * r);
	return (r);
}


/**
 * print_number - reverse the given string
 * @n: array length
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n > 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
