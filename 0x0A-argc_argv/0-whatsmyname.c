#include "main.h"


/**
 * main - main Entry
 *
 * @argc: int
 * @argv: char**
 *
 * Return: int
 */

int main(int __attribute__ ((unused)) argc, char const *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
		_putchar(argv[0][i]);
	_putchar('\n');
	return (0);
}

