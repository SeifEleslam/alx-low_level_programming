#include "main.h"


/**
 * wildcmp_rec - reset the parsing value to 98
 * @s1: second passing pointer
 * @s2: sda does something
 * Return: sad
 */

char *wildcmp_rec(char *s1, char *s2)
{
	char r[2];

	if (*s2 == '\0' || *s2 == '*')
		return (s1);
	else if (*s1 == '\0')
	{
		r = '\0\0';
		return r + 1;
	}
	else if (*s1 == *s2)
		return (wildcmp_rec(s1 + 1, s2 + 1));
	else
		return (wildcmp_rec(s1 + 1, s2));
}

/**
 * ignore_star - reset the parsing value to 98
 * @s: second passing pointer
 * Return: sad
 */

char *ignore_star(char *s)
{
	if (*s != '*')
		return (s);
	else
		return (ignore_star(s + 1));
}

/**
 * reach_star - reset the parsing value to 98
 * @s: second passing pointer
 * Return: sad
 */

char *reach_star(char *s)
{
	if (*s == '*' || *s == '\0')
		return (s);
	else
		return (ignore_star(s + 1));
}


/**
 * wildcmp - reset the parsing value to 98
 * @s1: second passing pointer
 * @s2: wildcmp
 * Return: sad
 */

int wildcmp(char *s1, char *s2)
{
	char *s, *ss;

	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	else if (*s1 == '\0')
		return (0);
	s = wildcmp_rec(s1, s2);
	if (*(s - 1) == '\0')
		ss = s2;
	else
		ss = ignore_star(reach_star(s2));
	return (wildcmp(s, ss));
}

