/**
 *string_toupper - concatenates two strings
 *@str : the first address of the string
 *Return : new string
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}

