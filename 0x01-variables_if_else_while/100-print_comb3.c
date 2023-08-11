#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program prints a fixed text to the standard error'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int ii;

for (i = 48; i <= 57; i++)
{
for (ii = 48; ii <= 57; ii++)
{
if (i < ii)
{
putchar(i);
putchar(ii);
if (i != 56 || ii != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
