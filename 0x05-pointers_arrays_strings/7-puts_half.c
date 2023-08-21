#include <stdio.h>
#include <string.h>

/**
 *puts_half - print the second half of a str
 *@str : the address of the str
 */

void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = (len + 1) / 2; i < len; i++)
		printf("%c", str[i]);
	printf("\n");
}

