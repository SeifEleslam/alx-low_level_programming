#include "main.h"

/**
 * jack_bauer - prints a 24 hours minute by minute 
 */

void jack_bauer(voud)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h / 10 + 48);
			_putchar(h % 10 + 48);
			_putchar(':');
			_putchar(m / 10 + 48);
			_putchar(h % 10 + 48);
			_putchar('\n');
		}
	}
}

