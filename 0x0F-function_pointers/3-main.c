#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main function
 * @ac: n of args
 * @av: args
 * Return: int defined success status
 */

int main(int argc, char *argv[])
{
  int n2;
  int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if (n2 == 0 && (strcmp("/", argv[2]) == 0 || strcmp("%", argv[2]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(atoi(av[1]), n2);
	return (0);
}
