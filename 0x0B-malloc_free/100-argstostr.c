#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string and return duplicat
 * @av: char**
 * @ac: int
 * Return: char*
 */

char *argstostr(int ac, char **av)
{
	int i, l, len;
	char *str;

	if (av == NULL || ac <= 0)
		return (NULL);
	len = 0;
	for (i = 1; i < ac; i++)
		for (l = 0; av[i] != NULL && av[i][l] != '\0'; l++)
			len++;
	str = malloc((len + ac + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 1; i < ac; i++)
	{
		for (l = 0; av[i] != NULL && av[i][l] != '\0'; l++)
		{
			str[len] = av[i][l];
			len++;
		}
		str[len] = '\n';
		len++;
	}
	return (str);
}

