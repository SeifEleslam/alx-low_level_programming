#include <stdio.h>
#include <string.h>

/**
 *rev_string - return reverse of s followed by new line
 *@s : the address of the str
 *Return : reverse of provided string
 */

void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = strlen(s);
	for (i = 0; i < len / 2 + 1; i++)
	{
		if(s[i] != s[len - i - 1])
		{
			tmp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = tmp;
		}
	}
}

