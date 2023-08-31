#include "main.h"

/**
 * factorial - reset the parsing value to 98
 * @n: second passing pointer
 * Return: sad
 */

int factorial(int n)
{
	if (n = 0)
		return (0);
	else if (n > 0)
		return (factorial(n - 1) * n);
	else
		return (-1);
}

