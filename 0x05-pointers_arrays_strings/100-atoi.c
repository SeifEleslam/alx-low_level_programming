/**
 *_atoi -convert string to int
 *@s : the first address of the string
 *Return: the resulted int
 */

int _atoi(char *s)
{
	int i, l, sign;
	unsigned int result;

	result = 0;
	sign = 0;
	i = 0;
	l = -1;
	while (s[i] != '\0')
	{
		if(l == -1 && s[i] == '-')
			sign++;
		if (s[i] >= 48 && s[i] < 58)
		{
			if (l == -1)
				l = i;
			result = 10 * result + (s[i] - 48);
		}
		else
		{
			if (l > i)
				break;
		}
		i++;
	}

	if(sign % 2 != 0)
		return (-result);
	return (result);
}

