#include "main.h"

/**
 * print_num - sd
 * @num: size_t
 *
 */

void print_num(size_t num)
{
    if (num / 10 > 0)
        print_num(num / 10);
    _putchar(num % 10 + '0');
}

/**
 * print_str - sd
 * @len: size_t
 * @s: char*
 */
void print_str(char *s, size_t len)
{
    int i;

    for (i = 0; i < len; i++)
        _putchar(s[i]);
}

