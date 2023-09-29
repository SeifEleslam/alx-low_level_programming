/**
 * flip_bits - des
 * @n: int 1
 * @m: int 2
 * Return: uint
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	i = 0;
	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			i++;
		n >>= 1, m >>= 1;
	}
	return (i);
}
