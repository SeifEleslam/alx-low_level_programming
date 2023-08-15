#include "main.h"
/**
 * main - Entry point
 * Description: 'the program prints a fixed text to the standard error'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char *string = "_putchar";

	while (i < (int)strlen(string))
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

