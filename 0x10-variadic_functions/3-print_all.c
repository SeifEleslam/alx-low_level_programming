#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: - char to sperate ints
 * @n: - num of args
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	int first;
	print_func *funcs[26];
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
	va_end(strs);
}


/**
 * print_char - prints a char
 * @itms: va_list 
 * Return: void
 */
void print_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * print_int - prints an int 
 * @itms: va_list
 * Return: void
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints a float
 * @itms: va_list
 * Return: void
 */
void print_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * print_string - prints a string
 * @itms: va_list
 * Return: void
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char*);
	printf("%s", str ? str : "(nil)");
}
