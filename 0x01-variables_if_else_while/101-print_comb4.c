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
int iii;

for (i = 48; i <= 57; i++)
{
for (ii = 48; ii <= 57; ii++)
{

for (iii = 48; iii <= 57; iii++)
if (i < ii & ii < iii)
{
putchar(i);
putchar(ii);
putchar(iii);
if (i != 55 || ii != 56 || iii != 57)
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
