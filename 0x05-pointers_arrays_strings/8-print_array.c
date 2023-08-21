#include <stdio.h>

/**
 *print_array - print the first n elements in a array
 *@a : the address of the array
 *@n : the required len to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if(a[i] != '\0')
			printf("%i", a[i]);
		else
			break;
	}
        printf("\n");
}

