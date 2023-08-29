#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - reset the parsing value to 98
 * @a: second passing pointer
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, i2;

	for (i = 0 ; i < 8; i++)
	{
		for (i2 = 0; i2 < 8; i2++)
			printf("%c", a[i][i2]);
		printf("\n");
	}
}

