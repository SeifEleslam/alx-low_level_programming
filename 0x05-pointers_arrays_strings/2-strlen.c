/**
 *_strlen - return the len of a str
 *@s : the first address of the string
 */

int _strlen(char *s)
{
	int len;
	
	len = 0;
	while(s[len] != '\0')
		len++;
	return len;
}

