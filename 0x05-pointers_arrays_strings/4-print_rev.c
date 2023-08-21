#include <stdio.h>
#include <string.h>

/**
 *print_rev - print reverse of s followed by new line
 *@s : the address of the str
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}

