#include "main.h"

/**
 * _sqrt_recursion - reset the parsing value to 98
 * @n: second passing pointer
 * Return: sad
 */

int square_root (int n, int max, int min);

int _sqrt_recursion(int n)
{
	return square_root(n, n, 0);
}

/**
 * square_root - reset the parsing value to 98
 * @n: second passing pointer
 * @max: sda
 * @min: dsadsa
 * Return: sad
 */

int square_root (int n, int max, int min)
{
	int mid;

	if (max >= min)
	{
		mid = (max - min) / 2;
		if (mid * mid == n)
			return mid;
		else if (mid * mid < n)
			return square_root(n, max, mid + 1);
		else
			return square_root(n, mid-1, min);
	}
	return (-1);
}

