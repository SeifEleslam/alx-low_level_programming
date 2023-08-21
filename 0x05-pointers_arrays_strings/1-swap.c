/**
 *swap_int - swap the values of two ints using their addresses
 *@a : the first address
 *@b : the second address
 */

void *swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

