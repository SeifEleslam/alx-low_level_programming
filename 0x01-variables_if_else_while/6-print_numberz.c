#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program prints a fixed text to the standard error'
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
