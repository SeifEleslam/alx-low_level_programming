/**
 *_atoi -convert string to int
 *@s : the first address of the string
 *Return: the resulted int
 */

int _atoi(char *s)
{
	int i, l;
	unsigned int result;

	i = 0;
	l = -1;
	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] < 58)
		{
			if (l == -1)
				l = i;
			result = (i - l) * 10 * result + (s[i] - 48);
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

