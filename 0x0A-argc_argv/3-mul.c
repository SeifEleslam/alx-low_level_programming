#include "main.h"


/**
 * main - main Entry
 * @argc: int
 * @argv: char**
 * Return: int
 */

int main(int argc, char const *argv[])
{
	char s[5] = "Error";
	int i;

	if (argc - 1 < 2)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (1);
	}

	i = (argv[1] - '0') * (argv[2] - '0');
	do
	{
		_putchar(i % 10 + '0');
		i = i / 10;
	} while (i > 0)
	return (0);
}

