#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: 'the program prints a fixed text to the standard error'
 * Return: Always 1 (Success)
 */

int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int length = strlen(msg);
write(STDERR_FILENO, msg, length);
return (1);
}
