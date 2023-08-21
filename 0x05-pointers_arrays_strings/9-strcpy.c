/**
 *_strcpy - return pointer to the string
 *@src: the address of provided string
 *@dest: the destination to put the copy on
 *Return: address of the copy of the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

