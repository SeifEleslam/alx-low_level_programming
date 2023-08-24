/**
 *reverse_array - concatenates two strings
 *@a : the first address of the string
 *@n : the second address of the other string
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}
}

