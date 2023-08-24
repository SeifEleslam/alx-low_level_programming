
/**
 *string_includes - concatenates two strings
 *@arr : the first address of the string
 *@val : sdads
 *Return: new string
 */

int string_includes(char *arr, char val)
{
	unsigned int i;

	for (i = 0; arr[i] != '\0'; ++i)
		if (arr[i] == val)
			return (1);
	return (0);
}


/**
 *cap_string - concatenates two strings
 *@str : the first address of the string
 *Return: new string
 */

char *cap_string(char *str)
{
	int i;
	char sperators[13];

	sperators = " \t,;.!?\"(){}\n";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a' && string_includes(sperators, str[i - 1]))
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}

