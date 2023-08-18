#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	long i, num, output;

	num = 612852475143;
	for (i = 0; i < num / 1000000 + 1; i++)
	{
		if (num % i == 0)
		{
			output = i;
			while (num % i == 0)
				num /= i;
		}
	}
//	if (num > output)
//		output = num;
	printf("%lu\n", output);

	return (0);
}

