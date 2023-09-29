#include "main.h"
/**
 * print_binary - des
 * @n: int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		_putchar((n & 1) + '0');
		n >>= 1;
	}
}
