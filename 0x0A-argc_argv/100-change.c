#include <stdlib.h>
#include "main.h"

/**
 * main - main Entry
 * @argc: int
 * @argv: char**
 * Return: int
 */
int main(int argc, char const *argv[])
{
	int n, sum, i;
	char s[5] = "Error";
	int const values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		_putchar('\n');		
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	sum = 0;
	for (i = 0; i < 5 && n > 0; i++)
	{
		sum += n / values[i];
		n = n % values[i];
	}
	print_number(sum);
	_putchar('\0');
	return (0);

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
