#include <stdio.h>

/*
 *Dscription: 'main - prints the name of the program'
 *Return: Always 0 (Success)
 */

int main(void)
{
int intType;
float floatType;
long long doubleLongType;
long longType;
char charType;
printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longType));
printf("Size of long long int: %zu byte(s)\n", sizeof(doubleLongType));
printf("Size of float: %zu byte(s)\n", sizeof(charType));
return (0);
}
