#include "main.h"
#include <stdio.h>


/**
 * fb - prints first n numbers of fibonacci seq
 * Return: void
 */

void fb(long f1, long f2, int limit)
{
	if (f1 == 1 && f2 == 1 && limit > 1)
	{
		printf("%lu, ", f1);
		printf("%lu, ", f2 + f1);
		fb(1, 2, limit - 2);
	}
	else if (limit == 1)
	{
		printf("%lu", f1 + f2);
	}
	else
	{
		printf("%lu, ", f2 + f1);
		fb(f2, f1 + f2, limit - 1);
	}
}


/**
 * main - prints first 50 numbers of the fibonacci sequence
 * Return: 0
 */
int main(void)
{
	fb(1, 1, 50);
	printf("\n");
	return (0);
}

