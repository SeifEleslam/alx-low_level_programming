#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
char *_sum(char *n1, char *n2, int len1, int len2);
char *_calloc(unsigned int nmemb, unsigned int size);
char *_mul(char *n1, char *n2, int len1, int len2);
void _error();

/**
 * main - check the code for
 * Return: if run correct 0.
 */

int main(int ac, char **av)
{
	char *output, *freeref;
	int i;

	if (ac != 3)
		_error();
	output = _mul(av[1], av[2], _strlen(av[1]), _strlen(av[2]));
	freeref = output;
	for (i = 0; output[0] == '0' && _strlen(output) > 1; i++)
		output++;
	for (i = 0; output[i] != '\0'; i++)
		_putchar(output[i]);
	_putchar('\n');
	free(freeref);
	return (0);
}

/**
 * -mul - check the code for
 * @n1: char *
 * @n2: char *
 * @len1: int
 * @len2: int
 * Return: len.
 */

char *_mul(char *n1, char *n2, int len1, int len2)
{
	char *muls_sum, *single_mul;
	int i, l, mul_num, mul_size;

	muls_sum = _calloc(len1 + len2, sizeof(char));
	for (i = len1; i > 0; i--)
	{
		for (l = len2; l > 0; l--)
		{
			if (!(n1[i - 1] >= '0' && n1[i - 1] <= '9') || !(n2[l - 1] >= '0' && n2[l - 1] <= '9'))
			{
				free(muls_sum);
				_error();
			}
			mul_size = len1 - i + len2 - l + 2;
			single_mul = _calloc(mul_size, sizeof(char));
			mul_num = (n1[i - 1] - '0') * (n2[l - 1] - '0');
			single_mul[1] = (mul_num % 10) + '0';
			single_mul[0] = (mul_num / 10) + '0';
			_sum(muls_sum, single_mul, len1 + len2, mul_size);
			free(single_mul);
		}
	}
	return (muls_sum);
}

/**
 * _sum - check the code for
 * @n1: char *
 * @n2: char *
 * @len1: int
 * @len2: int
 * Return: len.
 */

char *_sum(char *n1, char *n2, int len1, int len2)
{
	int i, carry, tmp_sum;
	char sec_num;

	i = 1, carry = 0;
	while (i <= len1)
	{
		sec_num = len2 - i >= 0 ? n2[len2 - i] : '0';
		tmp_sum = n1[len1 - i] + sec_num - 2 * '0' + carry;
		n1[len1 - i] = tmp_sum % 10 + '0';
		carry = tmp_sum / 10;
		i++;
	}
	return (n1);
}

/**
 * _calloc - check the code for
 * @nmemb: int
 * @size: int
 * Return: char *.
 */

char *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr, *tmp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		_error();
	tmp = ptr;
	for (i = 0; i < nmemb * size; i++)
		*tmp++ = '0';
	return (ptr);
}

/**
 * strlen - check the code for
 * @s: char *
 * Return: len.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _error - check the code for
 */
void _error()
{
	char err[] = "Error";
	int i;

	for (i = 0; err[i] != '\0'; i++)
		_putchar(err[i]);
	_putchar('\n');
	exit(98);
}
