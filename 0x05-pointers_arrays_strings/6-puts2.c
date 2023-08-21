#include <stdio.h>
#include <string.h>

/**
 *puts2 - print every other letter of a string
 *@str : the address of the str
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i+=2)
		printf("%c", s[i]);
	printf("\n");
}

