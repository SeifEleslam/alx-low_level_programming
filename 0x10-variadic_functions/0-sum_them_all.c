#include <stdarg.h>
/**
 * sum_them_all - sum args
 * @n: unsigned int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, num;
	va_list nums;
	va_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
}

