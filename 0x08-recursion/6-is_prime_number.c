#include "main.h"


/**
 * prime_check - reset the parsing value to 98
 * @n: second passing pointer
 * @max: sda does something
 * Return: sad
 */

int prime_check(int n, int max)
{

	if (max < (n / 2))
	{
		if (n % max == 0)
			return (0);
		else
			return (prime_check(n, max + 1));
	}
	return (1);
}

/**
 * is_prime_number - reset the parsing value to 98
 * @n: second passing pointer
 * Return: sad
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (prime_check(n, 2));
}

