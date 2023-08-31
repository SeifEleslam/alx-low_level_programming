#include "main.h"


/**
 * _strlen_recursion - reset the parsing value to 98
 * @s: second passing pointer
 * Return: val
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 * palindrome_check - reset the parsing value to 98
 * @len :int
 * @s: second passing pointer
 * Return: sad
 */

int palindrome_check(char *s, int len)
{
	if (_strlen_recursion(s) <=  1)
		return (1);
	if (s[0] == s[len-1])
               return palindrome_check(s + 1, len-1);
	else
		return (0);
}

/**
 * is_palindrome - reset the parsing value to 98
 * @s: second passing pointer
 * Return: sada
 */

int is_palindrome(char *s)
{
	return (palindrome_check(s, _strlen_recursion(s)));
}

