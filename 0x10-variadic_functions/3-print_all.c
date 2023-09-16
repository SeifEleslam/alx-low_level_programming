#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print strings
 * @format: - char to sperate ints
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	int first;
	print_func funcs[26];
	void (*func)(va_list);
	va_list itms;

	i = 0;
	while (i < 26)
	{
		funcs[i] = NULL;
		i++;
	}

	funcs['c' - 'a'] = print_char;
	funcs['i' - 'a'] = print_int;
	funcs['f' - 'a'] = print_float;
	funcs['s' - 'a'] = print_string;

	va_start(itms, format);
	first = 0;
	i = 0;
	while (format[i] != '\0')
	{
		func = funcs[format[i] - 'a'];
		if (func)
		{
			if (first > 0)
				printf(", ");
			func(itms);
			first = 1;
		}
		i++;
	}
	printf("\n");
	va_end(itms);
}


/**
 * print_char - prints a char
 * @itms: va_list
 * Return: void
 */
void print_char(va_list itms)
{
	printf("%c", (char) va_arg(itms, int));
}

/**
 * print_int - prints an int
 * @itms: va_list
 * Return: void
 */
void print_int(va_list itms)
{
	printf("%d", va_arg(itms, int));
}

/**
 * print_float - prints a float
 * @itms: va_list
 * Return: void
 */
void print_float(va_list itms)
{
	printf("%f", (float) va_arg(itms, double));
}

/**
 * print_string - prints a string
 * @itms: va_list
 * Return: void
 */
void print_string(va_list itms)
{
	char *str = va_arg(itms, char*);

	printf("%s", str ? str : "(nil)");
}
