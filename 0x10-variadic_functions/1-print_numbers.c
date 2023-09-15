#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print ints
 * @separator: - char to sperate ints
 * @n: - num of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(nums, int), separator ? separator : "");
	va_end(nums);
}
