#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'the program prints a fixed text to the standard error'
 * Return: Always 1 (Success)
 */

int main(void)
{
	int n;
	int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	last_digit= n % 10;
	printf("Last digit of %d is %d ",n,last_digit);
	if (n>5)
	  printf("and is greater than 5\n");
	else if(n==0)
	  printf("and is 0\n");
	else printf("and is less than 6 and not 0\n");
	return (0);
}
