#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program prints a fixed text to the standard error'
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *string = "_putchar";
    for (int i = 0; i < strlen(string); i++)
    {
        putchar(string[i]);
    }
    putchar('\n');

    return (0);
}

