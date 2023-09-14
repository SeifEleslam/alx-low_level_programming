#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * @ac: n of params
 * @av: params
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i, n;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(av[1]);
	if (n <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
