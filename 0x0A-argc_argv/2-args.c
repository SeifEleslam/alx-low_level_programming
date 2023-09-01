#include "main.h"


/**
 * main - main Entry
 * @argc: int
 * @argv: char**
 * Return: int
 */

int main(int argc, char const *argv[])
{
	int i, l;

	for (i = 0; i < argc; i++)
	{
		for (l = 0; argv[i][l] != '\0'; l++)
			_putchar(argv[i][l]);
		_putchar('\n');
	}
	return (0);
}

