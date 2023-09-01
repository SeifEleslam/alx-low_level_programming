#include "main.h"

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
		if (s[i] == '-')
			continue;
		r *= 10;
		r += s[i] - '0';
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

/**
 * main - main Entry
 * @argc: int
 * @argv: char**
 * Return: int
 */

int main(int argc, char *argv[])
{
	char s[5] = "Error";
	int i;

	if (argc - 1 < 2)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		_putchar('\n');
		return (1);
	}

	i = _to_int(argv[1]) * _to_int(argv[2]);
	print_number(i);
	_putchar('\n');
	return (0);
}

