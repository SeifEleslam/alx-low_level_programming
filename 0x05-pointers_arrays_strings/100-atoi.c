/**
 *_atoi -convert string to int
 *@s : the first address of the string
 *Return: the resulted int
 */

int _atoi(char *s)
{
	int i, result, l;
	char *num

	i = 0;
	l = -1;
	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] < 58)
		{
			if (l == -1)
				l = i
			result = (l - i) * 10 + s[i]
		}
		else
		{
			if (l > i)
				break;
		}
		i++;
	}

	if(l == -1)
		return (0);
	if(l > 0 && s[l-1] == '-')
		return (-result);
	return (result);
}

