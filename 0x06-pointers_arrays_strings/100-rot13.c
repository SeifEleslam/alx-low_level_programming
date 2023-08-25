#include <stdio.h>
#include <string.h>

char rot13(char* str)
{
	int i, key, currentLetter;
	char cipher;	

	key = 13;
	for (i = 0, str[i] != '/0'; i++)
	{
		currentLetter = str[n];
		cipher = currentLetter + key;
		if ((currentLetter - 'a') - key > 26)
		{
			key = ((currentLetter - 'a') + key) % 26;
			cipher = 'a' + key;
		}
		str[i] = cipher;
		key = 13;
	}
    return 0;
}

