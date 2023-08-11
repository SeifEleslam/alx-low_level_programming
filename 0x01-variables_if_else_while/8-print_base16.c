#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program prints a fixed text to the standard error'
 * Return: Always 0 (Success)
 */
int main()
{
int i;

for (i = 48; i <= (48 + 15); i++)
{
if (i >= (48 + 10))
{
putchar(i + (87 - 48));
}
else
{
putchar(i);
}
}
putchar('\n');

return 0;
}
