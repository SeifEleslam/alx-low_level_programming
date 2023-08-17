#include <stdio.h>

/**
 * main - print Fizz Buzz.
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
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}

