int main(int argc, char *argv[])
{
	char s[5] = "Error";
	int i, sum, n;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		n = _to_int(argv[i])
		if (n)
			sum += n;
		else
		{
			for (i = 0; s[i] != '\0'; i++)
				_putchar(s[i]);
			_putchar('\n');
			return (1);
		}

	}
	print_number(sum);
	_putchar('\n');
	return (0);
}

