#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 10 times.
 */

void more_numbers(void)
{
	int i, t;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else
			{
				_putchar(i + 48);
			}
		}
		_putchar('\n');
	}
}

