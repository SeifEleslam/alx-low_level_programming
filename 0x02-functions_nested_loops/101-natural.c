#include "main.h"


/**
 *putchar_n - Print a number of any any digit
 *@num : takes an input number
 *
 *
 */

void putchar_n(int num)
{
	int tmp2;

	if (num == 0)
		_putchar(48);
	else
	{
		if (num / 10 > 0)
		{
			tmp2 = num / 10;
			putchar_n(tmp2);
			_putchar(num % 10 + 48);
		}
		else if (num / 10 == 0)
		{
			_putchar(num + 48);
		}
	}
}

/**
 * sum_step - returns the sum of numbers from start to end with step steps
 * @start: the first number
 * @end: the last number
 * @step: the value of steps
 * Return: sum
 */

int sum_step(int start, int end, int step)
{
	int sum = 0, i;

	for (i = start; i < end; i += step)
	{
		sum += i;
	}
	return (sum);

}
/**
 * main - prints the sum of all numbers under 1024
 * that are divisible by 3 or 5
 * Return: 0
 */
int main(void)
{
	putchar_n(sum_step(3, 1024, 3) + sum_step(5, 1024, 5) - sum_step(15, 1024, 15));
	_putchar('\n');
	return (0);
}

