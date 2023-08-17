#include <stdio.h>

/**
 * main - print Fuzz Buzz.
 * Return: 0 Always.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz");
			else if (i % 3 == 0)
				printf("Fizz");
			else (i % 5 == 0)
				printf("Buzz");
		}
		printf(" ");
	}
	printf("\n");

	return (0);
}

