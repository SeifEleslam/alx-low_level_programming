#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program prints a fixed text to the standard error'
 * Return: Always 0 (Success)
 */
int main()
{
char l;

for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
putchar('\n');
return 0;
}