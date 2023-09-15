#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: - char to sperate ints
 * @n: - num of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strs;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);
		printf("%s%s", str ? str : "(nil)",
			separator && i != n - 1 ? separator : "");
	}
	printf("\n");
	va_end(strs);
}
