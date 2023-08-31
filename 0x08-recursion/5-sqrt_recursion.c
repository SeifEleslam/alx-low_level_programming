#include "main.h"

/**
 * _sqrt_recursion - reset the parsing value to 98
 * @n: second passing pointer
 * Return: sad
 */

int square_root(int n, int max);

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return n;
	return (square_root(n, 0));
}

/**
 * square_root - reset the parsing value to 98
 * @n: second passing pointer
 * @max: sda
 * Return: sad
 */

int square_root(int n, int max)
{

	if (max < (n / 2))
	{
		if (max * max == n)
			return (max);
		else
			return (square_root(n, max + 1));
	}
	return (-1);
}

