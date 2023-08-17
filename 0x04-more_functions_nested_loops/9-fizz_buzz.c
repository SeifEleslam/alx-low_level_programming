#include <stdio.h>
#include "main.h"

/**
 * main - print Fuzz Buzz.
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%i", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		printf(" ");
	}
	printf("\n");

	return (0);
}

