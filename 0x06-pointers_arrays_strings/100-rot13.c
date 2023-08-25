#include <stdio.h>
#include <string.h>

char rot13(char* str)
{
	for (; *str != '/0'; str++)
	{
		if ((*str >= 'A' && *str <= 'M') || (*str >= 'a' && *str <= 'm'))
		{
			*str += 13;
			continue;
		} 
		while ((*str >= 'N' && *str <= 'Z') || (*str >= 'n' && *str <= 'z'))
		{
			*str -= 13;
			break;
		}
	}
	
	return (str);
}

