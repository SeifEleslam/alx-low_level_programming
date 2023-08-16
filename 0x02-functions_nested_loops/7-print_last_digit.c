#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - pritns the last digit of n
 * @n: int to print its last digit
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = _abs((n % 10));
	_putchar(lastDigit + 48);
	return (lastDigit);
}

