#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program prints a fixed text to the standard error'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i1;
int ii1;
int i2;
int ii2;

for (i1 = 48; i1 <= 57; i1++)
{
for (ii1 = 48; ii1 <= 57; ii1++)
{
for (i2 = 48; i2 <= 57; i2++)
{
for (ii2 = 48; ii2 <= 57; ii2++)
{
if (i1 <= i2 && ii1 < ii2)
{
putchar(i1);
putchar(ii1);
putchar(' ');
putchar(i2);
putchar(ii2);
if (i1 != 57 || ii1 != 56 || ii2 != 57 || i2 != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');

return (0);
}
