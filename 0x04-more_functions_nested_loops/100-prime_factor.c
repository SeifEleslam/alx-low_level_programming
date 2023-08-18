#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int i, num, output;

	num = 612852475143;
	for (i = 2; i < (num / 1000000); i++)
	{
		if (num % i == 0)
		{
			output = i;
			while (num % i == 0)
				num /= i;
		}
	}
	if (num > output)
		output = num;
	printf("%ld\n", output);

	return (0);
}

