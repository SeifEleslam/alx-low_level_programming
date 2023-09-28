/**
 * binary_to_uint - des
 * @b: binary
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, i;

	if (!b)
		return (0);
	sum = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		sum <<= 1;
		sum += b[i] - '0';
	}
	return (sum);
}
