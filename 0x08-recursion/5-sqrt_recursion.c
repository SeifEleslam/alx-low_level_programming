#include "main.h"

/**
 * _sqrt_recursion - reset the parsing value to 98
 * @n: second passing pointer
 * Return: sad
 */

int _sqrt_recursion(int n)
{
	int sqrt_n;

	if (n <= 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
	sqrt_n = _sqrt_recursion(n / 2);
	if(sqrt_n * sqrt_n == n)	
		return (sqrtn);
	else if (sqrt_n + 1 != 2)
		return (sqrt_n + 1);
	else
		return (-1);
}

