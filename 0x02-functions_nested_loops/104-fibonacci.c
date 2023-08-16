#include "main.h"
#include <stdio.h>

/**
 * num_len - return the length of unsigned long num
 * @num: the number to return its length
 * Return: the length of num
 */

int num_len(unsigned long num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * fb - prints first limit  numbers of the fibonacci sequence
 * @f1: the num berfore previous number
 * @f2: the previous number
 * @f1o: the small part of f1
 * @f2o: the small part of f2
 * @limit: the limit for this fb function
 * Return: void
 */

void fb
(
 unsigned long f1, 
 unsigned long f1o, 
 unsigned long f2, 
 unsigned long f2o, int limit
)
{
	unsigned long tmp, tmp0;
	unsigned long mx = 100000000;
	int i;

	if (f1 == 1 && f2 == 1 && limit > 1)
	{
		printf("%lu, ", f1);
		printf("%lu, ", f2 + f1);
		fb(1, 0, 2, 0, limit - 2);
	}
	else
	{
		tmp = (f2 + f1) % mx;
		tmp0 = f1o + f2o + (f1 + f2) / mx;

		if (tmp0 > 0)
		{
			printf("%lu", tmp0);
		}

		if (tmp > 0)
		{
			i = num_len(mx) - 1 - num_len(tmp);
			while (i > 0 && tmp0 > 0)
			{
				printf("0");
				i--;
			}
			printf("%lu", tmp);
		}
		if(limit != 1)
		{
			printf(", ");
			fb(f2, f2o, (f1 + f2) % mx, f1o + f2o + (f1 + f2) / mx, limit - 1);
		}
	}
}

/**
 * main - prints first 100 numbers of the fibonacci sequence
 * Return: 0
 */
int main(void)
{
	fb(1, 0, 1, 0, 98);
	printf("\n");
	return (0);
}

