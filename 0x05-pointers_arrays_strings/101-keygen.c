#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program to generate pwd
 * Return: generated password
 */

int main(void)
{
	char pwd[98];
	int i, random, sum;

	sum = 0;
	i = 0;
	srand(time(NULL));
	while (i < 98)
	{
		if (i % 2 == 0 && 2772 - sum > 'z' + 'Z')
		{
			random = rand() % ('z' - 'a') + 'a';
		}
		else
		{
			random = rand() % ('Z' - 'A') + 'A';
		}
		sum += random;
	       	pwd[i] = (char)random;
		if (2772 - sum - 'A' < ('Z' - 'A'))
		{
			pwd[i + 1] = 2772 - sum;
			break;
		}
		i++;
	}
	printf("%s", pwd);
	return (0);
}

