#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print name with given func
 * @name: char *
 * @f: function used to prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}

