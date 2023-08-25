/**
 *leet - concatenates two strings
 *@str : the first address of the string
 *Return : new string
 */

char *leet(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
			i++;
			continue;
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
			i++;
			continue;
                }
		if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
			i++;
			continue;
		}
		if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
			i++;
			continue;
		}
		if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
		i++;
	}
	return (str);
}

