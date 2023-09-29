#include "main.h"
/**
 * print_binary_rec - des
 * @n: int
 */
void print_binary_rec(unsigned long int n)
{
	if ((n >> 1) > 0)
		print_binary_rec(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - des
 * @n: int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_rec(n);
}

