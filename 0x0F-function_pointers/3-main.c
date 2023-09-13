#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main function
 * @ac: n of args
 * @av: args
 * Return: int defined success status
 */

int main(int ac, char *av[])
{
	int n2;
	int (*op_func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n2 = atoi(av[3]);
	op_func = get_op_func(av[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if (n2 == 0 && (strcmp("/", av[2]) == 0 || strcmp("%", av[2]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_func(atoi(av[1]), n2));
	return (0);
}
