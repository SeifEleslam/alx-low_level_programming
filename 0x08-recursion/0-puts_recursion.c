#include "main.h"

/**
 * _puts_recursion - reset the parsing value to 98
 * @s: second passing pointer
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

