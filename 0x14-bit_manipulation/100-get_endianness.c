/**
 * get_endianness - des
 * Return: uint
 */
int get_endianness(void)
{
	int test_value;

	test_value = 0x80000000;
	if ((test_value >> ((sizeof(test_value) - 1) * 8)) == 0x80)
		return 1;
	return 0;
}
